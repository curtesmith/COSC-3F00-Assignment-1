#include "StringHelper.h"
#include <string>
#include <sstream>


StringHelper::StringHelper() { }


StringHelper::~StringHelper() { }


int StringHelper::convertStringToInt(std::string s) {
    int result;
    std::stringstream(s) >> result;
    return result;
}


std::list<std::string> StringHelper::getListOfTokens(std::string message, std::string delimiter) {
    std::list<std::string> tokens;
    int start = 0;
    int finish = 0;
    int numberOfCharactersRemaining = 0;

    while (finish < message.length()) {
        numberOfCharactersRemaining = message.length() - start;
        finish = message.substr(start, numberOfCharactersRemaining).find(delimiter);
        if (finish != std::string::npos) {
            finish += start;
            int numberOfCharacters = finish - start;
            tokens.push_back(message.substr(start, numberOfCharacters));
            start = finish + 1;
        } else {
            if (start < message.length()) {
                tokens.push_back(message.substr(start, message.length() - start));
            }
        }
    }

    return tokens;
}


std::string StringHelper::convertIntToString(int i) {
    std::ostringstream stream;
    stream << i;
    return stream.str();
}

std::string StringHelper::convertPointerToString(Node** pointer) {
    std::ostringstream stream;
    stream << pointer;
    return stream.str();
}

std::string StringHelper::convertNodeToString(Node* node) {
    std::ostringstream stream;
    stream << node;
    return stream.str();
}