#include <iostream>
#include <string>

void greethings() {
	std::string name;
	int age;
	std::cout << "Whats ur age " << '\n';
	std::cin >> age;
	std::cout << "Whats ur name " << '\n';
	std::getline(std::cin >> std::ws, name);
	std::cout << "Hello " << name;
	std::cout << " you are " << age << " years old";//receiving an int and a string
}
int sumOfTwo() {
	int n1, n2;
	std::cout << "enter 2 numbers " << std::endl;
	std::cin >> n1 >> n2;
	std::cout << "The sum of " << n1 << " and " << n2 << " is equal to " 
		<< n1 + n2 << std::endl;
	//sum of unknow values
	return n1 + n2;
}
int  sumOfNvalues() {
	int n = 0, valn = 0;
	while (std::cin >> valn) n += valn;

	std::cout << n;// read unknown numer of values
	return n;
}
void consecutiveInputs() {
	std::cout << "enter the numbers "<<std::endl;
	int val = 0, currval = 0;
	if (std::cin >> currval) {
		int cnt = 1;
		while (std::cin >> val) {
			if (currval == val) ++cnt;
			else {
				std::cout << "The number " << currval << " repeats " << cnt << " times." << std::endl;
				currval = val;
				cnt = 1;
			}
		}std::cout << "The number " << currval << " repeats " << cnt << " times." << std::endl;
	}//count how many time a number occurs it has to be consecutive
}
int main () {
	//greethings();
	//int sumOfTwoNums = sumOfTwo();
    //int sumOfNnums = sumOfNvalues();
	consecutiveInputs();

	return 0;
}