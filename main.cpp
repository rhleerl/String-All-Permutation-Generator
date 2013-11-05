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
	
// 	utils::recursiveCombinationGenerator(input, interSolution, removalElement, finalSolutionList);
// 	int i = 1;
// 	for(std::vector<std::string>::const_iterator iter = finalSolutionList.begin();
// 		iter != finalSolutionList.end(); ++iter){
// 			std::cout << i++ << ": " << *iter << std::endl;
// 		}
// 	std::cout << std::endl;

	// std::cout << "factorial test:\n";
// 	std::cout << "What number to go up to: ";
// 	int factInput;
// 	std::cin >> factInput;
// 	for(int i = 0; i < factInput; i++){
// 		std::cout << "factorial(" << i << ") = " << utils::factorial(i) << std::endl;
// 	}
// 	std::cout << std::endl;

// 	std::cout << "Combo Counter test:\n";
// 	std::cout << "Number of characters in string: ";
// 	unsigned long long int numChars;
// 	std::cin >> numChars;
// 	for(int i = 1; i <= numChars; i++){
// 		std::cout << "comboCounter(" << i << ") = " << utils::numberOfCombos(i) << std::endl;
// 	}
// 	std::cout << std::endl;
	
	std::cout << "Combo Counter test:\n";
	std::cout << "Number of characters in string: ";
	unsigned long long int numChars;
	std::cin >> numChars;
	for(unsigned long long int i = 1; i <= numChars; i++){
		std::cout << "nonfactorialComboCounter(" << i << ") = " << utils::nonfactorialComboCounter(i) << std::endl;
	}
	std::cout << std::endl;
	
	
// 	std::cout << std::endl;
// 	std::cout << "ULL_MAX = " << ULLONG_MAX << std::endl;
// 	std::cout << std::endl;

	return 0;
}