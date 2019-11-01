Given a number n, find the smallest number that has same set of digits as n and is greater than n. If n is the greatest possible number with its set of digits, then print “not possible”.
Examples:
For simplicity of implementation, we have considered input number as a string.

Input:  n = "218765"
Output: "251678"

Input:  n = "1234"
Output: "1243"

Input: n = "4321"
Output: "Not Possible"

Input: n = "534976"
Output: "536479"
	
	
	
	

// C++ program to demonstrate the use of std::min 
#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <string> 
using namespace std;
#include<gtest/gtest.h>




int getSmallOnLeff(std::string  const & str) {
	
	for (int index = str.length()-1  ; index > 0; index--) {
		if (str[index] > str[index - 1])
			return index -1;
	}
	return -1;
}

int main(int argc , char **  argv) {
	int number = 12572;
	std::string str = to_string(number);
	int index = getSmallOnLeff(str);
	if (index < 0) {
		std::cout << "Not Possible" << std::endl;
		return 0;
	}
	std::swap(str[index], str[str.length() - 1]);
	std::sort(&str[index+1], &str[str.length()]);
	std::cout << "Input:" << number << std::endl;
	std::cout << "Output:" << str << std::endl;
	
	return 0;

}
 
