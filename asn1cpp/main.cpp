//
//  main.cpp
//  asn1cpp
//
//  Created by Michael Maguire on 15/05/2015.
//  Copyright (c) 2015 Michael Maguire. All rights reserved.
//

#include <iostream>
#include "asn1cpp_OctetString.h"

using namespace asn1cpp;
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    vector<char> chars = { 'H', 'e', 'l', 'l', 'o' };
    OctetString oct1(chars);
    
    cout << oct1;

    string string1("StringTest");
    OctetString oct2(string1);

    cout << oct2;

    
    return 0;
}
