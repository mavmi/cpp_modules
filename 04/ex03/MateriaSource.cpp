#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	initArray();
}

MateriaSource::MateriaSource(const MateriaSource &another){
	copyArray(another);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; ++i){
		if (materias[i]){
			delete materias[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &another){
	copyArray(another);
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia){
	for (int i = 0; i < 4; ++i){
		if (!materias[i]){
			materias[i] = materia->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; ++i){
		if (materias[i] && materias[i]->getType() == type){
			return materias[i]->clone();
		}
	}
	return nullptr;
}

void MateriaSource::copyArray(const MateriaSource &another){
	for (int i = 0; i < 4; ++i){
		if (another.materias[i]){
			if (materias[i]){
				delete materias[i];
			}
			materias[i] = another.materias[i]->clone();
		} else {
			materias[i] = nullptr;
		}
	}
}

void MateriaSource::initArray(){
	for (int i = 0; i < 4; ++i){
		materias[i] = nullptr;
	}
}
