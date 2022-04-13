var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

const helmet = require('helmet');
const cors = require('cors');

const tiliRouter = require('./routes/tili');
const tilitapahtumatRouter = require('./routes/tilitapahtumat');
const korttiRouter = require('./routes/kortti');
const asiakasRouter = require('./routes/asiakas');
const loginRouter = require('./routes/login');
//const basicAuth = require('express-basic-auth');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use(helmet());
app.use(cors());



app.use('/tili', tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/kortti', korttiRouter);
app.use('/asiakas', asiakasRouter);
app.use('/login', loginRouter);

module.exports = app;
