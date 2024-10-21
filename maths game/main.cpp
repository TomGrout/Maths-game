#include <iostream>
#include <time.h>
#include "Question.h"
#include "Subtraction.h"
#include "Addition.h"

using namespace std;

int main(){

#ifdef _DEBUG
	//_CrtSetBreakAlloc();
	_onexit(_CrtDumpMemoryLeaks);
#endif

	const int NO_OF_QUESTIONS = 20;
	Question* questions[NO_OF_QUESTIONS];

	srand(time(NULL));
	int score = 0;

	for (int i = 0; i < NO_OF_QUESTIONS; i++) {

		int symbol = rand() % 2;

		if (symbol == 0) {
			questions[i] = new Addition();
		}
		else {
			questions[i] = new Subtraction();
		}
		questions[i]->Display();

		int userAnswer;
		cin >> userAnswer;
		if (questions[i]->takeAnswer(userAnswer) == questions[i]->Answer()) {
			cout << "Well done\n";
			score++;
		}

		else {
			cout << "No. \n";
		}

	}
	cout << "Score: " << score;
	return 0;
}