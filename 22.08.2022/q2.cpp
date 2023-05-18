
#include<iostream>
using namespace std;
class A;
class B
{
 float meters,centimeters;
 public:
 B(float m, float c){
 	meters = m;
 	centimeters  = c;
 }
 friend void compares(B & x,A &y);
};
class A
{
 float inch;
 float feet;
 public:
 	A(float i, float f){
 		inch = i;
 		feet = f;
	 }




friend void compares(B& ,A & );
};
void compares(B &a,A &b)
{
	if((b.feet * 0.0254) < a.meters  ){
		cout<<"Distance in meters and centimers is larger\n";
	}
	else{
		cout<<"Distance in inches and feet is larger\n";
	}
	
	
}
int main()
{
 B a(20,30);
 A b(100,60);
compares(a,b);
 
 


}

