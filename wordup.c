// Author: Samuel Campbell
// Date: 05/01/25
// Purpose: Project 10 - Wordup

#include <stdio.h>

#define FILENAME "mystery.txt"
#define NUM_ROWS 6
#define NUM_COLS 500

int loadFile(FILE* ifptr);
void scanWords(FILE* ifptr, int cols, char secretArray[][cols]);

void makeLowercase(int wordToMakeLowercase, int row, int cols, char array[][cols]);
void writeArrows(int selectedWord, int row, int cols, char secretArray[][cols], char guessArray[][cols], char arrowsArray[][cols]);
void capitalizeCorrectLetters(int selectedWord, int row, int cols, char secretArray[][cols], char guessArray[][cols]);

int checkForNumOfCorrectLetters(int selectedWord, int numOfCorrectLetters, int cols, char guessArray[][cols], char secretArray[][cols]);

int main() {
	FILE* fptr;
	
	char secretWord[NUM_ROWS][NUM_COLS];
	char guessWord[NUM_ROWS][NUM_COLS];
	char displayArrows[NUM_ROWS][NUM_COLS];
	
	int guess1 = 0, guess2 = 0, guess3 = 0, guess4 = 0, guess5 = 0, guess6 = 0, correctAnswerAchieved = 0;
	
	fptr = fopen(FILENAME, "r");
	
	loadFile(fptr);
	scanWords(fptr, NUM_COLS, secretWord);
	
	guess1 = 1;
	int numOfCorrectLetters = 0;
	
	printf("GUESS 1! Enter your guess: ");
	scanf("%s", guessWord[0]);
	printf("================================\n");
	
	makeLowercase(0, NUM_ROWS, NUM_COLS, guessWord);
	
	numOfCorrectLetters = 0;
	numOfCorrectLetters = checkForNumOfCorrectLetters(0, numOfCorrectLetters, NUM_COLS, guessWord, secretWord);
	
	capitalizeCorrectLetters(0, NUM_ROWS, NUM_COLS, secretWord, guessWord);
	writeArrows(0, NUM_ROWS, NUM_COLS, secretWord, guessWord, displayArrows);
	
	
	
	if (numOfCorrectLetters == 5) {
		correctAnswerAchieved = 1;
	}
	else {
		printf("%s\n", guessWord[0]);
		printf("%s\n", displayArrows[0]);
		
		guess2 = 1;
	}
	
	if (guess2) {
		
		printf("GUESS 2! Enter your guess: ");
		
		scanf("%s", guessWord[1]);
		printf("================================\n");
		makeLowercase(1, NUM_ROWS, NUM_COLS, guessWord);
		
		numOfCorrectLetters = 0;
		numOfCorrectLetters = checkForNumOfCorrectLetters(1, numOfCorrectLetters, NUM_COLS, guessWord, secretWord);
		
		capitalizeCorrectLetters(1, NUM_ROWS, NUM_COLS, secretWord, guessWord);
		writeArrows(1, NUM_ROWS, NUM_COLS, secretWord, guessWord, displayArrows);
		
		
		
		if (numOfCorrectLetters == 5) {
			correctAnswerAchieved = 1;
		}
		else {
			printf("%s\n", guessWord[0]);
			printf("%s\n", displayArrows[0]);
			
			printf("%s\n", guessWord[1]);
			printf("%s\n", displayArrows[1]);
		
			guess3 = 1;
		}
	}
	
	if (guess3) {
		
		printf("GUESS 3! Enter your guess: ");
		
		scanf("%s", guessWord[2]);
		printf("================================\n");
		makeLowercase(2, NUM_ROWS, NUM_COLS, guessWord);
		
		numOfCorrectLetters = 0;
		numOfCorrectLetters = checkForNumOfCorrectLetters(2, numOfCorrectLetters, NUM_COLS, guessWord, secretWord);
		
		capitalizeCorrectLetters(2, NUM_ROWS, NUM_COLS, secretWord, guessWord);
		writeArrows(2, NUM_ROWS, NUM_COLS, secretWord, guessWord, displayArrows);
		
		
		
		if (numOfCorrectLetters == 5) {
			correctAnswerAchieved = 1;
		}
		else {
			printf("%s\n", guessWord[0]);
			printf("%s\n", displayArrows[0]);
			
			printf("%s\n", guessWord[1]);
			printf("%s\n", displayArrows[1]);
			
			printf("%s\n", guessWord[2]);
			printf("%s\n", displayArrows[2]);
		
			guess4 = 1;
		}
	}
	
	if (guess4) {
		
		printf("GUESS 4! Enter your guess: ");
		
		scanf("%s", guessWord[3]);
		printf("================================\n");
		makeLowercase(3, NUM_ROWS, NUM_COLS, guessWord);
		
		numOfCorrectLetters = 0;
		numOfCorrectLetters = checkForNumOfCorrectLetters(3, numOfCorrectLetters, NUM_COLS, guessWord, secretWord);
		
		capitalizeCorrectLetters(3, NUM_ROWS, NUM_COLS, secretWord, guessWord);
		writeArrows(3, NUM_ROWS, NUM_COLS, secretWord, guessWord, displayArrows);
		
		
		
		if (numOfCorrectLetters == 5) {
			correctAnswerAchieved = 1;
		}
		else {
			printf("%s\n", guessWord[0]);
			printf("%s\n", displayArrows[0]);
			
			printf("%s\n", guessWord[1]);
			printf("%s\n", displayArrows[1]);
			
			printf("%s\n", guessWord[2]);
			printf("%s\n", displayArrows[2]);
			
			printf("%s\n", guessWord[3]);
			printf("%s\n", displayArrows[3]);
		
			guess5 = 1;
		}
	}
	
	if (guess5) {
		
		printf("GUESS 5! Enter your guess: ");
		scanf("%s", guessWord[4]);
		printf("================================\n");
		makeLowercase(4, NUM_ROWS, NUM_COLS, guessWord);
		
		numOfCorrectLetters = 0;
		numOfCorrectLetters = checkForNumOfCorrectLetters(4, numOfCorrectLetters, NUM_COLS, guessWord, secretWord);
		
		capitalizeCorrectLetters(4, NUM_ROWS, NUM_COLS, secretWord, guessWord);
		writeArrows(4, NUM_ROWS, NUM_COLS, secretWord, guessWord, displayArrows);
		
		
		
		if (numOfCorrectLetters == 5) {
			correctAnswerAchieved = 1;
		}
		else {
			printf("%s\n", guessWord[0]);
			printf("%s\n", displayArrows[0]);
			
			printf("%s\n", guessWord[1]);
			printf("%s\n", displayArrows[1]);
			
			printf("%s\n", guessWord[2]);
			printf("%s\n", displayArrows[2]);
			
			printf("%s\n", guessWord[3]);
			printf("%s\n", displayArrows[3]);
			
			printf("%s\n", guessWord[4]);
			printf("%s\n", displayArrows[4]);
			
			guess6 = 1;
		}
	}
	
	if (guess6) {
		
		printf("FINAL GUESS : ");
		scanf("%s", guessWord[5]);
		printf("================================\n");
		makeLowercase(5, NUM_ROWS, NUM_COLS, guessWord);
		
		numOfCorrectLetters = 0;
		numOfCorrectLetters = checkForNumOfCorrectLetters(5, numOfCorrectLetters, NUM_COLS, guessWord, secretWord);
		
		capitalizeCorrectLetters(5, NUM_ROWS, NUM_COLS, secretWord, guessWord);
		writeArrows(5, NUM_ROWS, NUM_COLS, secretWord, guessWord, displayArrows);
		
		
		
		if (numOfCorrectLetters == 5) {
			correctAnswerAchieved = 1;
		}
		else {
			printf("%s\n", guessWord[0]);
			printf("%s\n", displayArrows[0]);
			
			printf("%s\n", guessWord[1]);
			printf("%s\n", displayArrows[1]);
			
			printf("%s\n", guessWord[2]);
			printf("%s\n", displayArrows[2]);
			
			printf("%s\n", guessWord[3]);
			printf("%s\n", displayArrows[3]);
			
			printf("%s\n", guessWord[4]);
			printf("%s\n", displayArrows[4]);
			
			printf("%s\n", guessWord[5]);
			printf("%s\n", displayArrows[5]);
			
			printf("You lost, better luck next time!\n");
		}
	}
	
	if (correctAnswerAchieved == 1) {
		if (guess1 == 1 && guess2 == 0) {
			printf("                %s\n", guessWord[0]);
			printf("        You won in 1 guess!\n");
			printf("                GOATED!\n");
		} else if (guess2 == 1 && guess3 == 0) {
			printf("                %s\n", guessWord[1]);
			printf("        You won in 2 guesses!\n");
			printf("                Amazing!\n");
		} else if (guess3 == 1 && guess4 == 0) {
			printf("                %s\n", guessWord[2]);
			printf("        You won in 3 guesses!\n");
			printf("                Amazing!\n");
		} else if (guess4 == 1 && guess5 == 0) {
			printf("                %s\n", guessWord[3]);
			printf("        You won in 4 guesses!\n");
			printf("                Nice!\n");
		} else if (guess5 == 1 && guess6 == 0) {
			printf("                %s\n", guessWord[4]);
			printf("        You won in 5 guesses!\n");
			printf("                Nice!\n");
		} if (guess6 == 1) {
			printf("                %s\n", guessWord[5]);
			printf("        You won in 6 guesses!\n");
		}
	
	}
	
	fclose(fptr);

	return 0;
}


