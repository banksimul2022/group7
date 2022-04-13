const express = require('express');
const router = express.Router();
const Asiakas = require('../models/Asiakas_model');

router.get('/:idAsiakas?',
 function(request, response) {
  if (request.params.idAsiakas) {
    Asiakas.getByidAsiakas(request.params.idAsiakas, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    Asiakas.getAll(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});


router.post('/', 
function(request, response) {
  Asiakas.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:idAsiakas', 
function(request, response) {
  Asiakas.delete(request.params.idAsiakas, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:idAsiakas', 
function(request, response) {
  Asiakas.update(request.params.idAsiakas, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;
