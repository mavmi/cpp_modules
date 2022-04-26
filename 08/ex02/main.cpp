#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "cycle:" << std::endl;
	while (it != ite){
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	{
		std::stack<int> s(mstack);

		while (!s.empty()){
			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;
	}

	{
		std::stack<int> s = mstack;

		while (s.size()){
			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;
	}

	{
		MutantStack<int> mstack;

		for (int i = 1; i <= 21; ++i){
			mstack.push(i);
		}

		MutantStack<int> cpy(mstack);
		while (cpy.size()){
			std::cout << cpy.top() << " ";
			cpy.pop();
		}
		std::cout << std::endl;

		MutantStack<int> cpy_1 = mstack;
		while (!cpy_1.empty()){
			std::cout << cpy_1.top() << " ";
			cpy_1.pop();
		}
		std::cout << std::endl;
	}
}