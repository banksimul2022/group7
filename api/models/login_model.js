const db = require('../database');

const login={
  checkPassword: function(username, callback) {
      return db.query('SELECT pin FROM kortti WHERE idAsiakas = ?',[username], callback); 
    }
};
          
module.exports = login;