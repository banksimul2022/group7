const express = require('express');
const router = express.Router();
const tili = require('../models/tili_model');

router.get('/:idtili?',
 function(request, response) {
  if (request.params.idtili) {
    tili.getByidtili(request.params.idtili, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    tili.getAll(function(err, dbResult) {
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
  tili.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:idtili', 
function(request, response) {
  tili.delete(request.params.idtili, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:idtili', 
function(request, response) {
  tili.update(request.params.idtili, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;
