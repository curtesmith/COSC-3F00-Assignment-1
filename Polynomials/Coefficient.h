#ifndef COEFFICIENT_H
#define	COEFFICIENT_H

#include <string>

class Coefficient {
public:
    Coefficient();
    Coefficient(std::string value);   
    virtual ~Coefficient();
    int toInt();
    std::string toString();
    void setValue(int value);
private:
    std::string value;
    void init(std::string value);
};

#endif	/* COEFFICIENT_H */

