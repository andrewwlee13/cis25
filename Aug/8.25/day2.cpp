#include <iostream>
#include <string>

void readAndPrintProfile();

int main() {
    readAndPrintProfile();
    return 0;
}

void readAndPrintProfile() {
    std::string fullName;
    int age = 0;
    std::string nickname;

    std::cout << "Enter your full name: ";
    std::cin << fullName;
    // TODO: Read the entire line into fullName.

    std::cout << "Enter your age: ";
    // TODO: Read one integer into age.

    std::cout << "Enter a one-word nickname: ";
    // TODO: Read one word into nickname.

    // TODO: Print a blank line and the four required profile lines.
}