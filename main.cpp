//main.cpp, put your driver code here,
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include <fstream> //file processing
#include <sstream> //formatted string processing
#include <cstdlib> //atof and atoi
#include "student.hpp"
#include "stu_sort.hpp"
using namespace std;

/*I provide example code here to help you read the input
 *data from a file, so that you can focus on creating
 *and manipulating classes and objects
 */
int main(){
  //Read the domestic-stu.txt file and exit if failed
  string line;
  ifstream domesticFile("domestic-stu.txt");
  ifstream internationalFile("international-stu.txt");

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
  int stu_count = 1;
  int int_count = 1;
 
  // five domestic arrays
  string domFir[100] = {};
  string domLas[100] = {};
  string domPro[100] = {};
  float domCGPA[100] = {};
  int domRes [100] = {};

  // nine international arrays
  string intFir[100] = {};
  string intLas[100] = {};
  string intCou[100] = {};
  float intCGPA[100] = {};
  int intRes [100] = {};
  int toeRea [100] = {};
  int toeLis [100] = {};
  int toeSpe [100] = {};
  int toeWri [100] = {};

//domestic arrays
  while( getline(domesticFile, line) ) {
    /*process each line, get each field separated by a comma.
     *We use istringstream to handle it.
     *Note in this example code here, we assume the file format
     *is perfect and do NOT handle error cases. We will leave the
     *error and exception handling of file format to Lab Assignment 4
     */
    istringstream ss(line);

    string firstName, lastName, province, s_cgpa, s_researchScore;
    float cgpa;
    int researchScore;
   
   
    //get firstName separated by comma
    getline(ss, firstName, ',');
    domFir[stu_count-1] = firstName;
   

    //get lastName separated by comma
    getline(ss, lastName, ',');
    domLas[stu_count-1] = lastName;

    //get province separated by comma
    getline(ss, province, ',');
    domPro[stu_count-1] = province;

    //get cpga separated by comma, and convert string to float
    getline(ss, s_cgpa);
    cgpa = atof(s_cgpa.c_str());
    domCGPA[stu_count-1] = cgpa;
   
    //get researchScore separated by comma, and convert it to int
    getline(ss, s_researchScore, ',');
    researchScore = atoi(s_researchScore.c_str());
    domRes[stu_count-1] = researchScore;

    //print the student info to the screen
   /* cout << "Domestic student " << stu_count << " " << firstName << " "
<< lastName << " from " << province << " province has cgpa of "
<< cgpa << ", and research score of " << researchScore << endl;
*/
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
    intFir[int_count-1] = firstName;
   

    //get lastName separated by comma
    getline(ss, lastName, ',');
    intLas[int_count-1] = lastName;

    //get province separated by comma
    getline(ss, country, ',');
    intCou[int_count-1] = country;

    //get cpga separated by comma, and convert string to float
    getline(ss, s_cgpa);
    cgpa = atof(s_cgpa.c_str());
    intCGPA[int_count-1] = cgpa;
   
    //get researchScore separated by comma, and convert it to int
    getline(ss, s_researchScore, ',');
    researchScore = atoi(s_researchScore.c_str());
    intRes[int_count-1] = researchScore;

    getline(ss, s_read);
    read = atof(s_read.c_str());
    toeRea[int_count-1] = read;
   
    getline(ss, s_listen);
    listen = atof(s_listen.c_str());
    toeLis[int_count-1] = listen;
   
    getline(ss, s_speak);
    speak = atof(s_speak.c_str());
    toeSpe[int_count-1] = speak;
   
    getline(ss, s_write);
    write = atof(s_write.c_str());
    toeWri[int_count-1] = write;
   

    int_count++;
  }


//test
  for (int i = 0; i < 100; i++){

  cout << intCGPA[i]<<endl;
  }
  //close your file
  domesticFile.close();
  internationalFile.close();
  return 0;
}
