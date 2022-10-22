//header file student.hpp to declare your classes
#include <string> //you will have to use string in C++
class Student 
{
public:
	Student(std::string fn, std::string ln, float cgpa, int score, int APPID);
    bool isValid() const;

    std::string getFirstName() const;
    std::string getLastName() const;
    float getCGPA() const;
    int getResearchScore() const;
    int getAppID() const;



    void setFirstName(std::string fn);
    void setLastName(std::string ln);
    void setCGPA(float cgpa);
    void setResearchScore(int score);
    void setAppID(int APPID);



private:
	std::string first_name;
	std::string last_name;
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



};