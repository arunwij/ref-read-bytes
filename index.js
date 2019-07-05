const addon = require('bindings')('read-bytes.node');

const readBytes = function (memoryAddress, lengthToRead) {
  if(memoryAddress && lengthToRead) {
    return addon.readBytes(memoryAddress, lengthToRead);
  } else {
    throw new Error("Invalid parameters");
  }
};

module.exports = readBytes;