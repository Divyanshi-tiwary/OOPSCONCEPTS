 #include <iostream>
using namespace std;
class Base {
public:
    Base() {
        created++;
    }

    virtual ~Base() {
        destroyed++;
    }

    static int ConstructorCalls() {
        return created;
    }
    static int DestructorCalls() {
        return destroyed;
    }

private:
    static int created;
    static int destroyed;
};

int Base::created = 0;
int Base::destroyed = 0;


int main() {
    {
        Base arr[10];
        Base another_one;
    }
    std::cout << "Custructors calls: " << Base::ConstructorCalls() << "\n";
    std::cout << "Destructortors calls: " << Base::DestructorCalls() << "\n";
    return 0;
}
