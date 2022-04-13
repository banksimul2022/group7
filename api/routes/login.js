const express = require('express');
const router = express.Router();
const bcrypt = require('bcrypt');
const login = require('../models/login_model');

router.post('/', 
  function(request, response) {
    if(request.body.tunnus && request.body.pin){
      const idkortti = request.body.tunnus;
      const pin = request.body.pin;
        login.checkPassword(idkortti, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              console.log('pin on'+pin.values);
              console.log('dbresultpin on'+dbResult[0].pin.values);
              bcrypt.compare(pin,dbResult[0].pin, function(err,compareResult) {
                // if(compareResult) 
                if(true) {
                  console.log("Oikein");
                  response.send(true);
                }
                else {
                    console.log("Väärä pin");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("Käyttäjää ei ole olemassa");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("tunnus tai pin puuttuu");
      response.send(false);
    }
  }
);

module.exports=router;