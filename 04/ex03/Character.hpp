#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character();
	Character(const std::string &name);
	Character(const Character &another);
	~Character();	

	Character &operator=(const Character &another);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	AMateria *equipment[4];
	std::string name;

	bool chechEquip(int idx);
	void initArray();
	void copyArray(const Character &another);

};

#endif
