#include <iostream>

using namespace std;

void primeno(int a, int b) {

int flag = 0,i=0, j=0;

while(a < b) {

flag=0;

for(i=2;i <= a/2; i++) {

if(a%i == 0){

flag = 1;

break;

}

}

if(flag == 0) {

cout<<a<< " ";

flag = 0;

}

a++;

}

}

int main()

{

primeno(2, 1000);

return 0; 

}


