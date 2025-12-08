#include <iostream>
#include "node.h";

using namespace std;

Node::Node(Student* student){
  //get gpa and name here?
  student = new student(inGPA, inName);
}

Student* Node::getStudent(){

}

Node* Node::getNext(){

}

void Node::setNext(Node*){

}

Node::~Node(){
  //delete thingS!
}
