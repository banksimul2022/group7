const db = require('../database');

const kortti = {
  getByidkortti: function(idkortti, callback) {
    return db.query('select * from kortti where idkortti=?', [idkortti], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    return db.query(
      'insert into kortti (pin) values(?)',
      [kortti.pin],
      callback
    );
  },
  delete: function(idkortti, callback) {
    return db.query('delete from kortti where idkortti=?', [idkortti], callback);
  },
  update: function(idkortti, kortti, callback) {
    return db.query(
      'update kortti set pin=?',
      [kortti.pin, idkortti],
      callback
    );
  }
};
module.exports = kortti;