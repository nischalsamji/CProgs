#include<stdio.h>
#include<stdlib.h>


//understanding malloc and calloc in c
int main(int argc, char const *argv[]) {
  int i, *iptr;

  printf("Enter a number!!! \n");
  scanf("%d",&i);
  if(i != 0)
  {
    iptr = (int *)calloc(1,sizeof(int));
    *iptr = i;
    printf("Memory Allocated at %d\n", *iptr);
    printf("Memory at %d\n", iptr);
  }


  return 0;
}
