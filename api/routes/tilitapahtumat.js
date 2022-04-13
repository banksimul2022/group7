const express = require('express');
const router = express.Router();
const tilitapahtumat = require('../models/tilitapahtumat_model');

router.get('/:idtilitapahtumat?',
 function(request, response) {
  if (request.params.idtilitapahtumat) {
    tilitapahtumat.getByidtilitapahtumat(request.params.idtilitapahtumat, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    tilitapahtumat.getAll(function(err, dbResult) {
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
  tilitapahtumat.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:idtilitapahtumat', 
function(request, response) {
  tilitapahtumat.delete(request.params.idtilitapahtumat, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:idtilitapahtumat', 
function(request, response) {
  tilitapahtumat.update(request.params.idtilitapahtumat, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;
