#include <bits/stdc++.h>
using namespace std;

#define PI 3.14

class shape{
    public:
    virtual ~shape() {}
    virtual int getArea(){
        return -1;
    }
    virtual int getLength(){
        return -1;
    }
    virtual int getBreadth(){
        return -1;
    }
    virtual bool isSquare(){
        return false;
    }
    virtual int getSide(){
        return -1;
    }
    virtual bool isCircle(){
        return false;
    }
    virtual int getRadius(){
        return -1;
    }
};

class rectangle:public shape{
    int length;
    int breadth;
    public:
    rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int getArea(){
        return length*breadth;
    }
    bool isSquare(){
        return length == breadth;
    }
};

class square:public rectangle{
    public:
    square(int side):rectangle(side,side){
    }
    int getSide(){
        return getLength();
    }
};

class ellipse:public shape{
    protected:
    int a;
    int b;
    public:
    ellipse(int a,int b){
        this->a = a;
        this->b = b;
    }
    int getArea(){
        return PI*a*b;
    }
    bool isCircle(){
        return a==b;
    }
};

class circle:public ellipse{
    public:
    circle(int r):ellipse(r,r){
    }
    int getRadius(){
        return a;
    }
};


int main(){
    shape* first = new rectangle(3,3);
    shape* second = new ellipse(3,4);
    cout<<"Area of this rectangle is "<<first->getArea()<<endl;
    cout<<"Area of this ellipse is "<<second->getArea()<<endl;
    cout<<"Is this rectangle a square ? "<<endl;
    if(first->isSquare()){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
    // how do i write this if else by using ? system in c++.
    cout<<second->getLength()<<endl;
    cout<<second->getRadius()<<endl;
    cout<<first->getSide()<<endl;
    cout<<first->getLength()<<endl;

    shape* third = new square(3);
    cout<<third->isSquare()<<endl;
    cout<<third->getArea()<<endl;
    cout<<third->getBreadth()<<endl;
    return 0;
}