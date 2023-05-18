#include<iostream>
using namespace std;
int main() {
	int x, n;
	cout << "Enter the number of elements:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " elements" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "You entered: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
}
int sum=0;
    for (x=0;x<n;x++)
    {
    	sum=sum+arr[x];
    	
	}
	cout<<"\nthe sum is :"<<sum;
	return 0;
}
