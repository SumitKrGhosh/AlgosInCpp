//
//  test.h
//  AlgosInCpp
//
//  Created by Sumit Ghosh on 5/15/16.
//  Copyright © 2016 Sumit Ghosh. All rights reserved.
//

#ifndef test_h
#define test_h


#endif /* test_h */
#include "SingleLinkedList.h"

int nodeTest()
{
    //SingleLL test;
    node tst1;
    
    if ( tst1.getVal() != 0 )
        return -1;
    
    node tst2(50);
    if ( tst2.getVal() != 50 )
        return -1;
    
    return 0;
}


int llTest()
{
    SingleLL tst1;
    tst1.add(6);
    tst1.add(5);
    tst1.add(0);
    tst1.add(9);
    tst1.add(1);
    tst1.add(8);
    tst1.add(2);
    tst1.add(2);
    tst1.add(5);
    tst1.add(6);
    
    bool showResults=false;
    if (showResults)
        tst1.show();
    
    tst1.reverese();
    if (showResults)
        tst1.show();
    
    tst1.del(5);
    if (showResults)
        tst1.show();

    tst1.del(6);
    if (showResults)
        tst1.show();

    tst1.del(6);
    if (showResults)
        tst1.show();

    tst1.rreverese();
    if (showResults)
        tst1.show();
    
    return 0;
}