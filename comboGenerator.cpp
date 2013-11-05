#include "comboGenerator.h"

namespace utils{
	void recursiveCombinationGenerator(std::string input, std::string interSolution, std::size_t removalElementIndex, std::vector<std::string>& solutionSet){
		
		if(removalElementIndex != std::string::npos)
			input.erase(removalElementIndex, 1);
		
		for(int i = 0; i < input.size(); i++){
			interSolution += input[i];
			recursiveCombinationGenerator(input, interSolution, input.find(input[i]), solutionSet);
 			solutionSet.push_back(interSolution);
 			interSolution.erase(interSolution.size()-1, 1);
		}
	}
	
	int factorial(const int& n){
		int result = 1;
		for(int i = 1; i <= n; i++)
			result *= i;
		return result;
	}

	

}