#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include "student.hpp"
#include "stu_sort.hpp"
using namespace std;

int main(int argc, char*argv[])
{
        //compare test
	//regular case
	Student stu1("Tom", "Luo",3.5, 92, 20220000);
	Student stu2("Tim", "Le",3.3, 93, 20220001);
        //corner case
	Student stu3("AAA", "A",0, 0, 20220002);
	Student stu4("ZZZ", "Z",4.33, 100, 20220003);

        //illegal case
	Student stu5("Tom", "Luo",-1, 50, 20220004);
	Student stu6("Tom", "Luo",6, 50, 20220005);

	Student stu7("Tom", "Luo",3, -1, 20220006);
	Student stu8("Tom", "Luo",2, 1000, 20220007);
        
	cout << "CGPA compare function test: "<< endl;
	cout << "CGPA regular case: "<<"Student1 has CGPA "<<stu1.getCGPA()<<"; Student2 has CGPA "<<stu2.getCGPA()<<endl;
	int cgpaRes1 = compareCGPA(stu1, stu2);
	cout << cgpaRes1 << endl;

	cout << "CGPA corner case: "<<"Student1 has CGPA "<<stu3.getCGPA()<<"; Student2 has CGPA "<<stu4.getCGPA()<<endl;
	int cgpaRes2 = compareCGPA(stu3, stu4);
	cout << cgpaRes2 << endl;

	cout << "CGPA illegal case: "<<"Student1 has CGPA "<<stu5.getCGPA()<<"; Student2 has CGPA "<<stu6.getCGPA()<<endl;
	int cgpaRes3 = compareCGPA(stu5, stu6);
	cout << cgpaRes3 << endl;
	
	
	cout << "Research Score compare function test: "<< endl;
	cout << "Research Score regular case: "<<"Student1 has  "<<stu1.getResearchScore()<<"; Student2 has  "<<stu2.getResearchScore()<<endl;
	int scoRes1 = compareResearchScore(stu1, stu2);
	cout << scoRes1 << endl;
	
	cout << "Research Score corner case: "<<"Student1 has  "<<stu3.getResearchScore()<<"; Student2 has  "<<stu4.getResearchScore()<<endl;
	int scoRes2 = compareResearchScore(stu3, stu4);
	cout << scoRes2 << endl;

	cout << "Research Score illegal case: "<<"Student1 has  "<<stu7.getResearchScore()<<"; Student2 has  "<<stu8.getResearchScore()<<endl;
	int scoRes3 = compareResearchScore(stu7, stu8);
	cout << scoRes3 << endl;
	
	
	cout << "Last name compare function test: "<< endl;
	cout << "Last name regular case: "<<"Student1 has Last name  "<<stu1.getLastName()<<"; Student2 has Last name "<<stu2.getLastName()<<endl;
	int firRes1 = compareLastName(stu1, stu2);
	cout << firRes1 << endl;
	
	cout << "Last name corner case: "<<"Student1 has last name "<<stu3.getLastName()<<"; Student2 has last name "<<stu4.getLastName()<<endl;
	int firRes2 = compareLastName(stu3, stu4);
	cout << firRes2 << endl;
	
	
	return 0;
}
