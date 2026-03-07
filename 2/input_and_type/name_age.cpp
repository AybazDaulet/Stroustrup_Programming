#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::cout << "Please enter your first name and age\n";
  std::string first_name = "???";
  double age = -1;
  std::cin >> first_name >> age;
  age *= 12;
  std::cout << "Hello, " << first_name << " (age " << age << " months)\n";
  return 0;
}
