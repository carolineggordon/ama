//
//  reverse.cpp
//  ama
//
//  Created by Caroline Gordon on 12/07/2014.
//  Copyright (c) 2014 Caroline Gordon. All rights reserved.
//
#include <string>
#include <cstring>
#include "reverse.h"
//using namespace std;
using std::string;

int reverse(string *str)
{
    char tempc;
    
    int i = (*str).length() - 1;

    
    // now swap elements from end and beginning of string, until reach middle element
    int j = 0;
    while (j != i )
    {
        // j is traversing beginning to the middle, i is from end to the middle, stop swapping when they meet
        tempc = (*str)[i];
        (*str)[i] = (*str)[j];
        (*str)[j] = tempc;
        i--; j++;
    }
    return 0;
};
