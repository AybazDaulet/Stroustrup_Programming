#include <iostream>
int main() {
	double miles;
	double km;
	std::cout << "Enter miles: ";
	std::cin >> miles;
	km = miles * 1.609;
	std::cout << "that is " << km << "km\n";
	return 0;
}
