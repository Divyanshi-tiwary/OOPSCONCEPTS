#include <iostream>
using namespace std;
class Student{
    protected:
        char name[20];
        int roll_number, age;
    public:
        Student(){}
        void getDetails(){
            cout<<"Input roll number: ";
            cin>>roll_number;
            cout<<"Input name: ";
            cin.get();
            cin.getline(name, 20);
            cout<<"Input age: ";
            cin>>age;
        }
        void putDetails(){
            cout<<"Roll Number: "<<roll_number<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class Test: public Student{
    protected:
        int sub1, sub2, sub3, sub4, sub5;
    public:
        Test(): Student(){}
        void getmarks(){
            cout<<"Input marks: \n";
            cout<<"Subject 1: ";
            cin>>sub1;
            cout<<"Subject 2: ";
            cin>>sub2;
            cout<<"Subject 3: ";
            cin>>sub3;
            cout<<"Subject 4: ";
            cin>>sub4;
            cout<<"Subject 5: ";
            cin>>sub5;
        }
        void putmarks(){
            cout<<"Subject 1: "<<sub1<<endl;
            cout<<"Subject 2: "<<sub2<<endl;
            cout<<"Subject 3: "<<sub3<<endl;
            cout<<"Subject 4: "<<sub4<<endl;
            cout<<"Subject 5: "<<sub5<<endl;
        }
};

class Sports: public Student{
    protected:
        int indoor, outdoor;
    public:
        Sports(): Student(){}
        void getscore(){
            cout<<"Input sports scores: \n";
            cout<<"Indoor: ";
            cin>>indoor;
            cout<<"Outdoor: ";
            cin>>outdoor;
        }
        void putscore(){
            cout<<"Indoor: "<<indoor<<endl;
            cout<<"Outdoor: "<<outdoor<<endl;
        }
};
class Result: public Sports, public Test{
    int total;
    public:
        Result(): Sports(), Test(){
            Test::getDetails();
            getmarks();
            getscore();
            total = indoor + outdoor + sub1 + sub2 + sub3 + sub4 + sub5;
        }
        void display(){
            cout<<endl;
            Test::putDetails();
            cout<<"Test Marks: \n"; Test::putmarks();
            cout<<"Sports Scores: \n"; Sports::putscore();
            cout<<"Total: "<<total<<endl;
            cout<<"Percentage: "<<total / 7 <<" % "<<endl;
        }
};
int main(){
    Result result;
    result.display();
    return 0;
}
