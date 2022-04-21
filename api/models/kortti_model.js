const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const kortti={
  get: function(callback) {
    return db.query('select * from kortti', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from kortti where idkortti=?', [id], callback);
  },
  add: function(kortti, callback) {
    bcrypt.hash(kortti.password, saltRounds, function(err, hash) {
      return db.query('insert into kortti (idkortti,pin,idtili,idAsiakas) values(?,?,?,?)'
      [kortti.idkortti, kortti.pin, kortti.idtili, kortti.idAsiakas, hash], callback);
    });
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where idkortti=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    bcrypt.hash(kortti.password, saltRounds, function(err, hash) {
      return db.query('update kortti set pin=? where idkortti=?',
      [kortti.pin, hash, id], callback);
    });
  }

}
          
module.exports = kortti;