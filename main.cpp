#include <iostream>
using namespace std;

int main() {
  int a[6] = {12, 45, 23, 51, 19, 8};
  for (int i = 1; i < 6; i++) {
    int current = a[i];
    int j = i - 1;
    while (a[j] > current && j > 0) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = current;
  }

  for (int i = 1; i < 6; i++) {
    cout << a[i] << " ";
  }
}