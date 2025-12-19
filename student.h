#ifndef student_H
#define student_H

#include <iostream>
#include <cstring>

using namespace std;

//student class!!
class Student{
 public:
  Student(float inGPA, char* inName); //set GPA and name

  char* getName(); //retrieve name
  float getGPA(); //retrieve gpa

  char* name;
  float gpa;


};

#endif
