//
#include "die.h"
#include<iostream>

using std::cout;
using std::cin;

void die::roll()
{
    roll_value = rand()%sides+1;
}

int die::rolled_value()const
{
    return roll_value;
}

