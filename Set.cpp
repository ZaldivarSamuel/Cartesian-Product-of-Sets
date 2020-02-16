//
//  Set.cpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/12/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#include "Set.h"
#include <string>
#include <iostream>
using namespace std;
Set::Set(){
    head = NULL;
}

void Set::addElement(string element){
    
    Element *newElement = new Element(element);
    
    if(head == NULL)
        head = newElement;
    else{
        Element *indexNode = head;
        
        do{
            if(indexNode->nextElement == NULL){
                indexNode->nextElement = newElement;
            }
            else{
                indexNode = indexNode->nextElement;
            }
        }while(indexNode->nextElement != NULL);
    }
    
    Element *indexNode = head;
    while(indexNode->nextElement != NULL){
        cout << indexNode->getValue() << " ";
    }
}
