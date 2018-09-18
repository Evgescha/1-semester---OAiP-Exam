#include <iostream>
using namespace std;

class Time {
private:
	int ch;
	int m;
	int s;
public:
	Time(int a, int b, int c) //: ch(a), m(b), s(c) 
	{
		ch = a;
		m = b;
		s = c;
	}

	void show() {
		cout << "Время: " << ch << ":" << m << ":" << s << endl;
	}

	int sec() {
		return (ch * 3600 + m * 60 + s);
	}
};

int Compare(int a, int b) {
	if (a >= b) {
		return 1;
	}
	else { return 0; }
}

int main() {
	setlocale(LC_ALL, "Russian");

	Time time1(6, 4, 43);
	time1.show();
	Time time2(50, 6000, 50000);
	time2.show();

	cout << Compare(time1.sec(), time2.sec()) << endl;
	if (Compare(time1.sec(), time2.sec()) == 1) {
		time2.show();
		time1.show();
	}
	else {
		time1.show();
		time2.show();
	}
	system("pause");
	return 0;
}