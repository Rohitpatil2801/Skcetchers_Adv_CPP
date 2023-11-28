# Assignment 11 - Use of `std::map` 
 
## Overview
 
In this assignment we used `std::map` container in C++ STL to store  a pair of `<Triangle, double>` where `Triangle` is `object` of class `triangle` reference from the `mtriangles` vector of `triangulation` and double is `perimater` of the triangle.
 
## Implementation 
 
1. **Declared `std::map<Triangle, double> tPerimeter` in location `/Ex11/headers/Triangulation.h`**;
 
2. **`void Triangulation::setPerimeter()` inserts pairs of `Triangle` objects and their `perimeters`.**
 
3. **`void Triangulation::printPerimeter()` prints the perimeters of triangles on the console.Prints the stored perimeters of triangles to the console**.
 
4. **`std::map<Triangle, double> Triangulation::getPerimeter()` returns the entire `std::map` containing triangles and their `perimeters`**.
   
 
