//student.cpp to implement your classes
#include "student.hpp"
#include<iostream>
using namespace std;

Student::Student(string fn, string ln, float cgpa, int score, int APPID){
    setFirstName(fn);
    setLastName(ln);
    setCGPA(cgpa);
    setResearchScore(score);
    setAppID(APPID)

}

bool Student::isValid(){
	if(CGPA < 0 || CGPA > 4.3){
		cout << "the CGPA is invalid. " << endl;
		return false;
	}
	if(research_score < 0 || research_score > 100){
		cout << "the research score is invalid. " << endl;
		return false;
	}
	if( app_id < 20220000 || app_id > 20230000 ){
		cout << "the application id is invalid. " << endl;
	}
}

string Student::getFirstName() const{
	return first_name;
}

string Student::getLastName() const{
	return last_name;
}

float Student::getCGPA() const{
	return CGPA;
}

int Student::getResearchScore() const{
	return research_score;
}

int Student::getAppID() const{
	return app_id;
}


void Student::setFirstName(string fn){
	first_name = fn;
}

void Student::setLastName(string ln){
	last_name = ln;
}

void Student::setCGPA(float cgpa){
	cgpa = CGPA;
}

void Student::setResearchScore(int score){
	research_score = score;
}

void Student::setAppID(int APPID){
	app_id = APPID;
}




