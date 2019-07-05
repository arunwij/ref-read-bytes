## Overview
Given a memory address and length this tool reads data from memory upto that length.

## Usage 
```javascript
const  rb = require('@arunwij/read-bytes');

// number of bytes to read
const length = 1000;

// this should be memory address
const pointer;

rb.readBytes(pointer, length);
```
