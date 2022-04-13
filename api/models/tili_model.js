const db = require('../database');

const tili = {
  getByidtili: function(idtili, callback) {
    return db.query('select * from tili where idtili=?', [idtili], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tili', callback);
  },
  add: function(tili, callback) {
    return db.query(
      'insert into tili (tilinumero,saldo) values(?,?)',
      [tili.tilinumero, tili.saldo],
      callback
    );
  },
  delete: function(idtili, callback) {
    return db.query('delete from tili where idtili=?', [idtili], callback);
  },
  update: function(idtili, tili, callback) {
    return db.query(
      'update tili set tilinumero=?,saldo=? where idtili=?',
      [tili.tilinumero, tili.saldo, idtili],
      callback
    );
  }
};
module.exports = tili;