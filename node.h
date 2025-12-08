#include <iostream>


class Node{
public:
  Node(Student*) //constructor
  Node* getNext(); //get next node pointer
  Student* getStudent(); //get student pointer FOR STUDENT AT THIS NODE?
  void setNext(Node*); //set the next node pointer
  
  ~Node() //destructor do last lol
};
