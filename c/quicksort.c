#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quickSort(int v[], int n);
void swap(int v[], int i, int j);
int scmp(const void *p1, const void *p2);

int main() {
  int v[] = {
    376, 990, 99, 78, 334, 343,
    376, 990, 99, 78, 334, 343,
    376, 990, 99, 78, 334, 343
  };
  int sizeofAll = (int)sizeof(v);
  int sizeofOne = (int)sizeof(v[0]);
  int n = sizeofAll / sizeofOne;
  printf("sizeAll = %d, sizeOne = %d, n = %d\n", sizeofAll, sizeofOne, n);
  quickSort(v, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}

void quickSort(int v[], int n) {
  int i, last;
  if (n <= 1) {
    return;
  }
  swap(v, 0, rand() % n);
  last = 0;
  for (i = 1; i < n; i++) {
    if (v[i] < v[0]) {
      swap(v, ++last, i);
    }
  }
  swap(v, 0, last);
  quickSort(v, last);
  quickSort(v+last+1, n-last-1);
}

void swap(int v[], int i, int j) {
  int temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

/* scmp: string compare of *p1 and *p2 */
int scmp(const void *p1, const void *p2) {
  char *v1, *v2;
  v1 = *(char **) p1;
  v2 = *(char **) p2;
  return strcmp(v1, v2);
}
