#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(Student* student);

Node* head = NULL;

int main(){

  char input[10]="ADD";
  
  if(strcmp(input, "ADD") == 0) {

    float inGPA = 0;
    char inName[15];
  
    cout<<"GPA of student?";
    cin>>inGPA;
    cin.ignore();
    cout<<"Name of student?";
    cin.get(inName, 14);
    cin.ignore();
    //OKAY THIS WORKS, NOW CHECK IF WHEN U PRINT IT OUT IT WORKS, AND ALL FUNCTIONALITY AROUND THAT
    //create student pointer to assign to this node
    Student* s = new Student(inGPA, inName);

    add(s);  
    }
  //need to define new student UP HERE!! dummy
  
  
  return 0;

}

void add(Student* student){
  Node* current = head;
  
  if(current == NULL){
    //go ahead and add
    cout<<"ADDING"<<endl;
    head = new Node(student);
    cout<<added<<endl;
  }else{
    //when the current node is NOT the last one on the list
    while(current->getNext() != NULL){
      current = current->getNext();
    }
    //when the next thing is null, set the 
    current->setNext(new Node(student));
    
    
  }


}
