#include <iostream>

using namespace std;
int main(){

	char name[50];
	int rollno;
	int marks[10];
	float sum=0;

	cout<<"enter name: ";
	cin>>name;
	cout<<"enter rollno: ";
	cin>>rollno;
		
	for (int i=1;i<=10;i++){
		cout<<"enter marks of subject"<<i<<":";
	
		cin>>marks[i];
		sum=sum+marks[i];
		}
		
	float avg;
	avg=sum/10;
	float perc;
	perc=(sum/1000)*100;
	
 	cout<<"\n name:"<<name;
	cout<<"\n rollno:"<<rollno;
	for(int i=1;i<=10;i++)
	{
		cout<<"\n marks"<<i<<":"<<marks[i];
	}
    cout<<"\n The sum is:"<<sum;
    cout<<"\n The avg is:"<<avg;
    cout<<"\n The percentage is:"<<perc;
	
	return 0;
}
