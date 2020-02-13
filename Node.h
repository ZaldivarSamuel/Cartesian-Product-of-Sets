//
//  Node.hpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/8/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>
#include <string>

using namespace std;

class Node{

private:
    string element;
    
public:
    Node *nextNode;
    
    Node(string);
    string getElement();
    void setNext(Node*);
};

#endif /* Node_h */
