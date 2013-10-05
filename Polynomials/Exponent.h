#ifndef EXPONENT_H
#define	EXPONENT_H

class Exponent {
public:
    Exponent();
    Exponent(int value);
    virtual ~Exponent();
    int toInt();
private:
    int value;
    void init(int value);
};

#endif	/* EXPONENT_H */

