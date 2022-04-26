#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{	
public:
	Ice();
	Ice(const Ice& another);
	~Ice();

	Ice& operator=(const Ice& another);

	AMateria* clone() const;
	void use(ICharacter &target);
	
};

#endif
