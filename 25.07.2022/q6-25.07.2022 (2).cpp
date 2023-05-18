#include <iostream>
using namespace std;

 class number
 
 {
 	public:
 	int realpart;
 	int imaginarypart;
 	
 };
 int main()
 {
 	number n1;
 	for(int i=0;i<5;i++){
 		cout<<"enter the real part:";
 		cin>>n1.realpart;
 		cout<<"enter the imaginary part:";
 		cin>>n1.imaginarypart;
 		cout<<"the complex number is:"<<n1.realpart<<"+ i"<<n1.imaginarypart<<endl;
	 }
	 return 0;
 }
