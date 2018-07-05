#include <cstdio>
#include <random>
#include "quick_sort.h"

void RandomData(int data[], int length) {
  std::random_device rd;
  std::default_random_engine engine(rd());

  std::uniform_int_distribution<> dis(1, 1000);  
  for (int i = 0; i < length; i++) {
    data[i] = dis(engine);
  }
}

void PrintData(int data[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", data[i]);
  }

  printf("\n");
}

int main(int argc, char *argv[]) {
  const int length = 10;
  int data[length] = {0};

  // test qsort
  RandomData(data, length);
  QuickSort(data, 0, length);
  PrintData(data, length);
}