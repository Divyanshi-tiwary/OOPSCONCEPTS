#include<iostream>
using namespace std;
class intarray{
      
      public:
      int arr[10];
      friend ostream & operator << (ostream & out, intarray & a);
      friend istream & operator >> (istream & in, intarray & a);
};

ostream & operator << (ostream & out, intarray & a){
    for(int i=0;i<10;i++){
    out<<a.arr[i]<<"  ";
    }
    return out;
}
istream & operator >> (istream & in, intarray & a){
    cout<<"enter array elements:";
    for(int i=0;i<10;i++){
    in>>a.arr[i];
    }
    return in;
}

int main(){
    intarray a;
    cin>>a;
    cout<<" The elements of array are :"<<endl;
    cout<<a;
    return 0;
}
