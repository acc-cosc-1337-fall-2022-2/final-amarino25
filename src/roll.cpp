//
#include "roll.h"
#include <iostream>


using std::cout;
using std::cin;

Roll::Roll(Die& die1, Die& die2): die1(die1), die2(die2)
{
}    

void Roll::roll_die()
{
    die1.roll();
    die2.roll();

    value = die1.rolled_value() + die2.rolled_value();
    rolled = true;
}

int Roll::roll_value() const
{
    return value;
}