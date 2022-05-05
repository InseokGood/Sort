```c
//일반 쉘정렬 방법 2 에 6승
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 64
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

int list[MAX_SIZE];
int n;
inc_insertion_sort(int list[],int first,int last,int gap){
  int i,j,key;
  for(i=first + gap;i<=last;i=i+gap){
    key = list [i];
    for(j=i-gap;j>=first&&key<list[j];j=j-gap){
      list[j+gap]=list[j];
      }
      list[j+gap]=key;
    
  }
}
void shell_sort(int list[],int n)
{
  int i,gap;
  for(gap=n/2;gap>0;gap = gap /2){
    if((gap % 2) == 0) gap++;
    for(i=0;i<gap;i++)//부분 리스트의 개수는 gap
      inc_insertion_sort(list,i,n-1,gap);
  }
}
int main(void) {
  int i;
  n = MAX_SIZE;
  srand(time(NULL));//값 초기화
for(i=0;i<n;i++){ 
  list[i]=rand() % 200; //난수 발생 범위 0~199
}  
  shell_sort(list,n);
  for(i=0;i<n;i++)
    printf("%d ",list[i]);
    
  printf("\n");
  
  return 0;
}
```
