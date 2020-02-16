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



int main(){
    
    Set *setA = new Set;
    Set *setB = new Set;
    
    string element = "";
    
    cout << "Press [ENTER] after each element." << endl << "To end the set type 'Done' then [ENTER]" << endl << endl << "Enter the elements for the first set."<< endl;
    
    cout << "Set A: " << endl;
            
    while(true){
        getline(cin, element);
        if(element.empty())
            break;
        else
            setA->addElement(element);
    }
    
}
