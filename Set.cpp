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

Set::Set(string name){
    head = NULL;
    this->name = name;
}

void Set::addElement(string value){
    
    //Create new element
    Element *newElement = new Element(value);
    
    //Add element to the set. If head is null then the newElement becomes the head.
    if(head == NULL){
        head = newElement;
    }
    else{
        //Find the last element and add the newElement
        Element *currentElement = head;
        
        while(currentElement->nextElement != NULL){
            currentElement = currentElement->nextElement;
        }
        currentElement->nextElement = newElement;

    }
}

void Set::printSet(){
    
    //Check for empty set
    cout << name << " = ";
    
    if(head == NULL)
        cout << "Empty Set" << endl;
    else{
        
        cout << "{";
        
        //Loop through each element in the set and print out the value
        Element *currentElement = head;
        do{
            cout << currentElement->getValue();
            
            if(currentElement->nextElement != NULL){ cout << ", "; }
            currentElement = currentElement->nextElement;
            
        }while(currentElement != NULL);
        cout << "}" << endl;
    }
}
