//
//  stringController.cpp
//  StringsInCPP
//
//  Created by Martinsen, Kaden on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "stringController.hpp"
#include <iostream>

using namespace std;

StringController :: StringController()
{
    string1 = "cathat";
    string2 = "crustydog";
}

void StringController :: start()
{

    numberMethods();
    
//    //empty() returns 1 if string is empty return 0 if it is not empty
//    //empty
//    cout << "String1 is: " << string1.empty() << endl;
//    cout << "String2 is: " << string2.empty() << endl;
//    
//    //size
//    cout<< "the size of String1 is: " << string1.size() << endl;
//    cout<< "the size of String2 is: " << string2.size() << endl;
//    
//    //compare() returns 1 if they are different, returns 0 if they are the same
//    cout << "when String1 and String2 are compared: " << string1.compare(string2) << endl;
//    
//    //at
//    cout << "at the index 4 of String2: " << string2.at(3) << endl;
//    
//    //substring(start, end)
//    cout << "substring of String2 from 1-3: " << string2.substr(1,3) << endl;
//    
//    //substring(start)
//    cout << "substring of String2 from 2 to the end: " << string2.substr(2) << endl;
//    
//    //[]
//    cout << "[] at the index 3 of String2: " << string2[3] << endl;
}

void StringController :: numberMethods()
{
    int count = string1.size();
    cout << "the number of letters in string1: " << count << endl;
    //the size() method of string wotks like the lenght() method of java
    
    string temp = string1.substr(3);
    cout << temp << endl;
    
}
