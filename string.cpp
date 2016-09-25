//
// Created by Ann on 24.09.2016.
//

#include "string.h"


String::String(const char *str = "")
{
    size = strlen(str);
    this->str = new char[size + 1];
    strcpy(this->str, str);
    this->str[size] = '\0';
}

String::String(size_t n, char c)
{
    char * str = new char[n+1];
    for (size_t i = 0; i != n; ++i){
        str[i] = c;
    }
    str[n] = '\0';
    this->str = str;
    size = n;
}

String::~String()
{
    delete [] str;
    str = nullptr;
}

void String::append(String& other){
    char * buf = new char[size + other.size + 1];

    strcpy(buf, str);
    strcat(buf, other.str);

    delete [] str;
    str = buf;

    size = size + other.size;
}
