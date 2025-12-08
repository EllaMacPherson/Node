#include "student.h"
#include <iostream>
#include <cstring>


//constructur
Student::Student(float inGPA, char* inName){
  gpa = inGPA;
  name = new char[15];
  strcpy(gpa, inGPA);
}

const char* Student::getName(){
  return name;
}

float student::getGPA(){
  return gpa;
}


