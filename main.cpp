#include <iostream>

using namespace std;

class Shape
{

public:
    virtual void area()=0;
    };
class Circle:public Shape{
public:
    void area()
    {
    float radius;
    cout<<"Enter Radius:";
    cin>>radius;
    cout<<"Area ="<<3.14*radius*radius;
    }
};
class Rectangle:public Shape{
public:
    void area()
    {
    float length,breadth;
    cout<<"Enter Length:";
    cin>>length;

    cout<<"Enter Breadth:";
    cin>>breadth;
    cout<<"Area="<<length*breadth;
    }
    };
class Triangle:public Shape{
public:
    void area()
    {
    float base,height;
    cout<<"Enter Base:";
    cin>>base;

    cout<<"Enter height:";
    cin>>height;
    cout<<"Area="<<0.5*base*height;
    }
    };
  int main()
  {

      char option;
      cout<<"Choose Shape:"<<endl;
      cout<<"a.circle"<<endl;
      cout<<"b.Rectangle"<<endl;
      cout<<"c.Traingle"<<endl;
      cout<<"Option:";
      cin>>option;

      if(option =='a')
      {

          Circle c;
          c.area();
      }
     else if (option =='b')
  {
      Rectangle r;
      r.area();
  }
  else if (option =='c')
  {
      Triangle t;
      t.area();
    }
    else{
        cout<<"Wrong option";
    }
    return 0;
  }
