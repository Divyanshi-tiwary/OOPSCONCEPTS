#include <iostream>
#include <string>
using namespace std;
class Time {
public:
bool operator==(const Time &T){
return this->t == T.t;
}
time_t t;
};
int main() {
Time T1;
Time T2;
cout << (T1 == T2);
}

