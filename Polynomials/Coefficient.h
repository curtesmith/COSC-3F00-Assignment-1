#ifndef COEFFICIENT_H
#define	COEFFICIENT_H

class Coefficient {
public:
    Coefficient();
    Coefficient(int value);    
    virtual ~Coefficient();
    int toInt();
private:
    int value;
    void init(int value);
};

#endif	/* COEFFICIENT_H */

