#include <iostream>
#include <string>
using namespace std;
class String {
public:
String(string S0) {
len = S0.length();
chstr = new char[len];
for (int i = 0; i < S0.length(); i++) {
chstr[i] = S0[i];
cout << chstr[i];
}
}
bool operator<(const String& S) {
return this->len < S.len;
}
String& operator+(const String& S) {
String STR("");
STR.len = this->len + S.len;
int i = 0;
for (; i < this->len; i++) {
STR.chstr[i] = this->chstr[i];
}
for (int j = 0; j < S.len; i++, j++) {
STR.chstr[i] = S.chstr[j];
}
return STR;
}
void print() {
for (int i = 0; i < len; i++) {
cout << chstr[i] << " ";
}
}
private:
char* chstr;
short int len;
};
int main() {
String S1("HELLO "), S2("WORLD");
String S3(" ");
S3=S1 + S2;
}

