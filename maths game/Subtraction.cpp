#include "Subtraction.h"

void Subtraction::Display(int op1, int op2)
{
	std::cout << op1 << " - " << op2 << " = " << op1 - op2;

}

char Subtraction::getSymbol() {
	return '-';
}

