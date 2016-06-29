//
//  node.h
//  AlgosInCpp
//
//  Created by Sumit Ghosh on 5/15/16.
//  Copyright © 2016 Sumit Ghosh. All rights reserved.
//

#ifndef node_h
#define node_h


#endif /* node_h */

class  node {
    int val;
    node * next;
    
public:
    node()
    {
        val=0;
        next= NULL;
    }
    
    node( int v)
    {
        val=v;
        next= NULL;
    }
    
    node( int v, node *ptr)
    {
        val=v;
        next=ptr;
    }
    
    int getVal()
    { return val; }

    node *getNext()
    { return next; }

    void setNext( node *_pNxt )
    { next = _pNxt; }

};
