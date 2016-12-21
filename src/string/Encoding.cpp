//
// Created by ykh on 2016-12-21.
//

#include "Encoding.h"
#include <codecvt>
#include <locale>

std::string jwpack::string::Encoding::W2UTF8(const wchar_t* wstr)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> ucs2conv;
    return ucs2conv.to_bytes(wstr);
}
std::string jwpack::string::Encoding::W2A(const wchar_t* wstr)
{
    return W2UTF8(wstr);
}
