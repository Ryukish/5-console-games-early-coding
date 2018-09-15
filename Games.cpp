#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <algorithm>


using namespace std;

void printmenu();
void hilo();
void magic8ball();
void multtable();
void analyze(string name);

 
string secretword = "hello";
string name;

int main()
{
	int choice, notquit = 1;


	while (notquit)
	{
		printmenu();
		cin >> choice;
		switch (choice)
		{
		case 1: 
			hilo();
			break;
		case 2: 
			multtable();
			break;
		case 3:	
			magic8ball();
			break;
		case 4: 
			rps();
			break;
		case 5: 
			cout << "Enter a word, and this program will check if it is a palindrome";
			cin >> name;
			analyze();
			break;
		case 0: notquit = 0;
			break;
		default:
			cout << "You entered an incorrect selection." << endl;
			system("pause");
		}
	}
	cout << "The end. Hope you had fun!" << endl;
	system("pause");
	return 0;
}

void printmenu()
{
	system("CLS");
	cout << endl;
	cout << "1436 Games Menu" << endl;
	cout << "---------------" << endl;
	cout << "1. Hi/Lo Game" << endl;
	cout << "2. Multiplication Table" << endl;
	cout << "3. Magic 8 ball" << endl;
	cout << "4. Rock, Paper, Scissors" << endl;
	cout << "5. Analyze" << endl;
	cout << "6. Funny Face" << endl;
	cout << "7. Hangman" << endl;
	cout << "8. Tic Tac Toe *optional" << endl;
	cout << "0. Quit" << endl;
	cout << endl;
	cout << "Enter your selection: ";
}

void magic8ball()
{
	const int a = 8;
	bool quit = false;
	string userInput;
	string eightBall[a];

	srand(time(0));

	eightBall[0] = "No";
	eightBall[1] = "Yes";
	eightBall[2] = "Perhaps...";
	eightBall[3] = "Most definetly yes";
	eightBall[4] = "Almost positively not";
	eightBall[5] = "I think so...";
	eightBall[6] = "Is the sun yellow";
	eightBall[7] = "Is the moon grey";

	cout << "Welcome to the Magic 8-Ball Game!" << endl;
	cout << "Type a Yes or No question to play, or type 'exit' to quit" << endl;


	while (!quit)
	{
		cout << "-------------------------------------------------------------" << endl;
		cout << "Let me tell you your future" << endl;

		getline(cin, userInput);

		if (userInput.compare("exit") == 0)quit = true;

		if (userInput.compare("") != 0 && userInput.compare("exit") != 0) {
			{

				cout << eightBall[rand() % a] << endl;

				userInput = "";
			}
		}
	}

	cout << "Thanks for playing!\n";

	system("pause");
	return 0;
}

void hilo()
{
#include <cmath>
#include <ctime>
#include <cstdlib>

		int num;            
		int guess; 
		int i, n = 2;

		srand(time(0));      
		num = rand() % 100; 

		for (i = 1; i<n; ++i)
		{
			cout << "Enter an integer greater" << " than or equal to 0 and " << "less than 100: ";
			cin >> guess;

			if (guess == num) {
				cout << "You guessed it in " << i << " tries!" << endl;
				break;
			}
			else if (guess < num)
				cout << "TOO LOW - Your guess is lower than the " << "number. Guess again!" << endl;
			else
				cout << "TOO HIGH - Your guess is higher than " << "the number. Guess again!" << endl;
			cout << ++n << endl;
		}

		system("pause");
		return 0;
}

void multtable()
{
	int askthem, count, count1 = 1;

	cout << "Enter a number for the size of the table(5=5x5, 6=6x6, 7=7x7):";
	cin >> askthem;

	cout << askthem << "x" << askthem << " ";
	for (count = 1; count <= askthem; ++count)
	{
		cout << "[" << count << "]";

	}

	for (int count1 = 1; count1 <= askthem; count1++)
	{
		cout << endl << "[" << count1 << "]";

		for (int count = 1; count <= askthem; count++)
		{
			cout << setw(3) << count * count1;

		}


	}
	cout << endl;
	system("pause");
	return 0;
}

void analyze(string name)
{
	string name;
	int len, i;
	bool flag = false;

	len = name.length();

	for (i = len - 1; i >= 0; --i) {

		if (name[i] != name[len - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag) {

		cout << name << " is not a palindrome" << endl;
	}
	else {
		cout << name << " is a palindrome" << endl;
	}

	system("pause");
	return 0;

}


void rps()
{
	const int size = 3;
	int ai, play;
	char tH;
	int win = 0, lose = 0, tie = 0, rounds;


	for (play = 1; play < 4; ++play) {
		cout << endl << "Enter R for rock, P for paper, or S for scissors:";
		cin >> tH;
		cout << "--------------------------------------------------" << endl;

		srand(time(0));
		ai = (rand() % 3);

		//1=paper  2=Scissors  3=Rock
		if ((tH == 'R' || tH == 'r') && (ai == 1))
		{
			cout << tH << " VS " << "P";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "You lose" << endl;
			++lose;
		}
		else if ((tH == 'R' || tH == 'r') && (ai == 3))
		{
			cout << tH << " VS " << "R";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "Draw!" << endl;
			++tie;
		}
		else if ((tH == 'R' || tH == 'r') && (ai == 2))
		{
			cout << tH << " VS " << "S";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "You win!" << endl;
			++win;
		}
		else if ((tH == 'P' || tH == 'p') && (ai == 1))
		{
			cout << tH << " VS " << "P";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "Draw!" << endl;
			++tie;
		}
		else if ((tH == 'P' || tH == 'p') && (ai == 3))
		{
			cout << tH << " VS " << "R";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "You win!" << endl;
			++win;
		}
		else if ((tH == 'P' || tH == 'p') && (ai == 2))
		{
			cout << tH << " VS " << "S";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "You lose" << endl;
			++lose;
		}
		else if ((tH == 'S' || tH == 's') && (ai == 1))
		{
			cout << tH << " VS " << "P";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "You win!" << endl;
			++win;
		}
		else if ((tH == 'S' || tH == 's') && (ai == 3))
		{
			cout << tH << " VS " << "R";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "You lose" << endl;
			++lose;
		}
		else if ((tH == 'S' || tH == 's') && (ai == 2))
		{
			cout << tH << " VS " << "S";
			cout << endl << "--------------------------------------------------" << endl;
			cout << "Draw!" << endl;
			++tie;
		}
	}
	cout << "Wins: " << win << endl;
	cout << "Ties:" << tie << endl;
	cout << "Losses:" << lose << endl;



	system("pause");
	return 0;
}