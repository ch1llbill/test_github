#include <iostream>

int square(int n){
  return n*n;
}

int main(){
  std::cout << "Printing math" << std::endl;
  int n = 8;
  std::cout << square(n) << square(5) << std::endl;
}
