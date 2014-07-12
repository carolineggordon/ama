//
//  main.cpp
//  ama
//
//  Created by Caroline Gordon on 13/06/2014.
//  Copyright (c) 2014 Caroline Gordon. All rights reserved.
//

#include <iostream>
#include "temp.h"
#include "reverse.h"

using namespace std;

int main(int argc, const char * argv[])
{
    string hello = "Hello, World\n";
    cout << hello;
    get_numbers();
    reverse(&hello);
    cout << hello;
    
    return 0;
}

