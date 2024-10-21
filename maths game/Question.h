#pragma once
#include <time.h>
#include <stdlib.h>
#include <iostream>

class Question
{
public:
	Question();

	void Display();

	int takeAnswer(int input);

	int Answer();

protected:
	virtual char getSymbol() = 0;


private: 
	int op1, op2, userAns;
};
