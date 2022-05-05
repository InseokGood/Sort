```c
//일반 선택정렬 방법 2 에 10승
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1024
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

int list[MAX_SIZE];
int n;
void selection_sort(int list[],int n)//선택 정렬 함수
{
  int i,j,least,temp;
  for(int i=0;i<n-1;i++){
    least = i;
    for(j=i+1;j<n;j++) // 최솟값 탐색
      if(list[j]<list[least]) least=j;
    SWAP(list[i],list[least],temp);//찾은 최솟값 옮기기
  }
}
int main(void) {
  int i;
  n = MAX_SIZE;
  srand(time(NULL));//랜덤으로 값 넣기
for(i=0;i<n;i++){ 
  list[i]=rand() % 200; //난수 발생 범위 0~199
}  
  selection_sort(list,n);
  for(i=0;i<n;i++)
    printf("%d ",list[i]);
    
  printf("\n");
  
  return 0;
}
```
```c
//역정렬 2에 20승
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1048576
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

int list[MAX_SIZE];
int n;
void selection_sort(int list[],int n)//선택 정렬 함수
{
  int i,j,max,temp;
  for(int i=0;i<n-1;i++){
    max = i;
    for(j=i+1;j<n;j++) // 최댓값 탐색
      if(list[j]>list[max]) max=j;
    SWAP(list[i],list[max],temp);//찾은 최댓값 옮기기
  }
}
int main(void) {
  int i;
  n = MAX_SIZE;
  srand(time(NULL));//랜덤으로 값 넣기
for(i=0;i<n;i++){ 
  list[i]=rand() % 200; //난수 발생 범위 0~199
}  
  selection_sort(list,n);
  for(i=0;i<n;i++)
    printf("%d ",list[i]);
    
  printf("\n");
  
  return 0;
}
```

