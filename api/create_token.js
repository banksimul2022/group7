var crypto = require('crypto');
var co = require('co');

function spawnTokenBuf() {
    return function(callback) {
        crypto.randomBytes(64, callback);
    };
}

co(function* () {
    console.log((yield spawnTokenBuf()).toString('base64'));
});