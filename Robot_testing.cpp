#include <iostream>
#include "stdafx.h"
#include "..\..\..\std_lib_facilities.h"
#include <string>
#include "RobotPart.h"

using namespace std;

int main()
{
	int i;
	string name, partNum;
	string type[] = { "Head", "Arm", "Torso", "Battery", "Locomotor" };
	vector<RobotPart> partList;
	while (true) {
		cout << "\n Creating a part \nWhat Type of part is it?\n\t1)Head\n\t2)Arm\n\t3)Torso\n\t4)Battery\n\t5)Locomotor\nchoice: ";
		cin >> i;
		cin.ignore();
		cout << "What is the name of the part: ";
		getline(cin, name);
		cout << "What is the part number: ";
		getline(cin, partNum);

		RobotPart temp(name, partNum); 
		partList.push_back(temp);
		
		cout << "listing all parts: \n";
		for(i = 0; i < partList.size(); i++) {
			partList[i].print();
		}
		
		

	}
}


