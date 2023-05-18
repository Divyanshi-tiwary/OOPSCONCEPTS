#include <iostream>
#include<cmath>
using namespace std;

int main()
{   cout << "Prime Numbers between 1 and 1000 are:\n";

    for(int i=2;i<=1000;++i) //loop to check for each number in the range

    {   int count=0; //to maintain factor count

        for(int j=2;j<=sqrt(i);++j) //checking for factors

        {   if(i%j==0)

                count=1; //increasing factor count when found

        }

        if(count==0) //checking and printing prime numbers

                cout<<i<<" ";

    }

    return 0;

}


