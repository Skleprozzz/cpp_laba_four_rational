
#ifndef RATIONAL_NUM
#define RATIONAL_NUM

#include <iostream>
using namespace std;

class Rational {
  friend Rational operator+(const Rational& left, const Rational& right);
  friend Rational operator-(const Rational& left, const Rational& right);
  friend Rational operator*(const Rational& left, const Rational& right);
  friend Rational operator/(const Rational& left, const Rational& right);
  friend bool operator==(const Rational& left, const Rational& right);
  friend bool operator!=(const Rational& left, const Rational& right);
  friend bool operator<(const Rational& left, const Rational& right);
  friend bool operator>(const Rational& left, const Rational& right);
  friend bool operator<=(const Rational& left, const Rational& right);
  friend bool operator>=(const Rational& left, const Rational& right);
  friend ostream& operator<<(ostream& out, const Rational& obj);
  friend istream& operator>>(istream& in, Rational& obj);
  
  public:
    Rational();
    Rational(double x);
    Rational(int numerator_, int denominator_ = 1);

    Rational& operator=(const Rational& obj);
    Rational& operator+=(const Rational& obj);
    Rational& operator-=(const Rational& obj);
    Rational& operator*=(const Rational& obj);
    Rational& operator/=(const Rational& obj);
    Rational& operator++();
    Rational operator++(int);
    Rational& operator--();
    Rational operator--(int);
    Rational operator+() const;
    Rational operator-() const;
   
    void setNumerator(int numerator_);
    int getNumerator() const;
    void setDenominator(int denominator_);
    int getDenominator() const;

  private:
    int numerator;
    int denominator;
    void simplify();
};
#endif