void makeLowercase(int wordToMakeLowercase, int row, int cols, char array[][cols]) {
	for (int i = 0; array[wordToMakeLowercase][i] != '\0'; i++) {
		if (array[wordToMakeLowercase][i] >= 'A' && array[wordToMakeLowercase][i] <= 'Z') {
			array[wordToMakeLowercase][i] = array[wordToMakeLowercase][i] + 32;
		}
	}

}

void writeArrows(int selectedRow, int row, int cols, char secretArray[][cols], char guessArray[][cols], char arrowsArray[][cols]) {
	for (int j = 0; guessArray[selectedRow][j] != '\0'; j++) {
		for (int i = 0; secretArray[0][i] != '\0'; i++) {
			if (guessArray[selectedRow][j] == secretArray[0][i]) {
				arrowsArray[selectedRow][j] = '^';
				break;
			}
			else {
				arrowsArray[selectedRow][j] = ' ';
			}
			
		}
	
	}
}

void capitalizeCorrectLetters(int selectedWord, int row, int cols, char secretArray[][cols], char guessArray[][cols]) {
	for (int i = 0; guessArray[selectedWord][i] != '\0'; i++) {
		if (guessArray[selectedWord][i] == secretArray[0][i]) {
			guessArray[selectedWord][i] = guessArray[selectedWord][i] - 32;
		}
	
	}
}

int checkForNumOfCorrectLetters(int selectedWord, int numOfCorrectLetters, int cols, char guessArray[][cols], char secretArray[][cols]) {
	for (int i = 0; guessArray[selectedWord][i] != '\0'; i++) {
			if (guessArray[selectedWord][i] == secretArray[0][i]) {
				numOfCorrectLetters++;
			}
		
		}

	return numOfCorrectLetters;
}

int loadFile(FILE* ifptr) {
	if (ifptr == NULL) {
		printf("File could not be accessed. Goodbye.\n");
		
		return 0;
	}
}

void scanWords(FILE* ifptr, int cols, char secretArray[][cols]) {
	int count = 0;

	while(fscanf(ifptr, "%s", secretArray[count]) == 1) {
		count++;
	}
}
