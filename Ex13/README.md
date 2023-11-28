# Assignment 13 - Interfacing to C

## Overview
 
Optimize program speed by implementing a crucial part in C, applicable to various languages with different keywords/methods. The goal is to enhance performance by treating a code segment directly as C.
 
## Implementation
 
1. **Declared function in `/Ex13/headers/print.h` contains the part of code to implement as a `C`**.

```
#ifndef PRINT_H
#define PRINT_H

#ifdef __cplusplus
extern "C" 
{
    void print();
}
#else
void print();
#endif 

#endif 

```
2. **Defined function `print()` in `/Ex13/src/print.cpp`**. 

```
#include "../headers/print.h"
#include <iostream>
void print()
{
    std::cout<<"File not found";
}
```

3. **The function `print` is used to display error msg as `"File not found"` in `getTriangles()` function**.
