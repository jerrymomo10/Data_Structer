#ifndef _LINKEDQUEUE_H_
#define _LINKEDQUEUE_H_
#include <iostream>
using namespace std;
class Node{
    friend class LinkedQueue;
    private:
        int data;
        Node* link;
};
class LinkedQueue{
    public:
        LinkedQueue(){front=rear=0;}
        ~LinkedQueue();
        bool IsEmpty()const{return ((front)?false:true);}
        bool IsFull()const;
        bool First(int& x)const;
        bool Last(int& x)const;
        LinkedQueue& Add(const int& x);
        LinkedQueue& Delete(int& x);
        void Output(ostream& out)const;
    private:
        Node* front;
        Node* rear;
};
#endif
