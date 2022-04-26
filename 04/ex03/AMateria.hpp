#ifndef AMETRIA_HPP
#define AMETRIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string type;
	
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &another);
	virtual ~AMateria();

	AMateria &operator=(const AMateria &another);
	
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
