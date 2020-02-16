//
//  Node.hpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/8/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#ifndef Element_h
#define Element_h

#include <stdio.h>
#include <string>

using namespace std;

class Element{

private:
    string value;
    
public:
    Element *nextElement;
    
    Element(string);
    string getValue();
    void setNext(Element*);
};

#endif /* Node_h */
