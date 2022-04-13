const db = require('../database');

const tilitapahtumat = {
  getByidtilitapahtumat: function(idtilitapahtumat, callback) {
    return db.query('select * from tilitapahtumat where idtilitapahtumat=?', [idtilitapahtumat], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (tilinumero,pvm,klo,summa) values(?,?,?,?)',
      [tilitapahtumat.tilinumero, tilitapahtumat.pvm, tilitapahtumat.klo, tilitapahtumat.summa],
      callback
    );
  },
  delete: function(idtilitapahtumat, callback) {
    return db.query('delete from tilitapahtumat where idtilitapahtumat_=?', [idtilitapahtumat], callback);
  },
  update: function(idtilitapahtumat, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set tilinumero=?,pvm=?, klo=?, summa=?, where idtilitapahtumat=?',
      [tilitapahtumat.tilinumero, tilitapahtumat.pvm, tilitapahtumat.klo, tilitapahtumat.summa, idtilitapahtumat],
      callback
    );
  }
};
module.exports = tilitapahtumat;