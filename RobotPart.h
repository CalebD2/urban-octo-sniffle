
#ifndef __ROBOTPART_H
#define __ROBOTPART_H 2016
#include <string>
using namespace std;

class RobotPart{
public:
	RobotPart(string n, string num) :
		name(n), partNum(num) {}

	void print();
	
protected:
	string name;
	string type;
	string partNum;
};

#endif // !__ROBOTPART_H
