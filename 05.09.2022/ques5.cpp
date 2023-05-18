#include<iostream>
using namespace std;
class Shape
{
	public: double a,b;
		void get_data ()
		{
			cin>>a>>b;
		}
		virtual void display_area () = 0;
};


class Triangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of triangle "<<0.5*a*b<<endl;
	}
};


class Rectangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of rectangle "<<a*b<<endl;
	}
};




class Circle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of Circle "<<3.14*a*b<<endl;
	}
};

int main()
{	
	Triangle t;
	cout<<"Enter base and altitude: ";
	t.get_data();
	t.display_area();
	
	
	Rectangle r;
	cout<<"Enter length and breadth: ";
	r.get_data();
	r.display_area();
	
	
Circle c;
	cout<<"Enter radius of circle two times(Note enter same radius both times ) : ";
	c.get_data();
	c.display_area();
	return 0;
}
