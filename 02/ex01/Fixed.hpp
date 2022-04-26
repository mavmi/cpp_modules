#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed{
public:
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed &another);
	~Fixed();
	
	Fixed &operator=(const Fixed &another);

	int getRawBits() const;
	void setRawBits(int const raw);
	
	float toFloat() const;
	int toInt() const;

private:
	int fixed_point_value;
	static const int prec = 8;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
