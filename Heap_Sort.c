```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 1000 // 힙 안에 저장된 요소의 개수
#define MAX_SIZE 512
typedef struct {
  int key;
} element;

typedef struct {
  element heap[MAX_ELEMENT];
  int heap_size;
} HeapType;
HeapType *create() { return (HeapType *)malloc(sizeof(HeapType)); }
void init(HeapType *h) { h->heap_size = 0; }
void insert_max_heap(HeapType *h, element item) {
  int i;
  i = ++(h->heap_size);

  while ((i != 1) && (item.key > h->heap[i / 2].key)) {

    h->heap[i] = h->heap[i / 2];

    i /= 2;
  }
  h->heap[i] = item; // 새로운 노드를 삽입
}
element delete_max_heap(HeapType *h) {
  int parent, child;
  element item, temp;

  item = h->heap[1];
  temp = h->heap[(h->heap_size)--];
  parent = 1;
  child = 2;

  while (child <= h->heap_size) {

    if ((child < h->heap_size) &&
        ((h->heap[child].key) < h->heap[child + 1].key)) {
      child++;
    }

    if (temp.key >= h->heap[child].key) {
      break;
    }

    h->heap[parent] = h->heap[child];
    parent = child;
    child *= 2;
  }

  h->heap[parent] = temp;

  return item;
}
void heap_sort(element a[], int n) {
  int i;
  HeapType *h;
  h = create();
  init(h);
  for (i = 0; i < n; i++) {
    insert_max_heap(h, a[i]);
  }
  for (i = (n - 1); i >= 0; i--) {
    a[i] = delete_max_heap(h);
  }
  free(h);
}
int main(void) {
  int i;
  int n = MAX_SIZE;
  element list[MAX_SIZE] = {0};
  srand(time(NULL)); //값 초기화
  for (i = 0; i < n; i++) {
    list[i].key = rand() % 200; //난수 발생 범위 0~199
  }
  heap_sort(list, n);
  for (i = 0; i < n; i++)
    printf("%d ", list[i].key);

  printf("\n");

  return 0;
}

```
