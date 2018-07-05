#include <algorithm>

template <typename T, typename Less = std::less<T>>
void QuickSort(T data[], int left, int right) {
  // end condition
  if (right - left < 2) {
    return;
  }

  // sort
  int povit = left;
  for (int i = left + 1; i < right; i++) {
    if (data[i] < data[povit]) {
      std::swap(data[i], data[povit]);
      std::swap(data[povit + 1], data[i]);
      povit = povit + 1;
    }
  }

  // continue
  QuickSort(data, left, povit);
  QuickSort(data, povit + 1, right);
}