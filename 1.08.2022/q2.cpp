/*call by value
#include <iostream>
using namespace std;
void swap(int a ,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
int main(){
	int first,second;
	first=10;
	second=20;
	swap(first,second);
	cout<<first<<" " <<second;
}
*/
/*call by address
#include <iostream>
using namespace std;
void swap(int *a ,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
int main(){
	int first,second;
	first=10;
	second=20;
	swap(first,second);
	cout<<first<<" " <<second;
} */
//call by reference
#include <iostream>
using namespace std;
void swap(int &a ,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
int main(){
	int first,second;
	first=10;
	second=20;
	swap(first,second);
	cout<<first<<" " <<second;
	return 0;
}

