#include <stdio.h>
#include <stdlib.h>

void quickSort(int v[]);
void swap(int v[], i, j);

int main() {
  int v[] = {
    376, 990, 99, 78, 334, 343,
    376, 990, 99, 78, 334, 343,
    376, 990, 99, 78, 334, 343
  };
  quickSort(v);
  return 0;
}

void quickSort(int v[]) {
  int n = sizeof(v) / sizeof(v[0]);
  if (n <= 1) {
    return;
  }
  // @TODO 待实现核心逻辑
}

void swap(int v[], i, j) {
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
