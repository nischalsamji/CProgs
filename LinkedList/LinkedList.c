  #include<stdio.h>
  #include<stdlib.h>


  struct listNode{
    int data;
    struct listNode *nextNode;
  };


  void insertNode(struct listNode*,int, int);
  void delete();
  int isEmpty(struct listNode*);
  void printList(struct listNode*);

  int main(){

    int i;
    struct listNode *headPtr = NULL, *currPtr, *tempNode;
    struct listNode headNode;
    for(i=0; i< 10; i++){

      if(isEmpty(headPtr)){
        tempNode = (struct listNode*)(malloc(sizeof(headNode)));
        tempNode->data = i;
        tempNode->nextNode = NULL;
        headPtr = tempNode;
        printf("Node Created \n %d", i);
      }
      else{
        tempNode = (struct listNode*)(malloc(sizeof(headNode)));
        tempNode->data = i;
        tempNode->nextNode = NULL;
        currPtr = headPtr;
        while(currPtr->nextNode != NULL)
        {
          currPtr = currPtr->nextNode;
        }
        currPtr->nextNode = tempNode;
        printf("Node Created%d", i);
      }
    }
      insertNode(headPtr,0, 34);
      insertNode(headPtr,0, 35);
      insertNode(headPtr,0, 36);
      insertNode(headPtr,-1, 38);
      insertNode(headPtr,-1, 39);
      insertNode(headPtr,-1, 56);
      insertNode(headPtr,3, 72);
      insertNode(headPtr,7, 83);
      insertNode(headPtr,9, 460);
      printList(headPtr);
  }

  void insertNode(struct listNode* headPtr,int pos, int data){

    int posCtr;
    struct listNode *tempNode;
    tempNode = (struct listNode*)(malloc(sizeof(struct listNode)));
    tempNode->data = data;
    if(pos == 0){
      tempNode->nextNode = headPtr->nextNode;
      headPtr->nextNode = tempNode;
    }

    else if(pos == -1){
      while(headPtr->nextNode != NULL){
        headPtr = headPtr->nextNode;
      }
      tempNode->nextNode = NULL;
      headPtr->nextNode = tempNode;
    }
    else{
      for(posCtr = 0; posCtr<pos -1 ; posCtr++){
        headPtr = headPtr->nextNode;
      }

      tempNode->nextNode = headPtr->nextNode;
      headPtr->nextNode = tempNode;

    }
  }

  int isEmpty(struct listNode *headPtr){

    if(headPtr)return 0;
    return 1;

  }

void printList(struct listNode *headPtr){
    while(headPtr)
    {
      printf("Address of this Node: %x\t",headPtr);
      printf("Address of next Node: %x\t",headPtr->nextNode);
      printf("Data: %d \n", headPtr->data);
      headPtr = headPtr->nextNode;
    }

  }
