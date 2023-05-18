#include<iostream>
using namespace std;

class dist
{
private:
 int feet;
 float inches;
 
public:
 dist():feet(0),inches(0){}
 
 dist(int f, float in): feet(f),inches(in){}
 
 void getdist()
 {
 cout<<"feet=";
 cin>>feet;
 cout<<"inches=";
 cin>>inches;
 }
 
 friend bool operator <(dist d1, dist d2);
 
};

bool operator <(dist d1,dist d2)
{

 float dd1=d1.feet+d1.inches/12;
 float dd2=d2.feet+d2.inches/12;
 return dd1<dd2?true:false;
}

int main()
{
 dist d1;
 dist d2;
 d1.getdist();
 d2.getdist();
 if(d1<d2)
 cout<<"d1 < d2"<<endl;
 else
 cout<<"d2 < d1"<<endl;
 return 0;
}
