// Header file for Program

#include <iostream>
using namespace std;

class Node {
public:
   friend class LinkedList;
   Node(int inputnumber, bool inputflag, Node* inputnext);
private:
   int number;
   bool flag;
   Node* next;
};

class LinkedList {
public:
   LinkedList();
   void prime(int input);
   void add(int input, bool inputflag);
   void display();
private:
   Node* head;
};
