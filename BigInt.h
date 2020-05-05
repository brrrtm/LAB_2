#include <iostream>
#include <string>

class BigInt {
	std::string value; 
	bool isNeg; 

	static BigInt karatsuba_mul(const BigInt &a, const BigInt &b); 

public:
	BigInt(); 
	BigInt(long x); 
	BigInt(const std::string &value); 
	BigInt(const BigInt& bigInt); 

	const std::string &getValue() const; 

	const bool getIsNeg() const; 
	void setIsNeg(bool isNeg); 

	int sign() const; 
	const bool isEven() const;

	BigInt abs() const; 
	BigInt pow(long n) const; 
	BigInt pow(const BigInt& x) const; 
	BigInt sqrt(long n = 2) const; 

	
	const bool operator==(const BigInt &bigInt) const;
	const bool operator!=(const BigInt &bigInt) const;

	const bool operator<(const BigInt &bigInt) const;
	const bool operator>(const BigInt &bigInt) const;
	const bool operator<=(const BigInt &bigInt) const;
	const bool operator>=(const BigInt &bigInt) const;

	void read(const std::string&);
	
	BigInt &operator=(const BigInt &bigInt);

	
	BigInt operator+() const &&;
	BigInt operator-() const &&;

	
	BigInt operator+(const BigInt &bigInt) const;
	BigInt operator-(const BigInt &bigInt) const;
	BigInt operator*(const BigInt &bigInt) const;
	BigInt operator/(const BigInt &bigInt) const;
	BigInt operator%(const BigInt &bigInt) const;
	BigInt operator<<(size_t n) const;
	BigInt operator>>(size_t n) const;

	
	BigInt &operator+=(const BigInt &bigInt);
	BigInt &operator-=(const BigInt &bigInt);
	BigInt &operator*=(const BigInt &bigInt);
	BigInt &operator/=(const BigInt &bigInt);
	BigInt &operator%=(const BigInt &bigInt);
	BigInt &operator<<=(size_t n);
	BigInt &operator>>=(size_t n);

	
	BigInt &operator++(); 
	BigInt &operator--();

	
	BigInt operator++(int); 
	BigInt operator--(int); 


	friend std::ostream &operator<<(std::ostream &stream, const BigInt &bigInt); 
	friend std::istream &operator>>(std::istream &stream, BigInt &bigInt); 
};