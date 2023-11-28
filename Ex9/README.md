# Assignment 9 - Implemetation of sequential containers List, Vector, Deque part1.
 
## Overview
 
This assignment involves use of sequential containers such as list, vector and deque.
 
## Implementation
 
1. **Defined a function `getTriangles()` in `/Ex10/src/Reader.cpp` to read file**.

2. **`getTriangles()` function reads the data from `.stl` file and stores `vertex points` in vector**.

   ```
       std::vector<Triangle> mTriangles;
   ```
3. **In `/Ex10/src/Writer.cpp` function `void Writer::write(std::string filePath ,std::vector<Triangle>& triangles)` writes vertex points in the text file separated by space character `" "`**.

4. **This program is used to read `.stl` file and insert vertex points into `.txt` files**.
 
5. **The above steps are also used for `std::deque` and `std::list`**.   