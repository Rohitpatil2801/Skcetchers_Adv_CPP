#pragma once
#include <vector>
#include "Triangle.h"
#include "BBox.h"

class Triangulation:public Triangle
{

public:
    Triangulation(std::vector<Triangle> triangles);
    ~Triangulation();
    Triangulation();

    std::vector<Triangle> getTriangles();
    virtual void print();


private:
    std::vector<Triangle> mTriangles;
    BBox mBBox;
};
