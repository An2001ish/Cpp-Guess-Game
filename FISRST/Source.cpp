#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<fstream>

using namespace std;



void print_vector(vector<int>guesses1) {

	cout << "It took you " << guesses1.size()<< " tries to guess. Here are the guesses:" << endl; 
	for (int i = 0; i <guesses1.size(); i++) {

	cout << guesses1[i] << '\t';
	}
	cout << endl;
}

void guessgame() {
	
	cout << "Lets play a guessing game!\n";
	int answer =rand()%101;
	cout << answer << endl;
	int count = 0;
	vector <int> guesses;

	while (true) {

		int unum;
		
		cout << "Guess a number: ";

		cin >> unum;

		guesses.push_back(unum);

		if (unum == answer) {
			cout << "YOU WIN!\n";

			break;
		}
		else if (unum < answer) {

			cout << "TOO LOW!\n";
		}
		else {
			cout << "TOO HIGH!\n";
		}
	}
	
	count = guesses.size();

	savescore(count);

print_vector(guesses);
}

int main() {

	int choice;
	srand(time(NULL));

	do{
			cout << "1. PLAY!\n0. QUIT\n";

		cin >> choice;

		switch(choice)  {

		case 0:
			return 0;

		case 1:
			
			guessgame();
		break;
		}
	
	} while (choice != 0);

	return 0;
}


