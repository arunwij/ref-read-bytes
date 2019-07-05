const addon = require('bindings')('read-bytes.node');

module.exports = (memoryAddress, lengthToRead) => {
  if(memoryAddress && lengthToRead) {
    return addon.readBytes(memoryAddress, lengthToRead);
  } else {
    throw new Error("Invalid parameters");
  }
};