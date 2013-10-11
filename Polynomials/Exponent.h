#ifndef EXPONENT_H
#define	EXPONENT_H

#include <string>

class Exponent {
public:
    Exponent();
    Exponent(std::string value);
    Exponent(Exponent* clone);
    virtual ~Exponent();
    int toInt();
    std::string toString();
    int compareTo(Exponent* anotherExponent);   
private:
    std::string value;
    void init(std::string value);
};

#endif	/* EXPONENT_H */

