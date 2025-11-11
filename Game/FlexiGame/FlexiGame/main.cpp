#include <iostream>
#include "FlexiEngine/Engine.h"
#include "FlexiEngine/Logger.h"

using namespace std;

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void displayBoard() {
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "\n";
}

bool checkWin() {
    // Zeilen
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;

    // Spalten
    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;

    // Diagonalen
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void startGame() {
    char player = 'X';
    int choice;
    int row, col;

    while (true) {
        displayBoard();
        cout << "Spieler " << player << ", waehle ein Feld (1-9): ";
        cin >> choice;

        if (choice < 1 || choice > 9) {
            cout << "Ungueltige Eingabe! Versuche es erneut.\n";
            continue;
        }

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Feld besetzt! Waehle ein anderes.\n";
            continue;
        }

        board[row][col] = player;

        if (checkWin()) {
            displayBoard();
            cout << "Spieler " << player << " gewinnt!\n";
            break;
        }

        if (checkDraw()) {
            displayBoard();
            cout << "Unentschieden!\n";
            break;
        }

        // Spieler wechseln
        player = (player == 'X') ? 'O' : 'X';
    }
}

int main() {

    Logger::Log("Starting game...", LogLevel::Info);

    EngineStart(); // Aufruf der Engine-Funktion

    //startGame();

    Logger::Log("Game finished!", LogLevel::Info);

    return 0;
}