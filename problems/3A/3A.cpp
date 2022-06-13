#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char piece1char, piece2char;
  int piece1number, piece2number, moves = 0;
  string result = "";

  cin >> piece1char >> piece1number;
  cin >> piece2char >> piece2number;

  while (piece1char != piece2char || piece1number != piece2number) {
    if (piece1char != piece2char) {
      if (piece1char > piece2char) {
        piece1char -= 1; 
        result += "L";
      } else {
        piece1char += 1;
        result += "R";
      }
    }

    if (piece1number != piece2number) {
      if (piece1number > piece2number) {
        piece1number -= 1;
        result += "D";
      } else {
        piece1number += 1;
        result += "U";
      }
    }

    moves++;
    result += "\n";
  }

  cout << moves << endl;
  cout << result;
}
