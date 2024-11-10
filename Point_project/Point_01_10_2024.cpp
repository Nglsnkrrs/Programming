#include "Point.h"

Point operator+(const Point& obj_, const Point& _obj) { return Point::add(obj_, _obj); }


int main()
{
    Point p1(1, 1);
    Point p2;
    Point p3(1, 1);

    //if (Point::isEquel(p1,p3))
    //{
    //    std::cout << " p1 and p3 are equel" << std::endl;
    //}

    std::cout << "p1: ";
    p1.display();
    std::cout << std::endl;

    std::cout << " enter p2: ";
    p2.write();
    
    std::cout << "p2: ";
    p2.display();
    std::cout << std::endl;

    p3 = p1 + p2; 

    std::cout << "p3: ";
    p3.display();
    std::cout << std::endl;

    //std::cout << "p2 + p1 = ";
    //Point::add(p2, p1).display();

    //
    //std::cout << std::endl;
   
    //std::cout << "distance between ";
    //p1.display();
    //std::cout << " and ";
    //p2.display();
    //std::cout << " is ";
    //std::cout << Point::distance(p1, p2);
    //std::cout << std::endl;

    return 0;
}
