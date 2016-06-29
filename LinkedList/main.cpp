//
//  main.cpp
//  AlgosInCpp
//
//  Created by Sumit Ghosh on 5/13/16.
//  Copyright © 2016 Sumit Ghosh. All rights reserved.
//

#include <iostream>
#include "test.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout<<(nodeTest()==0?"Node tests Passed Successfully":"One or more Node test cases Failed")<<"\n";
    std::cout<<(llTest()==0?"Linked List tests Passed Successfully":"One or more Linked List test cases Failed")<<"\n";
    return 0;
}
