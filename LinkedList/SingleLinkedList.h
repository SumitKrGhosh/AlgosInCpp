//
//  SingleLinkedList.hpp
//  AlgosInCpp
//
//  Created by Sumit Ghosh on 5/15/16.
//  Copyright © 2016 Sumit Ghosh. All rights reserved.
//

#ifndef SingleLinkedList_hpp
#define SingleLinkedList_hpp

#include "node.h"

#endif /* SingleLinkedList_hpp */

//
//  SingleLinkedList.cpp
//  AlgosInCpp
//
//  Created by Sumit Ghosh on 5/15/16.
//  Copyright © 2016 Sumit Ghosh. All rights reserved.
//


class SingleLL {
    node *head;
    node * recursiveReverse(node *curr, node *next);
    node * singleVarRR(node *curr);
public:
    SingleLL()
    { head = NULL; }
    int add(int v);
    int del(int v);
    int get(int el);
    void show();
    int reverese();
    int rreverese();
};

int SingleLL::add(int v)
{
    node *newNode = new node(v);
    if (newNode == NULL)
        return 1; // Out of Memory
    if ( head == NULL )
        head = newNode;
    else
    {
        node *tmp = head;
        while ( tmp->getNext() != NULL && tmp != NULL) // Move to the end of the list
            tmp=tmp->getNext();
        tmp->setNext(newNode);
    }
    
    return 0;
}

int SingleLL::del(int elVal)
{
    if (head == NULL)
        return 2; // List Empty
    
    node *prev=NULL, *tmp;
    for(tmp = head; tmp != NULL && tmp->getVal() != elVal ; tmp=tmp->getNext())
        prev=tmp;
    
    if ( tmp->getVal() == elVal )
    {
        if (prev != NULL) //Not deleteing the first element
            prev->setNext(tmp->getNext());
        else
            head = tmp->getNext();
        delete tmp;
        return 0;
    }
    return 1; //element not found
}

int SingleLL::get(int el)
{
    int i=1;
    node *tmp = head;
    for(; tmp != NULL && i < el ; i++)
        tmp=tmp->getNext();
    return (tmp == NULL? NULL: tmp->getVal());
}

void SingleLL::show()
{
    node *tmp = head;
    while ( tmp != NULL ) // Walk through all the elements
    {
        std::cout<<tmp->getVal()<<"-->";
        tmp=tmp->getNext();
        
    }
    std::cout<<"NULL\n";
}

int SingleLL::reverese()
{
    node *prev = NULL;
    for(node *tmp = head; tmp != NULL ; )
    {
        head=tmp->getNext();
        tmp->setNext(prev);
        prev=tmp;
        tmp=head;
    }
    head=prev;
    return 0;
}

node * SingleLL::recursiveReverse(node *curr, node *prev)
{
    node *tmp = curr;
    if ( curr->getNext() != NULL )
        tmp=recursiveReverse(curr->getNext(), curr);
    
    curr->setNext(prev);
    return tmp;
}

node * SingleLL::singleVarRR(node *curr)
{
    if ( curr->getNext() != NULL )
        return singleVarRR(curr->getNext());
    else
        return curr;
}

int SingleLL::rreverese()
{
    if (head != NULL)
        //head=singleVarRR(head);
        //recursiveReverse(head, head->getNext());
        head=recursiveReverse(head, NULL);
    return 0;
}
