#ifndef STRINGHELPER_H
#define	STRINGHELPER_H

#include <string>
#include <list>

class StringHelper {
public:
    StringHelper();
    virtual ~StringHelper();
    static int convertStringToInt(std::string s);
    static std::list<std::string> getListOfTokens(std::string message, std::string delimiter);
    static std::string convertIntToString(int i);
private:
    
};

#endif	/* STRINGHELPER_H */

