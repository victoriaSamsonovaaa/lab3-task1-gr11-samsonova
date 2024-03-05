#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int exactSquare(int number) {
  int squareRoot = sqrt(number);
  return squareRoot * squareRoot == number;
}

void printS(int arr[], int n) {
  printf("Exact squares in array: ");
  for (int i = 0; i < n; i++) {
    if (exactSquare(arr[i])) {
      printf("%d ", arr[i]);
      printf(" ");
    }
  }
  printf("\n");
}


int main(int argc, char* argv[]) {
  int n;
  printf("Input size of an array: \n");
  scanf("%d", &n);
  int array[n];

  srand(time(NULL));
  printf("Your array:\n");
  for (int i = 0; i < n; i++) {
      array[i] = rand() % 1;
      printf("%d ", array[i]);
        }
        printf("\n");

        printS(array, n);

    }
