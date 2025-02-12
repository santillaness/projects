// Lab3.cpp   
// for CS 141 lab 3	

#include <iostream>
using namespace std;


char p1,p2,p3,p4,p5,p6,p7,p8,p9;

// Running display board should print out the board and the characters denoting each square.
// (Which would display either the letter for the square, or the X or O that has moved there.)
// Running the code after displayBoard() function for the first time should be like:
//   -------
//   |a|b|c|     
//   -------
//   |d|e|f|   
//   -------
//   |g|h|i|   
//   -------
// (With no spaces before the board. The board is made of letters, vertical lines, and dashes: | and - )
void displayBoard(){
    cout << string(7, '-') << endl;
    cout << "|" << p1 << "|" << p2 << "|" << p3 << "|" << endl;
    cout << string(7, '-') << endl;
    cout << "|" << p4 << "|" << p5 << "|" << p6 << "|" << endl;
    cout << string(7, '-') << endl;
    cout << "|" << p7 << "|" << p8 << "|" << p9 << "|" << endl;
    cout << string(7, '-') << endl;
   
}

// This function allows a move to a specific square. For the initial move, if the square is 'b' and player is 'X'
// after this method is called, the board would look like this:
//   -------
//   |a|X|c|     
//   -------
//   |d|e|f|   
//   -------
//   |g|h|i|   
//   -------
void moveToSquare(char square, char player) {
    switch (square) {
        case 'a':
            if (player == 'X') {
                p1 = 'X';
            }
            else {
                p1 = 'O';
            }
            break;
        case 'b':
            if (player == 'X') {
                p2 = 'X';
            }
            else {
                p2 = 'O';
            }
            break;
        case 'c':
            if (player == 'X') {
                p3 = 'X';
            }
            else {
                p3 = 'O';
            }
            break;
        case 'd':
            if (player == 'X') {
                p4 = 'X';
            }
            else {
                p4 = 'O';
            }
            break;
        case 'e':
            if (player == 'X') {
                p5 = 'X';
            }
            else {
                p5 = 'O';
            }
            break;
        case 'f':
            if (player == 'X') {
                p6 = 'X';
            }
            else {
                p6 = 'O';
            }
            break;
        case 'g':
            if (player == 'X') {
                p7 = 'X';
            }
            else {
                p7 = 'O';
            }
            break;
        case 'h':
            if (player == 'X') {
                p8 = 'X';
            }
            else {
                p8 = 'O';
            }
            break;
        case 'i':
            if (player == 'X') {
                p9 = 'X';
            }
            else {
                p9 = 'O';
            }
            break;
    }

}

// Outputs "Congratulations you won!" if one of the players wins
// (all three squares in one row are the same, 
// all three squares in a column are the same,
// or the three squares on a diagonal are the same)
void checkForWin() {
    if (p1 == 'X' && p2 == 'X' && p3 == 'X') {
        cout << "Congratulations you won!" << endl;
    }
    if (p1 == 'O' && p2 == 'O' && p3 == 'O') {
        cout << "Congratulations you won!" << endl;
    }  
    if (p4 == 'X' && p5 == 'X' && p6 == 'X') {
        cout << "Congratulations you won!" << endl;
    }
    if (p4 == 'O' && p5 == 'O' && p6 == 'O') {
        cout << "Congratulations you won!" << endl;
    }
    if (p7 == 'X' && p8 == 'X' && p9 == 'X') {
        cout << "Congratulations you won!" << endl;
    }
    if (p7 == 'O' && p8 == 'O' && p9 == 'O') {
        cout << "Congratulations you won!" << endl;
    }
    if (p1 == 'X' && p4 == 'X' && p7 == 'X') {
        cout << "Congratulations you won!" << endl;
    }
    if (p1 == 'O' && p4 == 'O' && p7 == 'O') {
        cout << "Congratulations you won!" << endl;
    }
    if (p2 == 'X' && p5 == 'X' && p8 == 'X') {
        cout << "Congratulations you won!" << endl;
    }   
    if (p2 == 'O' && p5 == 'O' && p8 == 'O') {
        cout << "Congratulations you won!" << endl;
    }
    if (p3 == 'X' && p6 == 'X' && p9 == 'X') {
        cout << "Congratulations you won!" << endl;
    }   
    if (p3 == 'O' && p6 == 'O' && p9 == 'O') {
        cout << "Congratulations you won!" << endl;
    }  
    if (p1 == 'X' && p5 == 'X' && p9 == 'X') {
        cout << "Congratulations you won!" << endl;
    }
    if (p1 == 'O' && p5 == 'O' && p9 == 'O') {
        cout << "Congratulations you won!" << endl;
    }
    if (p3 == 'X' && p5 == 'X' && p7 == 'X') {
        cout << "Congratulations you won!" << endl;
    }
    if (p3 == 'O' && p5 == 'O' && p7 == 'O') {
        cout << "Congratulations you won!" << endl;
    } 
}

int main()
{
	// Initialize the board
	p1='a',p2='b',p3='c',p4='d',p5='e',p6='f',p7='g',p8='h',p9='i';
	char currentPlayer = 'X';
	char square = ' ';

    displayBoard();
	
	cout << "Player " << currentPlayer << ", enter the square you would like to play in (or q to quit): ";
	cin >> square;

    while (square != 'q') {
        moveToSquare(square, currentPlayer);

        // Switch the current player
        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }

        displayBoard();
        checkForWin();

        cout << "Player " << currentPlayer << ", enter the square you would like to play in (or q to quit): ";
        cin >> square;
    }
	
	cout << "Exiting program..." << endl;
	return 1;

}// end main()