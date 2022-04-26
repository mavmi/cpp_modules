#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource &another);
	~MateriaSource();

	MateriaSource &operator=(const MateriaSource &another);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *materias[4];

	void copyArray(const MateriaSource &another);
	void initArray();

};

#endif
