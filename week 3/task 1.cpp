#include <iostream>
using namespace std;
class course {
public:
	virtual void duration()=0;

};
class onlinecourse: public course {
	int week;
	int hoursperwek;
public:

	onlinecourse(int w,int h) {
		week = w;
		hoursperwek = h;
	}
	void duration()override {
		cout << "online course duration" << endl;
		cout << "weeks " << week << endl;
		cout << "hours per weeks " << hoursperwek << endl;
		cout << "total hours: " << week * hoursperwek << endl;
	}
};
class offlinecourse :public course{
	int months;
	int hoursperday;
public:
	offlinecourse(int m, int h) {
		months = m;
		hoursperday = h;
	}
	void duration()override {
		cout << "offline course duration" << endl;
		cout << "months:  " << months << endl;
		cout << "hours per day:  " << hoursperday << endl;
		cout << "total duration " << months * 30 * hoursperday;
	}
     
};
int main() {
	offlinecourse o(4, 6);
	onlinecourse c(4, 20);
	o.duration();
	cout << endl;
	c.duration();
	return 0;
}