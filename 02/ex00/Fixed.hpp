#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
public:
	Fixed();
	Fixed(const Fixed &another);
	Fixed &operator=(const Fixed &another);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int fixed_point_value;
	static const int prec = 8;

};

#endif
