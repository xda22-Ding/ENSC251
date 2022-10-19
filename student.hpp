//header file student.hpp to declare your classes
using namespace std; //use namespace std
#include <string> //you will have to use string in C++
class Student 
{
public:
	Student(int month, int day);
    bool isvalid() const;

    string getFirstName() const;
    string getLastName() const;
    float getCGPA() const;
    int getResearchScore() const;
    int getAppID() const;



    void setFirstName(string fn);
    void setLastName(string ln);
    void setCGPA(float cgpa);
    void setResearchScore(int score);
    void setAppID(int APPID)



private:
	string first_name;
	string last_name;
	float CGPA; 
	int research_score;
	int app_id;
  
};

class ToeflScore
{
public:
	int getReading() const;
	int getListening() const;
	int getSpeaking() const;
	int getWriting() const;
	int getTotalScore() const;

	void setReading(int read);
	void setListening(int listen);
	void setSpeaking(int speak);
	void setWriting(int write);




private:
	int reading;
	int listening;
	int speaking;
	int writing;
	int total_score;



}