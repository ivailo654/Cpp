#include<iostream>
#include<string>
bool draw(int game[3][3]) {
    int n = 0;
    for (int i = 0; i < 9; i++) {
        if (game[0][i] == 0) n = 100;
    }
    if (n == 100) return false;
    return true;
}
bool win(int game[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (game[i][0] == 1 && game[i][1] == 1 && game[i][2] == 1) {
            std::cout << "\n player 1 wins!!!!!!!!!!!!! ";
            return true;
        }
        else if (game[i][0] ==2 && game[i][1] ==2 && game[i][2] == 2) {
            std::cout << "\n player 2 wins!!!!!!!!!!!!! ";
            return true;
        }
        else if (game[0][i] ==1 && game[1][i] ==1 && game[2][i] == 1) {
            std::cout << "\n player 1 wins!!!!!!!!!!!!! ";
            return true;
        }
        else if (game[0][i] ==2 && game[1][i] ==2 && game[2][i] == 2) {
            std::cout << "\n player 2 wins!!!!!!!!!!!!! ";
            return true;
    }
    }
    if (game[0][0] == 1 && game[1][1] == 1 && game[2][2] == 1) {
        std::cout << "\n player 1 wins!!!!!!!!!!!!!  ";
        return true;
    }
    else if (game[0][0] ==2 && game[1][1] ==2 && game[2][2] == 2) {
        std::cout << "\n player 2 wins!!!!!!!!!!!!! ";
        return true;
    }
    else if (game[0][2] ==1 &&  game[1][1] ==1 && game[2][0] == 1)
    {
        std::cout << "\n player 1 wins!!!!!!!!!!!!! ";
        return true;
    }
    else if (game[0][2] ==2 && game[1][1] ==2 && game[2][0] == 2)
    { std::cout << "\n player 2 wins!!!!!!!!!!!!!  ";
    return true;
}
    return false;
}
void push(int player,int row,int col,int game[3][3]) {
    if (player == 1 && game[row][col]== 0 && row < 3 && col < 3 && row>=0 && col >= 0) {
        game[row][col] = 1;
        return;
    }
    else if (player == 2 && game[row][col] == 0 && row < 3 && col < 3 && row >= 0 && col >= 0) {
        game[row][col] = 2; 
        return;
    }
    else std::cout << "error input \n";
}
void print(int game[3][3]) {
    for (int i = 0; i < 3; i++) {
        std::cout << "\n";
        for (int j = 0; j < 3; j++)
            std::cout << game[i][j] << "  ";
    }
}

int main() {
    int game[3][3];
    int col = 0, row = 0;
    memset(game, 0, sizeof game);
    do {
        
        std::cout << "\n Player 1 enter a colum and row \n";
        std::cin >> col >> row;
        push(1,row-1, col-1, game);
        print(game);
        if (win(game) == true) break;
        std::cout << "\n Player 2 enter a colum and row \n";
        std::cin >> col >> row;
        push(2, row - 1, col - 1, game);
        print(game);

    } while (win(game) == false || draw(game)==false);
    return 0;
}