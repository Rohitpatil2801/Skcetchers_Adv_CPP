# Assignment 12: Implementation of virtual function.
 
## Overview
 
In this assignment, we implemented `multi-level` inheritance with `virtual` function.
 
## Implementation Steps
 
1. **Declared `print()` function as virtual in `Point3D`,`Triangle` and `Triangulation` classes**.
 
```
virtual void print();
```
2. **Triangle inherites `Point3D` class and `Triangulation` inherites Triangle class**.
 
```
class Triangle : public Point3D
{
};
```
 
```
class Triangulation : public Triangle
{
};
```
 
3. **Defined `print()` function in `Point3D`,`Triangle` and `Triangulation` classes**.
```
void Point3D::print()
{
    std::cout<<"point3D class"<<std::endl;
}
```
```
void Triangle::print()
{
    std::cout<<"Triangle class"<<std::endl;
}
```
```
void Triangulation::print()
{
    std::cout<<"Triangulation class"<<std::endl;
}
```
 
4. **Defined a function in main which takes `Point3D` object as argument**.
 
```
void printClassName(Point3D obj)
{
    obj.print();
}
```
5. **Created obj of Point3D, Trinagle and Triangulation**.
 
```
    Point3D pointObj;
    Triangle triangleObj;
    Triangulation triangulationObj;
```
 
6. **Objects are passed to `printClassName()` function to print class name**.
```
    printClassName(pointObj);
    printClassName(triangleObj);
    printClassName(triangulationObj);
```
 
7. **File location**

 `Point3D class`- /Ex12/headers/Point3D.h
 
 `Triangle class`- /Ex12/headers/Triangle.h
 
 `Triangulation class`- /Ex12/headers/Triangulation.h
 
 `Function defination`- /Ex12/src/Point3D.cpp
 
 `Function defination`- /Ex12/src/Triangle.cpp
 
 `Function defination`- /Ex12/src/Triangulation.cpp
 
 `Test code`- /Ex12/main.cpp