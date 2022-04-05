#include <iostream>
using namespace std;

int main(){
  int n, n1=1, n2=1, n3;
  std::cout<<"Inserire un numero intero.\n";
  cin >> n;
  std::cout << n1 << "\n" << n2;
      n3 = n1 + n2;
      while (n3 <= n) {
          std::cout << "\n" << n3;
          n1 = n2;
          n2 = n3;
          n3 = n1 + n2;
      }
  return 0;
}
