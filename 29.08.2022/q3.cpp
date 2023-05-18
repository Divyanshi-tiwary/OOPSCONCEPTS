#include <iostream>
using namespace std;


class StringB{
    private:
        string s1;
        int length;
    public:
        StringB (string s ){
            s1=s;
        }
        
        void join_string(string s2){
            string s3=s1+s2;      
            cout<<"\nConcatenated string= "+s3;
        }
};
int main()
{
    StringB s("dear ");
    s.join_string("Maria");


    return 0;
}

