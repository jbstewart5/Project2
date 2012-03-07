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
   void LinkedList::addToHead(int inputprocess, int inputpriority, int inputrun, int inputarrival);
   void LinkedList::addToTail(int inputprocess, int inputpriority, int inputrun, int inputarrival);
   void fifo();
   void prioritysched();
   void shortprocnext();
private:
   Node* head;
   Node* tail;
   int size;
};