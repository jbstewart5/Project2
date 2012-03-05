// Header file for Program

#include <iostream>
using namespace std;

class Node {
public:
   friend class LinkedList;
   Node(int inputprocess, int inputpriority, int inputrun, int inputarrival, Node* inputnext);
private:
   int process;
   int priority;
   int run;
   int arrival;
   Node* next;
};

class LinkedList {
public:
   LinkedList();
   void fifo(int input);
   void LinkedList::add(int inputprocess, int inputpriority, int inputrun, int inputarrival);
   int size();
   void display();
private:
   Node* head;
};