//main.cpp, put your driver code here, 
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include "student.hpp"
#include "stu_sort.hpp"
using namespace std;


int main(){

  // two arrays to hold informations
  DomesticStudent domesArr[100];
  InternationalStudent interArr[100];

  // store toefl grade and merge them to interArr[]
  ToeflScore toeflArr[100];

  //Read the domestic-stu.txt file and exit if failed
  string line;
  ifstream domesticFile;
  domesticFile.open("domestic-stu.txt");
  if(domesticFile.fail())
  {
    cout << "Input file opening failed." << endl;
    exit(1);
  }


  ifstream internationalFile;
  internationalFile.open("international-stu.txt");
  if(internationalFile.fail())
  {
    cout << "Input file opening failed." << endl;
    exit(1);
  }

  if(!domesticFile.is_open()) {
    cout << "Unable to open file domestic-stu.txt" << endl;
    return -1;
  }
 
 
   if(!internationalFile.is_open()) {
    cout << "Unable to open file international-stu.txt" << endl;
    return -1;
  }
 

  //Read the first line of domestic-stu.txt, which specifies
  //the file format. And then print it out to the screen
  getline(domesticFile, line);
  getline(internationalFile, line);
  int stu_count = 0;
  int int_count = 0;
 
//domestic arrays
  while( getline(domesticFile, line) ) {
   
    istringstream ss(line);

    string firstName, lastName, province, s_cgpa, s_researchScore;
    float cgpa;
    int researchScore;
   
   
    //get firstName separated by comma
    getline(ss, firstName, ',');
    domesArr[stu_count].setFirstName(firstName);
   
   

    //get lastName separated by comma
    getline(ss, lastName, ',');
    domesArr[stu_count].setLastName(lastName);
   

    //get province separated by comma
    getline(ss, province, ',');
    domesArr[stu_count].setProvince(province);
   

    //get cpga separated by comma, and convert string to float
    getline(ss, s_cgpa, ',');
    cgpa = atof(s_cgpa.c_str());
    domesArr[stu_count].setCGPA(cgpa);
   
   
    //get researchScore separated by comma, and convert it to int
    getline(ss, s_researchScore, ',');
    researchScore = atoi(s_researchScore.c_str());
    domesArr[stu_count].setResearchScore(researchScore);
   

   
    stu_count++;
  }


// international arrays
while( getline(internationalFile, line) ) {
   
    istringstream ss(line);

    string firstName, lastName, country, s_cgpa, s_researchScore, s_read, s_listen, s_speak, s_write;
    float cgpa;
    int researchScore;
    int read;
    int listen;
    int speak;
    int write;
   
   
    //get firstName separated by comma
    getline(ss, firstName, ',');
    interArr[int_count].setFirstName(firstName);
   

    //get lastName separated by comma
    getline(ss, lastName, ',');
    interArr[int_count].setLastName(lastName);

    //get province separated by comma
    getline(ss, country, ',');
    interArr[int_count].setCountry(country);

    //get cpga separated by comma, and convert string to float
    getline(ss, s_cgpa,',');
    cgpa = atof(s_cgpa.c_str());
    interArr[int_count].setCGPA(cgpa);
   
    //get researchScore separated by comma, and convert it to int
    getline(ss, s_researchScore, ',');
    researchScore = atoi(s_researchScore.c_str());
    interArr[int_count].setResearchScore(researchScore);

    getline(ss, s_read, ',');
    read = atof(s_read.c_str());
    toeflArr[int_count].setReading(read);
   
    getline(ss, s_listen, ',');
    listen = atof(s_listen.c_str());
    toeflArr[int_count].setListening(listen);
   
    getline(ss, s_speak, ',');
    speak = atof(s_speak.c_str());
    toeflArr[int_count].setSpeaking(speak);
   
    getline(ss, s_write, ',');
    write = atof(s_write.c_str());
    toeflArr[int_count].setWriting(write);
   
    interArr[int_count].setToeflScore(toeflArr[int_count]);

    int_count++;
  }
/* 
// test
  for (int i = 0; i < 100; i++){

  cout << interArr[i]<<endl;
  }
   */
  //close your file
  domesticFile.close();
  internationalFile.close();

 
  return 0;
}

