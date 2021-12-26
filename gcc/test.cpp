#include <iostream>

int main() {
  using namespace std;

  // example: fizz-buzz
  const auto l = 100;
  for (auto i = 1; i <= l; i++) {
    auto fizzbuzz = false;
    if (i % 3 == 0) {
      fizzbuzz = true;
      cout << "fizz";
    }
    if (i % 5 == 0) {
      fizzbuzz = true;
      cout << "buzz";
    }
    if (!fizzbuzz) cout << i;
    cout << endl;
  }
}
