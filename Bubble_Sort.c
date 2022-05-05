```c
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 128
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

int list[MAX_SIZE];
int n;
void bubble_sort(int list[],int n){
int i, j, temp;
  for(i= n-1 ;i > 0;i--){
    for(j=0;j<i;j++)
      if(list[j]>list[j+1])
        SWAP(list[j],list[j+1],temp);
  }
  
}
int main(void) {
  int i;
  n = MAX_SIZE;
  srand(time(NULL));//값 초기화
for(i=0;i<n;i++){ 
  list[i]=rand() % 200; //난수 발생 범위 0~199
}  
  bubble_sort(list,n);
  for(i=0;i<n;i++)
    printf("%d ",list[i]);
    
  printf("\n");
  
  return 0;
}

```