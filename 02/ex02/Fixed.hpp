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

	bool operator>(const Fixed &another) const;
	bool operator<(const Fixed &another) const;
	bool operator>=(const Fixed &another) const;
	bool operator<=(const Fixed &another) const;
	bool operator==(const Fixed &another) const;
	bool operator!=(const Fixed &another) const;

	Fixed operator+(const Fixed &another) const;
	Fixed operator-(const Fixed &another) const;
	Fixed operator*(const Fixed &another) const;
	Fixed operator/(const Fixed &another) const;

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &f, Fixed &s);
	static Fixed &max(Fixed &f, Fixed &s);
	static const Fixed &min(const Fixed &f, const Fixed &s);
	static const Fixed &max(const Fixed &f, const Fixed &s);

private:
	int fixed_point_value;
	static const int prec = 8;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
