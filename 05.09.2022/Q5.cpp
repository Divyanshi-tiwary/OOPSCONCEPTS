#include<iostream>
using namespace std;
class Shape
{
	public:
		int a,b;
		void get_data(int n,int m){
			a=n;
			b=m;
		}
};
class rectangle:public shape 
{
	public:
		int rect_area()
		{
			int result=a*b;
			return result;
		}
};
class triangle:public shape
{
	public:
		int triangle_area(){
		
		float result=0.5*a*b;
		return result;
	}
};
class circle:public shape(){
	public:
		int circle_area(){
			float result=3.14*a*b;
			return result;
		}
};
int main()
{
	rectangle r;
	triangle t;
	circle c;
	int length,breadth,height,base,radius;
	cout<<"enter the length and breadth of a rectangle:"<<endl;
	cin>>length>>breadth;
	r.get_data(length,breadth);
	int rec=r.rect_area();
	cout<<"the area of rectangle is:"<<rec<<endl;
	cout<<"enter the base and height of a triangle:"<<endl;
	cin>>base>>height;
	r.get_data(base,height);
	int tri=t.triangle_area();
	cout<<"the area of triangle is:"<<tri<<endl;
	cout<<"enter the radius and once again same radius of a circle:"<<endl;
	cin>>radius>>radius;
	r.get_data(radius,radius);
	int cir=c.circle_area();
	cout<<"the area of circle is:"<<cir<<endl;
	return 0;
	
	}
	
	
}
	
