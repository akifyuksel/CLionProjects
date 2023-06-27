//
// Created by kiwi on 6/8/23.
//

#ifndef PLAYGROUND_ASTRING_H
#define PLAYGROUND_ASTRING_H


class AString {
private:
    char *value;
public:
    AString();
    explicit AString(const char *str);
    AString(const AString &other);
    AString& operator=(const AString &other);
    AString operator+(const AString &other);
    int length();
    char *toCString();
    ~AString();
};


#endif //PLAYGROUND_ASTRING_H
