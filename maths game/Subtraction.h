#pragma once
#include "Question.h"

class Subtraction :
    public Question
{
public:
    void Display(int op1, int op2);


protected:
    virtual char getSymbol();
};

