#include<stdio.h>
#include<stdlib.h>


struct listNode{
  int data;
  struct listNode *nextNode;
};

void insert();
void delete();
int isEmpty();
void printList();

int main(){

  struct listNode *nodePtr = NULL;
  struct listNode currNode, headNode;
  headNode = NULL;

  if(headNode == NULL)
  {
    nodePtr = (struct listNode*) malloc(sizeof(currNode));
    if(nodePtr != NULL)
    {
      headNode.data = 23;
      headNode.nextNode = NULL;
    }
  }
  else
  {
    nodePtr = (struct listNode*) malloc(sizeof(currNode));

  }





}
