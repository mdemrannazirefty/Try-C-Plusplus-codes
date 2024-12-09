#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
  for (int i = 0; i < n; i++) {
    if (n == 4) {
      break;
    }
    cout << i << "\n";
  }
  return 0;
}
