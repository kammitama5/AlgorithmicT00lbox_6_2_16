//g++ - pipe -02 -std=c++11

#include <iostream>

int main(){
	int a = 0;
	int b = 0;
	int sum = 0;
	std::cin >> a;
	std::cin >> b;
	sum = a + b;
	std::cout << sum;

	system("PAUSE");
	return 0;
}