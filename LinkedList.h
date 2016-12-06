//
// Created by root on 12/6/16.
//

#ifndef CONCURRENTTHLAB_1_LINKEDLIST_H
#define CONCURRENTTHLAB_1_LINKEDLIST_H


#include <iostream>
#include "Node.h"

class LinkedList {
public:
    Node * nil;
    LinkedList ();
    virtual void Delete(int) = 0;
    virtual Node * Member(int) = 0;
    virtual void Insert(int) = 0;
    void Print();

    virtual ~LinkedList ();
};


#endif //CONCURRENTTHLAB_1_LINKEDLIST_H
