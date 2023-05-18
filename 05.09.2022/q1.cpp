//single inheritance
#include <iostream>
using namespace std;

class A
{
	public:
		int num1,num2;
		public:
			void getdata()
			{
				cout<<"\n enter first number :";
				cin>>num1;
				cout<<"\n enter second number :";
				cin>>num2;
			}
};
class add:public A
{
	int sum;
	public:
		void getsum()
		{
			sum=num1+num2;
		}
		void display()
		{
			cout<<"the sum is:"<<sum;
		}
};
int main()
{
	add a;
	a.getdata();
	a.getsum();
	a.display();
	return 0;
}

/*
//multiple inheritance 
#include <iostream>
using namespace std;
class A 
{
	public:
		int a;
		public:
			void get_data1(int n)
			{
				a=n;
			}
};
class B
{
	public:
		int b;
		public:
		void get_data2(int n)
		{
			b=n;
		}
};
class C:public A,public B
{
	public :
		void display()
		{
			cout<<"the sum is "<<a+b;
		}
};
int main()
{
	C c;
	c.get_data1(20);
	c.get_data2(30);
	c.display();
	return 0;
}
*/

