#include"lab1.1.h"


int main() {
  int n;
  std::cin >> n;

  int **ar = new int*[n];
  int **it = ar;
  for (int i = 0; i < n; i++, it++)
    *it = new int[n]{0};


  arr::read(ar, n);
  std::cout << std::endl << std::endl;
  arr::print(ar, n);

  arr::delete_ar(ar, n);
  return 0;
}