#include<iostream>
using namespace std;    
class point{ 
    int x,y;
    public:
    point(int x=0,int y=0):x(x),y(y){}
    point add(const point &p) const {return point(x+p.x,y+p.y);}
    point& setX(int v) {this->x = v; return *this;}
    point& setY(int v) {this->y = v; return *this;}
    void show() const {cout<<"("<<x<<","<<y<<")"<<endl;}
};
void shift (point &p) {p.setX(99);}
void tryshift(pointp) {p.setX(-1);}

int main() 
{
    Point a(1, 2), b(3, 4);
    Point c = a.add(b);                
    c.show();
    Point d = a.setX(7).setY(8);        
    d.show();
    shift(a);   a.show();               
    tryShift(b); b.show();               
    return 0;
}