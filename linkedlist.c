#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct Listnode *node;
  };
struct Listnode createnode(struct Listnode *head , int data){
    struct Listnode *newnode;
    newnode=(struct Listnode*)malloc(sizeof(struct Listnode));
    if(newnode==NULL){
        printf("Memory allocation failed");
        exit(0);
    else{
        
    }
    };
