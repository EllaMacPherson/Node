#include "student.h"
#include <iostream>
#include <cstring>


//constructur
Student::Student(float inGPA, char* inName){
  gpa = inGPA;
  name = new char[20];
  strcpy(name, inName);
}

//give name
char* Student::getName(){
  return name;
}

//give GPA
float Student::getGPA(){
  return gpa;
}


