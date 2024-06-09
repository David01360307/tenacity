#include <iostream>
#include <ctime>
#include <cstdlib>

void drawBoard(const char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer, char player);
int ai(const char *spaces, char player);
bool checkWin(const char *spaces, char player, char computer);
bool checkTie(const char *spaces);

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'O';
    char computer = 'X';
    bool running = true;

    drawBoard(spaces);
    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWin(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer, player);
        drawBoard(spaces);
        if (checkWin(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }
    }

    return 0;
}

void drawBoard(const char *spaces) {
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number;

    while (true) {
        std::cout << "Choose a number (1-9): ";
        std::cin >> number;
        number--;
        if (number >= 0 && number < 9 && spaces[number] == ' ') {
            spaces[number] = player;
            break;
        } else {
            std::cout << "Invalid move.\n";
        }
    }
}

void computerMove(char *spaces, char computer, char player) {
    int number;
    int temp = ai(spaces, player);
    srand(static_cast<unsigned int>(time(0)));

    if (temp != -1) {
        std::cout << "You wish!\n";
        spaces[temp] = computer;
    } else {
        while (true) {
            number = rand() % 9;
            if (spaces[number] == ' ') {
                spaces[number] = computer;
                break;
            }
        }
    }
}

bool checkWin(const char *spaces, char player, char computer) {
    const int winningPatterns[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };

    for (const auto& pattern : winningPatterns) {
        if (spaces[pattern[0]] != ' ' && spaces[pattern[0]] == spaces[pattern[1]] && spaces[pattern[1]] == spaces[pattern[2]]) {
            if (spaces[pattern[0]] == player) {
                std::cout << "YOU WIN!\n";
            } else {
                std::cout << "YOU LOSE!\n";
            }
            return true;
        }
    }
    return false;
}

bool checkTie(const char *spaces) {
    for (int i = 0; i < 9; ++i) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "tie!\n";
    return true;
}

int ai(const char *spaces, char player) {
    const int winningPatterns[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };

    for (const auto& pattern : winningPatterns) {
        int countPlayer = 0;
        int countEmpty = 0;
        int emptyIndex = -1;
        for (int i = 0; i < 3; ++i) {
            if (spaces[pattern[i]] == player) {
                countPlayer++;
            } else if (spaces[pattern[i]] == ' ') {
                countEmpty++;
                emptyIndex = pattern[i];
            }
        }
        if (countPlayer == 2 && countEmpty == 1) {
            return emptyIndex;
        }
    }
    return -1;
}