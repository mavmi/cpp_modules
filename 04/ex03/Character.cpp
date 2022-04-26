#include "Character.hpp"

Character::Character(){
	name = "default character";
	initArray();
}

Character::Character(const std::string &name){
	this->name = name;
	initArray();
}

Character::Character(const Character &another){
	name = another.name;
	copyArray(another);
}

Character::~Character(){
	for (int i = 0; i < 4; ++i){
		if (equipment[i]){
			delete equipment[i];
		}
	}
}

Character &Character::operator=(const Character &another){
	name = another.name;
	copyArray(another);
	return *this;
}

std::string const &Character::getName() const {
	return name;
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (!equipment[i]){
			equipment[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx){
	if (!chechEquip(idx)){
		return;
	}
	equipment[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target){
	if (!chechEquip(idx)){
		return;
	}
	std::cout << name << " ";
	equipment[idx]->use(target);
	delete equipment[idx];
	equipment[idx] = nullptr;
}

bool Character::chechEquip(int idx){
	if (idx < 0 || idx > 3 || !equipment[idx]){
		return false;
	}
	return true;
}

void Character::initArray(){
	for (int i = 0; i < 4; ++i){
		equipment[i] = nullptr;
	}
}

void Character::copyArray(const Character &another){
	for (int i = 0; i < 4; ++i){
		if (another.equipment[i]){
			if (equipment[i]){
				delete equipment[i];
			}
			equipment[i] = another.equipment[i]->clone();
		} else {
			equipment[i] = nullptr;
		}
	}
}
