# : wqinclude <stdio.h>

int main() {
  int i, j;

  for (i = 2; i <= 4; i++) {
    for (j = 1; j <= 5; j++) {
      printf("%d * %d = %2d   ", i, j, i * j);
    }
    printf("\n");
  }
}
