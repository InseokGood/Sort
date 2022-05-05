```c
//일반 삽입정렬 방법 2 에 5승
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 32
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

int list[MAX_SIZE];
int n;
void insertion_sort(int list[],int n){
int i, j, key;
  for (i=1;i<n;i++){
    key =list[i];
    for(j=i-1;j>=0&&list[j]>key;j--)
      list[j+1]=list[j];
  }
}
int main(void) {
  int i;
  n = MAX_SIZE;
  srand(time(NULL));//값 초기화
for(i=0;i<n;i++){ 
  list[i]=rand() % 200; //난수 발생 범위 0~199
}  
  insertion_sort(list,n);
  for(i=0;i<n;i++)
    printf("%d ",list[i]);
    
  printf("\n");
  
  return 0;
}
```
