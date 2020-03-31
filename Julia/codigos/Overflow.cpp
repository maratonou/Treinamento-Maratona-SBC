#include <iostream>

int main() {
  
  int limit, n1,n2,result;
  char c;

  std::cin >> limit >> n1 >> c >> n2;

  if(c == '+')
    result = n1 + n2;
  else
    result = n1 * n2;

  if(result <= limit)
    std::cout << "OK";
  else
    std:: cout << "OVERFLOW";
  
  std::cout << std::endl;



  return 0;
}