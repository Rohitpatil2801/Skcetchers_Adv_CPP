# Assignment 10 - Implemetation of sequential container Deque Part2.
 
## Overview
 
This assignment involves use of sequential container deque and string concatenation.
 
##Implementation
 
1. **Defined a function `getTriangles()` in `/Ex10/src/Reader.cpp` to read file**.

2. **`getTriangles()` function reads the data from `.stl` file and stores `vertex points` in deque**.
   ```
       std::deque<Triangle> mTriangles;
   ```
3. **In `/Ex10/src/Writer.cpp` function `Writer::write()` writes vertex points in the text file separated by space character `" "`**.

4. **For concatenation purpose, return type double is then converted into string using `std::to_string` function**.
    ```
      std::string s1=std::to_string(int(triangle.p1().x()));
      std::string s2=std::to_string(int(triangle.p1().y())); 
      std::string s3=std::to_string(int(triangle.p1().z()));
      std::string s=s1+" "+s2+" "+s3+" ";
      dataFile <<s<< std::endl;
    ```
5. **This program is used to read `.stl` file and insert vertex points into `.txt` files**.
 
6. **The above steps are also used for `std::vector` and `std::list`**.  