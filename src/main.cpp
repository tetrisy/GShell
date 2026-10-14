#include <iostream>
#include <string>

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";

  std::string userCommand {};

  std::getline(std::cin, userCommand);
  std::cout << userCommand << ": command not found" << std::endl;

  return 0;
}