#include <iostream>
using namespace std;  //class type pointer
class sample{
	public:
		int a;
		void display(){
			cout<< " "<<a;
			
		}
};
int main()
{
	sample s1;
	s1.a=10;
	s1.display();
	sample *ptr;
	ptr=&s1;
	ptr->a=20;
	ptr->display();
	
} 

/*class A{
	public:
		int a;
		void display(){
			cout <<" "<<a;
		}
};

int main(){
	A P,*optr;
	int A::*ptr=&A::a;
	optr=&P;
	P.a=10;
	optr->a=20;
	optr->*ptr=30;
	P.display();
} */

/*class A{
	public:
		int a;
		void display(int b){
			cout <<" "<<a<<" "<<b;
			
		}
	};
		int main(){
			A P;
			void A::*Pfn(int)=&A::display();
			P.*Pfn(10);
		}

*/

