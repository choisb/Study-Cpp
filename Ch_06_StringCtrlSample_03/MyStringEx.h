#pragma once
#include "MyString.h"
class CMyStringEx :
    public CMyString
{
public:
    CMyStringEx();
    explicit CMyStringEx(const char* pszParam);

    int Find(const char* pszParam);
    int SetString(const char* pszParam);
    ~CMyStringEx();

};

