#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
  char a;
};

int main(){

  struct node dummy_var;
  struct node *ptr;
  dummy_var.data = 23;
  dummy_var.next = &dummy_var;
  printf("Size of Int:%d\n", sizeof(int));
  printf("Size of Int Pointer:%d\n", sizeof(int*));
  printf("Size of Struct:%d\n", sizeof(struct node));
  printf("This is the Data %d\n", dummy_var);
  return 0;
}
