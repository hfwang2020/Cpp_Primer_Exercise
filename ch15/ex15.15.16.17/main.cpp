/***************************************************************************
 *  @file       main.cpp
 *  @author     Hoesel Markus
 *  @date       11  Apr 2016
 *  @remark     This code is for the exercises from C++ Primer 5th Edition
 *  @note
 ***************************************************************************/
 //
 // Exercise 15.9:
 // When is it possible for an expression’s static type to differ from its 
 // dynamic type? Give three examples in which the static and dynamic type differ.
 //

#include <iostream>
#include <string>

#include "quote.h"
#include "disc_quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

int main()
{
    Disc_quote quote;
    // 不允许使用抽象类类型 "Disc_quote" 的对象: -- 函数 "Disc_quote::net_price" 是纯虚拟函数
    return 0;
}
