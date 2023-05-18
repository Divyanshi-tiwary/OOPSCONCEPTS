#include <iostream>
#include<math.h>
using namespace std;
class dist
{
		int x1;
		int y1;
		int x2;
		int y2;
		public: 
		void getdistance(void);
		void calcdis(void);
};

void dist::getdistance(void){
	cout<<"enter the x1 coordinate: ";
	cin>>x1;
	cout<<"enter the y1 coordinate: ";
	cin>>y1;
	cout<<"enter the x2 coordinate: ";
	cin>>x2;
	cout<<"enter the y2 coordinate: ";
	cin>>y2;
	}
void dist::calcdis(void){
	float dis;
	dis=sqrt(pow(x2- x1, 2) + pow(y2 - y1, 2));
	cout<<"the distance between two coordinates is: " <<dis;
	
}	
	 
int main(){
	dist d1;
	d1.getdistance();
	d1.calcdis();
	
	
}
