#include<iostream>
using namespace std;
class data{
	private:
		int x;
		static int funInput;
		static int funoutput;
	public:
		void input ();
		void output();
		void display();
			
};
int data::funInput=0;
int data::funoutput=0;
void data::input(){
	cout<<"enter the value of x\n";
	cin>>x;
	funInput++;
}
void data::output(){
	cout<<"the value of x is" <<x<<endl;
	funoutput++;
}

void data::display(){
	cout<<"the input function has been called "<<funInput <<" times";
	cout<<"the output function has been called "<<funoutput <<" times";
}

int main(){
	data c;
	c.input();
	c.output();
	c.input();
	c.output();
	c.display();
}
