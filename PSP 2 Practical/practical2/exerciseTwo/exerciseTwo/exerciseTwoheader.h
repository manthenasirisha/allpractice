#include <string>
using namespace std;

struct Student {
	string name;
	string department;
	string programme;
	int examMarks[6];
};

struct Student readStudentInformation();

void insertStudentInformation(struct Student student);

void printStudentInformation();

void updateStudentInformation();
