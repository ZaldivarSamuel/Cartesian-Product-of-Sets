//
//  Node.cpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/8/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#include "Node.h"
#include <iostream>
#include <string>

Node::Node(string s){
    element = s;
    nextNode = NULL;
}

string Node::getElement(){
    return element;
}

void Node::setNext(Node * n){
    nextNode = n;
}
