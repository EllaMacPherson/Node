/* Ella MacPherson 12/19/25
   Linked List part 1
*/

#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(Node*& head, Student* student);
void print(Node*& head, Node* next);
void Delete(Node*& head, Node* next, float GPA);


int main(){

  char input[10];
  bool go = true;

  //start empty
  Node* head = NULL;

  //loop forever
  while (go == true){
    input[0] = '\0';
    cout<<"ADD, DELETE, or PRINT? Delete only functions with 1 person in list"<<endl;
    cin>>input;
    cin.ignore();
    //add and ask for inputs
    if(strcmp(input, "ADD") == 0) {

      float inGPA = 0;
      char inName[15];
  
      cout<<"GPA of student?";
      cin>>inGPA;
      cin.ignore();
      cout<<"Name of student?";
      cin.get(inName, 14);
      cin.ignore();
      
      //create student pointer to assign to this node
      Student* s = new Student(inGPA, inName);
      //assign that pointer
      add(head, s);
    }

    //print with recursion
    if(strcmp(input, "PRINT") == 0){
      print(head,head);
    }
    //delete -> only works for 1 node in list just testing destructor
    if(strcmp(input, "DELETE") == 0){
      cout<<"Enter GPA to delete"<<endl;
      float inGPA = 0;
      cin>>inGPA;
      
      Delete(head, head, inGPA);
    }
  }
  
  return 0;
}

//add func
void add(Node*& head,Student* student){
  Node* current = head;
  
  if(current == NULL){
    //go ahead and add
    cout<<"ADDING"<<endl;
    head = new Node(student);
    cout<<"added: "<<endl;
    cout<<head->getStudent()->getName()<<endl;
  }else{
    //when the current node is NOT the last one on the list
    while(current->getNext() != NULL){
      current = current->getNext();
    }
    //when the next thing is null, set the 
    current->setNext(new Node(student));
  }
}

//print func
void print(Node*& head, Node* next){
  if(next == head){ //on first one print 
    cout<<"List: ";
  }

  if(next != NULL){ //if we are not at last one in list
    cout<<next->getStudent()->getName()<<" ";
    print(head,next->getNext()); //call func again but 1 more down list
  }

}

//delete func, again only works with 1 node for testing
void Delete(Node*& head ,Node* next, float GPA){

  if(next == head){ //first call
    cout<<"Matches found: ";
  }

  if(next == NULL){ //when nothing in list
    cout<<"No students currently in list"<<endl;
    return;
  }

  //if finds GPA
  if(next->getStudent()->getGPA() == GPA){
    cout<<next->getStudent()->getName()<<" " <<endl;
    delete next;
    head = NULL; //for 1 student manually set it like this
    return;
  }
  //recursively call again with next node
  Delete(head,next->getNext(), GPA);
}

