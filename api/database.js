const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'root',
  password: '867254101',
  database: 'db_test1'
});
module.exports = connection;