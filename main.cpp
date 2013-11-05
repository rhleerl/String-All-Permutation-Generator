#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include "comboGenerator.h"

int main(int argc, char **argv){
	
	std::string input = "abcde";
	std::string interSolution;
	std::size_t removalElement = std::string::npos;
	std::vector<std::string> finalSolutionList;
	
	
	std::cout << "Combo Counter test:\n";
	std::cout << "Number of characters in string: ";
	unsigned long long int numChars;
	std::cin >> numChars;
	for(unsigned long long int i = 1; i <= numChars; i++){
		std::cout << "nonfactorialComboCounter(" << i << ") = " << utils::nonfactorialComboCounter(i) << std::endl;
	}
	std::cout << std::endl;
	

	return 0;
}