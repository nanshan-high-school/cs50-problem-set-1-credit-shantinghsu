#include <iostream>
using namespace std;

int main() {
  long long num;
  
  cin >> num;
  for (int i = 0; i < num; i++) {
      cin >> num;

      int odd = 0, total = 0;

      for (int j = 0; j < 16; j = j + 2) {
          odd = int (j - 1) * 2;
          if (odd >= 10) {
              total = total + 1 + odd % 10;
          } else {
              total = total + odd % 10;
          }
     } for (int j = 1; j < 16; j = j + 2) {
         odd = int (j - 1); 
         total = total + odd;
     } if (total % 10 == 0) {
         cout << "合法\n";
     } else {
         cout << "不合法\n";
         break;
     }
  } 
}
