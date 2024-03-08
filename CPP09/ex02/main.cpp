#include "PmergeMe.hpp"

int main(int ac, char **av) {
	(void)ac;
	(void)av;
	try {
		PmergeMe pm;
		pm.validateArgs(ac, av);
		pm.parseArgs(ac, av);
	}
	catch(const std::exception &e) {
		cout << "Error" << endl;
	}
}
