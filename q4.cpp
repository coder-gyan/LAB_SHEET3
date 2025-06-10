//  Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members 
// to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects,
//  and other useful functions. Use the classes to create objects in your program. 
#include<iostream>
#include<cmath>
using namespace std;
const float PI = 3.14;
class circle{
    private:
        float radius;
    public:
        void setdata(float r){
            radius=r;
        }
        void perimeter(){
            cout<<"Perimeter of Circle: "<< 2 * PI * radius <<endl;
        }
        void area(){
            cout<<"Area of Circle: "<<  PI * radius * radius <<endl<<endl;
        }
};

class rectangle{
    private:
        float length;
        float breadth;
    public:
        void setdata(int l, int b){
            length = l;
            breadth = b;
        }
        void perimeter(){
            cout<<"Perimeter of Rectangle: "<< 2*(length + breadth) <<endl;
        }
        void area(){
            cout<<"Area of Rectangle: "<< length * breadth <<endl<<endl;
        }
};

class triangle{
    private:
        float sideA;
        float sideB;
        float sideC;
    public:
        void setdata(float a, float b, float c){
            sideA = a;
            sideB = b;
            sideC = c;
        }
        void perimeter(){
            cout <<"Perimeter of Triangle: " << sideA + sideB + sideC<<endl;
        }
        void area(){
            float semiPerimeter = (sideA + sideB + sideC) / 2;
            float& s = semiPerimeter;
            cout <<"Area of Triangle: " << sqrt(s*(s-sideA)*(s-sideB)*(s-sideC)) <<endl <<endl;
        }
};

int main(){
    circle c;
    c.setdata(5);

    rectangle r;
    r.setdata(4,5);

    triangle t;
    t.setdata(3,4,5);

    c.perimeter();
    c.area();

    r.perimeter();
    r.area();

    t.perimeter();
    t.area();

    return 0;
}