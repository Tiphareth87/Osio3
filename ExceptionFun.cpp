#include <iostream>
#include <vector>
int main() {
std::vector<double> nums { 1.0, 2.0, 3.0 };
int input;
// while (true) {
std::cout << "Enter an index: ";
std::cin >> input;
try {
std::cout << nums.at(input) << '\n';
    //break;
}
catch (std::exception& e) { //catch (std::exception&) {
std::cout << e.what() << '\n'; //"Index is out of range. Please try again.\n";

}
}
//}