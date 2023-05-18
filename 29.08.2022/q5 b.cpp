#include<iostream>
#include<string.h>
using namespace std;
class A {
	char *CP;
	int length;
	public:
		A(char *s){
			length =strlen(s);
			CP=new char[length+1];
			strcpy(CP,s);
			
		}
		A(A&t){
			length=t.length;
			CP=new char[length+1];
			strcpy(CP,t.CP);;
		}
		~A(){
			delete []CP;
		}
		
};
int main(){
	int  length;
	A a("Hello");
	A b=a;
	cout<<"the length is:"<<a;
}
