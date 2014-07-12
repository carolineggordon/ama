//
//  temp.cpp
//  ama
//
//  Created by Caroline Gordon on 12/07/2014.
//  Copyright (c) 2014 Caroline Gordon. All rights reserved.
//

#include "temp.h"

using namespace std;

int get_numbers()
{
    int array[8];
    cout << "Enter 8 numbers";
    for (int x = 0; x < 7; x++)
    {
        cin >> array[x];
    }
    for (int x = 0; x < 7; x++)
    {
        cout << array[x];
        cout << (char) 0x20;
    }
    return 0;
    
};
