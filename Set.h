//
//  Set.hpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/12/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#ifndef Set_h
#define Set_h

#include <stdio.h>
#include <string>
#include "Element.h"

class Set{
private:
    
public:
    Element* head;
    Set();
    void addElement(string);
};

#endif /* Set_hpp */
