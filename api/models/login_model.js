const db = require('../database');

const login={
    checkPassword: function(idkortti, callback) {
      return db.query('SELECT pin FROM kortti WHERE  idkortti= ?',[idkortti], callback);
    }
  };
          
module.exports = login;