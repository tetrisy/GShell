#include <iostream>
#include <string>

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (true) {
    std::cout << "$ ";

    std::string userCommand {};

    std::getline(std::cin, userCommand);

    if (userCommand == "exit") {
      break;
    } else if (userCommand.substr(0, 4) == "echo") {
      std::cout << userCommand.substr(5) << std::endl;
    } else {
      std::cout << userCommand << ": command not found" << std::endl;
    }
  }

  return 0;
}
