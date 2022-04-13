const db = require('../database');

const asiakas = {
  getByidAsiakas: function(idAsiakas, callback) {
    return db.query('select * from asiakas where idAsiakas=?', [idAsiakas], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  add: function(asiakas, callback) {
    return db.query(
      'insert into asiakas (nimi,osoite,puhelin,tunnus) values(?,?,?,?)',
      [asiakas.nimi, asiakas.osoite, asiakas.puhelin, asiakas.tunnus],
      callback
    );
  },
  delete: function(idAsiakas, callback) {
    return db.query('delete from asiakas where idAsiakas=?', [idAsiakas], callback);
  },
  update: function(idAsiakas, asiakas, callback) {
    return db.query(
      'update asiakas set nimi=?,osoite=?, puhelin=?,tunnus=? where idAsiakas=?',
      [asiakas.nimi, asiakas.osoite, asiakas.puhelin, asiakas.tunnus, idAsiakas],
      callback
    );
  }
};
module.exports = asiakas;