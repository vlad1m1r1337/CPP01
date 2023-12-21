#ifndef CPPMODULESPROJECT_ICHARACTER_HPP
#define CPPMODULESPROJECT_ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter {
public:
	virtual ~ICharacter();
	virtual string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
