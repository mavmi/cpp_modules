#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen;

typedef void (Karen::*FuncPtr)(void);

class Karen{
public:
	void complain(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();

};

#endif
