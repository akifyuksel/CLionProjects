//
// Created by kiwi on 6/8/23.
//

#include <cstring>
#include "AString.h"

    AString::AString() {
        this->value = nullptr;
    }
    AString::AString(const char *str) {
        this->value = new char[strlen(str)+1];
        strcpy(this->value,str);
}
    AString::AString(const AString &other) {
        this->value = new char[strlen(other.value)+1];
        strcpy(this->value, other.value);
}
    AString& AString::operator=(const AString &other) {
        if (other.value == this->value) return *this;
        delete[] this->value;
        this->value = new char[strlen(other.value)+1];
        strcpy(this->value, other.value);
        return *this;
}
    AString AString::operator+(const AString &other) {
        if(this->value == nullptr) {
            auto *res = new AString(new char[strlen(other.value)+1]);
            strcpy(res->value,other.value);
            return *res;
        }
        if(other.value == nullptr) {
            auto *res = new AString(new char[strlen(this->value)+1]);
            strcpy(res->value,this->value);
            return *res;
        }
        auto *res = new AString(new char[strlen(this->value) + strlen(other.value)+1]);
        res->value = strcpy(res->value, this->value);
        res->value = strcat(res->value, other.value);
        return *res;
}
    int AString::length() {
        if(this->value == nullptr) return 0;
        return (int) strlen(this->value);
    }

    char* AString::toCString() {
        return this->value;
}

    AString::~AString(){
        delete[] this->value;

}
