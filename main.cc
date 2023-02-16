#include <string>

int main(int argc, const char* argv[]) {
  std::string str {"Hello World"};
  str.assign("World");

  str.assign("I love you");
  
  std::cout << "Hello world！";
  
  return 1;
}
