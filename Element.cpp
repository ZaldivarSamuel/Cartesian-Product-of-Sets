//
//  Node.cpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/8/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#include "Element.h"
#include <iostream>
#include <string>

Element::Element(string s){
    value = s;
    nextElement = NULL;
}

string Element::getValue(){
    return value;
}

void Element::setNext(Element * n){
    nextElement = n;
}
