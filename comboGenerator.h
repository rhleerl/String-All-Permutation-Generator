#ifndef COMBOGENERATOR_H
#define COMBOGENERATOR_H

#include <string>
#include <vector>
#include <iostream>

namespace utils{

	void recursiveCombinationGenerator(std::string input, std::string interSolution, std::size_t removalElementIndex, std::vector<std::string>& solutionSet);

	int factorial(const int& n);
	
	template<typename T>
	T numberOfCombos(const T& charCount){
		T result = 0;
		
		for(T i = 1; i <= charCount; i++){
			result += static_cast<T>(factorial(charCount)/factorial(charCount - i));
		}
		return result;
	}
	
	template<typename T>
	T nonfactorialComboCounter(const T& charCount){
		T result = 0;
		T intermediaryMultiple;
		for(int i = 0; i < charCount; i++){
			intermediaryMultiple = 1;
			for(int j = charCount; j >= charCount - i; j--){
				intermediaryMultiple *= j;
			}
			result += intermediaryMultiple;
		}
		return result;
	}
}


#endif