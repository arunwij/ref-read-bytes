## Overview
As a developer, when I using C++ application with NodeJS(with node-ffi) I had an issue reading pointer and get data upto sertain lenght from memory. (node-ref didn't have good solution for this). 

So I developed this module to overcome that issue. 

This is a personal experiment to publish this utility. 

Cheers!

## Usage 
```javascript
const  rb = require('ref-read-bytes);

// number of bytes to read
const length = 1000;

// this should be memory address
const pointer;

rb.readBytes(pointer, length);
```
