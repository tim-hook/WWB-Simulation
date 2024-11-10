// WWBSimulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "main.h"


using namespace std;
int main()
{
	srand(time(NULL)); //Creates Random seed based on the device time
	GamePlayLoop();
   
}


int RandomDiceRoll()
{

	return rand() % 6 + 1;  //Returns random int from 1 to 6

}


void Player1Turn()
{
	diceRoll = RandomDiceRoll();
	cout<< "Player 1 Rolled a: " <<  diceRoll  << "\n";
	if (diceRoll == 5) 
	{
	cout<< "Player 1  Rolls again \n";
		
		diceRoll = RandomDiceRoll();
		if (diceRoll == 5)
		{
			cout<< "Player 1 Rolled a: " <<  diceRoll  << "\n";
			Player1.currentScore += 1;
		}
		else
		{
			cout<< "Player 1 Rolled a: " <<  diceRoll  << "\n";
			Player1.currentScore = 0;
		}
	}

	if (Player1.currentScore > Player1.highScore)
	{
		Player1.highScore = Player1.currentScore;
	}

	cout << "Player 1 is Currently at square " << Player1.currentScore << " with a high score of " << Player1.highScore << "\n";
	
}
void Player2Turn()
{
	diceRoll = RandomDiceRoll();
	cout<< "Player 2 Rolled a: " <<  diceRoll  << "\n";

	if (diceRoll == 5) 
	{
		cout<< "Player 2  Rolls again \n";
		diceRoll = RandomDiceRoll();
		if (diceRoll == 5)
		{
		cout<< "Player 2 Rolled a: " <<  diceRoll  << "\n";
			Player2.currentScore += 1;
		}
		else
		{
		cout<< "Player 2 Rolled a: " <<  diceRoll  << "\n";
			Player2.currentScore = 0;
		}
	}

	if (Player2.currentScore > Player2.highScore)
	{
		Player2.highScore = Player2.currentScore;
	}
	cout << "Player 2 is Currently at square " << Player2.currentScore << " with a high score of " << Player2.highScore << "\n";
}

void GamePlayLoop() 
{
	while (Player1.currentScore < 100 || Player2.currentScore < 100)
	{
		turnCount++;
		cout<< "Turn: " << turnCount << "\n";
		Player1Turn();
		turnCount++;
		cout<< "Turn: " << turnCount << "\n";
		Player2Turn();
	}

}

