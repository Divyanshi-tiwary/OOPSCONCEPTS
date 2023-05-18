#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
class Complex {
private:
int real, imaginary;
public:
Complex(){
real = imaginary = 0;
}
Complex (int r, int i){
real = r;
imaginary = i;
}
string con_string(){
stringstream c;
if(imaginary >= 0)
c << "(" << real << " + " << imaginary << "i)";
else
c << "(" << real << " - " << abs(imaginary) << "i)";
return c.str();
}
Complex operator+(Complex c2){
Complex ans;
ans.real = real + c2.real;
ans.imaginary = imaginary + c2.imaginary;
return ans;
}
};
int main(){
Complex c1(9,-7), c2(4,8);
Complex res = c1 + c2;
cout << "the resultant is: "<<res.con_string();
}
