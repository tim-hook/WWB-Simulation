#pragma once
#include <stdlib.h> 
#include <time.h>  
#include <iostream>
struct  Player
{
	unsigned int highScore;
	unsigned int currentScore;


};


unsigned int diceRoll;
unsigned int turnCount;
Player Player1;
Player Player2;
int RandomDiceRoll();
void GamePlayLoop();
void Player1Turn();
void Player2Turn();
