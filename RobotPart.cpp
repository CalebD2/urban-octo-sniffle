#include "stdafx.h"
#include "../../../std_lib_facilities.h"
#include "RobotPart.h"

using namespace std;

void RobotPart::print() {
	cout << "\tType: " << type << " Name: " << name << " Part Number: " << partNum << endl;
}
