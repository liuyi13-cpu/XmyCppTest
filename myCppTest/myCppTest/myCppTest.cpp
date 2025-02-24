// myCppTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>
#include "stdafx.h"


// int _tmain(int argc, _TCHAR* argv[])
// {
// 	return 0;
// }


// 获取C++版本
long getCPPStandard()
{
    // Visual Studio is non-conforming in support for __cplusplus (unless you set a specific compiler flag, which you probably haven't)
    // In Visual Studio 2015 or newer we can use _MSVC_LANG instead
    // See https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
#if defined (_MSVC_LANG)
    return _MSVC_LANG;
#elif defined (_MSC_VER)
    // If we're using an older version of Visual Studio, bail out
    return -1;
#else
    // __cplusplus is the intended way to query the language standard code (as defined by the language standards)
    return __cplusplus;
#endif
}

void foo(int a){}

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";
    
    unsigned int a = 10;
    foo(a); // 类型强制转换

    int width = 5.0;
    // int width1 { 5.0 };  // 禁止隐式转换
    
    return 0;
}
