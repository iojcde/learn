#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  if (a > 0) {
    printf("plus");
  } else if (a == 0) {
    printf("zero");
  } else {
    printf("minus");
  }
}
