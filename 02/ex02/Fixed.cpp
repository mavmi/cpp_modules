#include "Fixed.hpp"

Fixed::Fixed(){
	fixed_point_value = 0;
}
Fixed::Fixed(const int val){
	fixed_point_value = val << prec;
}
Fixed::Fixed(const float val){
	fixed_point_value = static_cast<int>(roundf(val * (1 << prec)));
}
Fixed::Fixed(const Fixed &another){
	this->fixed_point_value = another.fixed_point_value;
}
Fixed::~Fixed(){

}

Fixed& Fixed::operator=(const Fixed &another){	
	this->fixed_point_value = another.fixed_point_value;
	return *this;
}

int Fixed::getRawBits() const {
	return fixed_point_value;
}
void Fixed::setRawBits(int const raw){
	fixed_point_value = raw;
}

float Fixed::toFloat() const {
	return static_cast<float>((float)fixed_point_value / (float)(1 << prec));
}
int Fixed::toInt() const {
	return fixed_point_value >> prec;
}


bool Fixed::operator>(const Fixed &another) const{
	return fixed_point_value > another.getRawBits();
}
bool Fixed::operator<(const Fixed &another) const{
	return fixed_point_value < another.getRawBits();
}
bool Fixed::operator>=(const Fixed &another) const{
	return fixed_point_value >= another.getRawBits();
}
bool Fixed::operator<=(const Fixed &another) const{
	return fixed_point_value <= another.getRawBits();
}
bool Fixed::operator==(const Fixed &another) const{
	return fixed_point_value == another.getRawBits();
}
bool Fixed::operator!=(const Fixed &another) const{
	return fixed_point_value != another.getRawBits();
}

Fixed Fixed::operator+(const Fixed &another) const{
	Fixed fixed;
	fixed.setRawBits(getRawBits() + another.getRawBits());
	return fixed;
}
Fixed Fixed::operator-(const Fixed &another) const{
	Fixed fixed;
	fixed.setRawBits(getRawBits() - another.getRawBits());
	return fixed;
}
Fixed Fixed::operator*(const Fixed &another) const{
	Fixed fixed;
	fixed.setRawBits(getRawBits() * another.getRawBits() / (1 << prec));
	return fixed;
}
Fixed Fixed::operator/(const Fixed &another) const{
	Fixed fixed;
	fixed.setRawBits(getRawBits() * (1 << prec) / another.getRawBits());
	return fixed;
}

Fixed Fixed::operator++(){
	fixed_point_value++;
	return *this;
}
Fixed Fixed::operator--(){
	fixed_point_value--;
	return *this;
}
Fixed Fixed::operator++(int){
	Fixed fixed(*this);
	fixed_point_value++;
	return fixed;
}
Fixed Fixed::operator--(int){
	Fixed fixed(*this);
	fixed_point_value--;
	return fixed;
}

Fixed &Fixed::min(Fixed &f, Fixed &s){
	if (f < s)
		return f;
	return s;
}
Fixed &Fixed::max(Fixed &f, Fixed &s){
	if (f > s)
		return f;
	return s;
}
const Fixed &Fixed::min(const Fixed &f, const Fixed &s){
	if (f < s)
		return f;
	return s;
}
const Fixed &Fixed::max(const Fixed &f, const Fixed &s){
	if (f > s)
		return f;
	return s;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed){
	os << fixed.toFloat();
	return os;
}