//
//  main.cpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/8/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#include <iostream>
#include <string>
#include "Element.h"
#include "Set.h"
using namespace std;

//void setHeadForSet1(Set *set){
//    Node *n1 = new Node("Hello");
//    set->head = n1;
//}
//
//void setHeadForSet2(Set *set){
//    Node *n1 = new Node(" Cristina");
//    set->head = n1;
//}

void enterSet(string, Set*);

int main(){
    
    Set *setA = new Set("A");
    Set *setB = new Set("B");
    
    cout << "Press [ENTER] after each element." << endl << "To end the set type 'Done' then [ENTER]" << endl << endl << "Enter the elements for the first set."<< endl;
    
    enterSet(setA->name, setA);
    enterSet(setB->name, setB);
}

void enterSet(string setName, Set *set){
    
    string element = "";
    
    cout << endl << "Set " << setName << ": " << endl;
            
    while(true){
        getline(cin, element);
        if(element.empty())
            break;
        else
            set->addElement(element);
    }
    
    set->printSet();
}
