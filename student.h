#include <iostream>


using namespace std;

class Student{
 public:
  Student(float inGPA, char* inName);
  const char* getName();
  float getGPA();

 private:
  char name[15];
  float gpa;


};
