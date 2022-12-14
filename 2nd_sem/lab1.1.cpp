#include"lab1.1.h"


int main() {
  int n;
  std::cin >> n;

  int **ar = new int*[n];
  int **it = ar;
  for (int i = 0; i < n; i++, it++)
    *it = new int[n]{0};


  matrix::read(ar, n);
  std::cout << std::endl << std::endl;
  matrix::print(ar, n);

  matrix::delete_ar(ar, n);
  return 0;
}