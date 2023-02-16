#include <string>
#include <iostream>

int main(int argc, const char* argv[]) {
  std::string str {"Hello World"};
  str.assign("World");

  str.assign("I love you");

  std::cout << "Hello World!" << std::endl;
  return 1;
}
