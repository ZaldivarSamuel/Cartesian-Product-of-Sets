//
//  Set.cpp
//  Cartesian Product of Sets
//
//  Created by Samuel Zaldivar on 2/12/20.
//  Copyright © 2020 Samuel Zaldivar. All rights reserved.
//

#include "Set.h"
#include <string>
using namespace std;
Set::Set(){
    head = NULL;
}

void Set::addElement(string element){
    
    Node *newElement = new Node(element);
    
    if(head == NULL)
        head = newElement;
    else{
        Node *indexNode = head;
        
        do{
            if(indexNode->nextNode == NULL){
                indexNode->nextNode = newElement;
            }
            else{
                indexNode = indexNode->nextNode;
            }
        }while(indexNode->nextNode != NULL);
    }
    
    Node *indexNode = head;
    while(indexNode->nextNode != NULL){
        cout << indexNode->getElement() << " ";
    }
}
