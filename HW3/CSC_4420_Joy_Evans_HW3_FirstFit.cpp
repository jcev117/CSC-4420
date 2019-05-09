//
//  main.cpp
//  FirstFit
//
//  Created by Joy Evans on 2/27/19.
//  Copyright © 2019 Joy Evans. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct mem_node
{
    
    char allocation_mem;
    struct mem_node *next;
    int length;
    
}node;

node *createNode(int length)
{
    node *mem = (node*) malloc(sizeof(node));
    mem->length=length;
    mem->allocation_mem='\0';
    mem->next =NULL;
    return mem;
    
}
void assignMem(node *hole,int length, char block)
{
    node *mem =hole;
    while(mem!=NULL)
    {
        if(mem->allocation_mem=='\0')
        {
            if(mem->length==length)
            {
                mem->allocation_mem=block;
                break;
            }
            else if(mem->length)
            {
                node *temp=createNode(mem->length-length);
                mem->length=length;
                temp->next=mem->next;
                mem->next = temp;
                mem->allocation_mem=block;
                break;
            }
           
            
        }
        mem=mem->next;

    }
}
void clearAtNode(node *hole, char block)
{
    node *mem=hole;
    
    while(mem !=NULL)
    {
        
        if(mem->allocation_mem==block)
        {
            mem->allocation_mem='\0';
            break;
            
        }
        mem=mem->next;
  
    }
}
void print(node *hole)
{
    node *mem=hole;
    while(mem !=NULL)
    {
        if(mem->allocation_mem=='\0')
        {
            cout<<"Units not allocated: "<<mem->length<<endl;
                break;
        }
        else
        {
            {
                cout<<mem->allocation_mem<<" Process"<<" Units: "<<mem->length<<endl;
                mem=mem->next;

            }
        }
        
    }
}
int main ()
{
    node *hole=createNode(10);
    print(hole);
    assignMem(hole,2,'A');
    print(hole);
    assignMem(hole,3,'B');
    print(hole);
    assignMem(hole,4,'C');
    print(hole);
    clearAtNode(hole,'B');
    assignMem(hole,1,'E');
    print(hole);
    clearAtNode(hole,'C');
    print(hole);
    clearAtNode(hole,'A');
    print(hole);
    assignMem(hole,5,'H');
    
    return 0;
    
}
