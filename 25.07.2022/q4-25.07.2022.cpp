#include <iostream>
using namespace std;
class student{
	char name[50];
	int rollno;
	int totalmarks;
	public:
		void getdetails(void);
	    void display(void);
};
void student::getdetails(void){
	cout<<"enter name";
	cin>>name;
	cout<<"enter rollno";
	cin>>rollno;
	cout<<"enter totalmarks";
	cin>>totalmarks;
}
void student::display(void)
{
	cout<<"\n name:"<<name;
	cout<<"\n rollno:"<<rollno;
    cout<<"\n totalmarks:"<<totalmarks;

}
int main()
{
	student s1;
	s1.getdetails();
	s1.display();
	return 0;
} 
