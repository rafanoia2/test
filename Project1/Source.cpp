#include <iostream>
#include <ctime>

void guessGame();
bool compareGuess(int a, int g);

int main()
{
	guessGame();





	return 0;
}


//guess game generates numbers between 0 and 1000
// and check users guess
void guessGame()
{
	int answer{}; // randomly generated number
	int guess{}; // user.s guess
	char response{ 'y' }; //Y for continue and N for quit the game.

	srand(time(0));
	

	do {
		answer = 1 + rand() % 1000; // generates a number in range 1 to 1000
		std::cout << "I have a number between 1 and 1000."
			<< " Can you Guess my number? \n"
			<< "Please type your first guess." << std::endl << "? ";
		std::cin >> guess;
		// ask for users response to continue or not.
		while (compareGuess(answer, guess) == false)
			std::cin >> guess;
		std::cout << "\n Excelent! You guessed!\n"
			<< "Would you like to play again? (y or n)?";
		std::cin >> response;
	} while (response == 'y');
}

bool compareGuess(int a, int g)
{
	if (a == g)
		return true;

		//guess is incorrect, display hint:
	if (g < a)
		std::cout << "Too low. Try again. \n?";
	else
		std::cout << "Too Hight.Try again. \n ?";
	return false;


}