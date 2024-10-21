#include "Question.h"
#include <iostream>

Question::Question()
{
	op1 = rand() % 10 + 1;
	op2 = rand() % 10 + 1;

	userAns = 504222;
}

void Question::Display() {
	std::cout << "What is " << op1 << getSymbol() << op2 << "?\n";
}

int Question::Answer() {
	if (getSymbol() == '+') {
		return op1 + op2;
	}
	else {
		return op1 - op2;
	}
}

int Question::takeAnswer(int input) {
	userAns = input;
	return userAns;

}