#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"
#include "headers/Geometry.h"

void printClassName(Point3D obj)
{
    obj.print();
}
 
int main()
{
    //get original shape points
    std::vector<Triangle> triangles;
    Reader readShape("cubeModel.stl");
    readShape.getTriangles(triangles);

    //plot original shape points
    Writer writeGeometry;
    writeGeometry.write("originalShape.txt", triangles);

    Point3D pointobj;
    Triangle triangleobj;
    Triangulation taobbj;

    printClassName(pointobj);
    printClassName(triangleobj);
    printClassName(taobbj);


}