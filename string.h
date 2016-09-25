//
// Created by Ann on 25.09.2016.
//

#ifndef STEPIC_STRING_H
#define STEPIC_STRING_H

#endif //STEPIC_STRING_H

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy


struct String {
    String(const char *str = "");
    String(size_t n, char c);

    ~String();

    void append(String& other);

    size_t size;
    char *str;
};