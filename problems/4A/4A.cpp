#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int weight, divided;
  cin >> weight;
  if (weight == 2) {
    cout << "NO";
  } else {
    if (weight % 2 == 0) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }

  return 0;
}

