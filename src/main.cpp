/**
 * @file test.cpp
 * @author 长高 (2320404851@qq.com)
 * @brief
 * @version 0.1
 * @date 2023-10-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <test>
#include <string>

using _IO_SYMBOL::AddtionalEquipment;
using std::cout;
using std::endl;

int main(int args, char **argv)
{
    AddtionalEquipment addtionalEquipment;
    __UINT16_TYPE__ *temp;
    for (__int32 i = 1; i < args; i++)
    {
        temp = addtionalEquipment.getLength(argv[i]);
        cout << temp[0] << " " << temp[1] << endl;
    }
    return 0;
}