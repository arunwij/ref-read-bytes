## Overview
Given a memory address and length this tool reads data from memory upto that length.

## Usage 
```javascript
const  rb = require('@arunwij/read-bytes');

// number of bytes to read
const length = 1000;

// this should be memory address
// check node-ref for accessing memory addresses
const pointer = < memory address >;


rb.readBytes(pointer, length);
```
