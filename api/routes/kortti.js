const express = require('express');
const router = express.Router();
const kortti = require('../models/kortti_model');

router.get('/:idkortti?',
 function(request, response) {
  if (request.params.idkortti) {
    kortti.getByidkortti(request.params.idkortti, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    kortti.get(function(err, dbResult) {
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
  kortti.add(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body); 
    }
  });
});

router.delete('/:idkortti', 
function(request, response) {
  kortti.delete(request.params.idkortti, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(count);
    }
  });
});


router.put('/:idkortti', 
function(request, response) {
  kortti.update(request.params.idkortti, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;