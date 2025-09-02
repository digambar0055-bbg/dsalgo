#include <iostream>
#include <string>

int main() {
	std::string num1 = "11111222222223333333377777788888000000";
	std::string num2 = "11111222222223333333377777788888000000";
	std::string result;
	int i = num1.size() - 1;
	int j = num2.size() - 1;
	int carry = 0;

	while(i >= 0 || j >= 0 || carry > 0) {
		int digit1 = i >= 0 ? (num1[i--] - '0') : 0;
		int digit2 = j >= 0 ? (num2[j--] - '0') : 0;

		int sum = digit1 + digit2 + carry;
		carry = sum / 10;
		result.push_back((sum % 10) + '0');	
	}

	std::reverse(result.begin(), result.end());
	std::cout << "First digit: " << num1 << std::endl;
	std::cout << "Second digit: " << num2 << std::endl;
	std::cout << "The final result: " << result << std::endl;
	return 0;
}
