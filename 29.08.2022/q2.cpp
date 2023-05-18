#include <iostream>
 
using namespace std;
 
class Time
{
public:
	Time();
	Time( int m, int h);
	void Display() const;
private:
	int hours;
	int mins;
	const int t = 0;
};
 
Time::Time()
{

	mins = t;
	hours = t;
}
 
Time::Time( int m, int h)
{
	if (m < 0) m = 0;
	else mins = m % 60;
	if (h < 0) h = 0;
	else hours = h % 24;
}
 
void Time::Display() const
{
	cout << hours / 10 << hours % 10 << ":" << mins / 10 << mins % 10 << endl;
}
 
 
int main()
{
	Time t1 (300,60);
	Time t2( 125, 100);
	cout << "T1 : ";
	t1.Display();
	cout << "T2 : ";
	t2.Display();
	return 0;
}

