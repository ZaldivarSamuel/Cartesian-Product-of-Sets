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

string Set::getCartesianProduct(Set *setB){
    
    /*
     The cartesian product can not be calculated with empty sets.
     If either set is empty return an error message.
     */
    if(head == NULL){ return errorMssg(name); }
    if(setB->head == NULL) {return errorMssg(setB->name);}
    
    string cartesianProduct = name + " X " + setB->name + " = {";
    
    /*
     Loop through each element of set A.
     For each element in set A loop through each element in set B then take the product.
     */
    Element *currentElementInSet_A = head;
    //set A loop
    do{
        Element *currentElementInSet_B = setB->head;
        
        //set B loop
        do{
            cartesianProduct += "(" + currentElementInSet_A->getValue() + ", " + currentElementInSet_B->getValue() + ")";
            
            //Add a comma after each product except for the last product.
            if(currentElementInSet_A->nextElement != NULL || currentElementInSet_B->nextElement != NULL) {cartesianProduct += ", "; }
            
            currentElementInSet_B = currentElementInSet_B->nextElement;
    
        }while(currentElementInSet_B != NULL);
        
        currentElementInSet_A = currentElementInSet_A->nextElement;
    }while(currentElementInSet_A != NULL);
    
    cartesianProduct += "}";
    
    return cartesianProduct;
}

string Set::errorMssg(string setName){
    return "Set " + setName + " is empty. Unable to calculate Cartesian Product.";
}
