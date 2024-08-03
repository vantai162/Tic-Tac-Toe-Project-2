#include <iostream>
using namespace std;

class Board{
private:
    char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
public:
    Board();
    void PrintBoard();
    void Interaction(int,char,int&);
    bool CheckWinner(char);
};

Board::Board(){
    cout<<arr[0][0]<<"  | "<<arr[0][1]<<"  | "<<arr[0][2]<<endl;
    cout<<"___|____|___"<<endl;
    cout<<arr[1][0]<<"  | "<<arr[1][1]<<"  | "<<arr[1][2]<<endl;
    cout<<"___|____|___"<<endl;
    cout<<arr[2][0]<<"  | "<<arr[2][1]<<"  | "<<arr[2][2]<<endl;
    cout<<"   |    |    "<<endl;
}

void Board::PrintBoard(){
    cout<<arr[0][0]<<"  | "<<arr[0][1]<<"  | "<<arr[0][2]<<endl;
    cout<<"___|____|___"<<endl;
    cout<<arr[1][0]<<"  | "<<arr[1][1]<<"  | "<<arr[1][2]<<endl;
    cout<<"___|____|___"<<endl;
    cout<<arr[2][0]<<"  | "<<arr[2][1]<<"  | "<<arr[2][2]<<endl;
    cout<<"   |    |    "<<endl;
}

void Board::Interaction(int move,char player,int& moveCount){
    switch (move){
        case 1:
            if (arr[0][0] != 'X' && arr[0][0] != 'O'){
                arr[0][0] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 2:
            if (arr[0][1] != 'X' && arr[0][1] != 'O'){
                arr[0][1] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 3:
            if (arr[0][2] != 'X' && arr[0][2] != 'O'){
                arr[0][2] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 4:
            if (arr[1][0] != 'X' && arr[1][0] != 'O'){
                arr[1][0] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 5:
            if (arr[1][1] != 'X' && arr[1][1] != 'O'){
                arr[1][1] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 6:
            if (arr[1][2] != 'X' && arr[1][2] != 'O'){
                arr[1][2] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 7:
            if (arr[2][0] != 'X' && arr[2][0] != 'O'){
                arr[2][0] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 8:
            if (arr[2][1] != 'X' && arr[2][1] != 'O'){
                arr[2][1] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        case 9:
            if (arr[2][2] != 'X' && arr[2][2] != 'O'){
                arr[2][2] = player;
                moveCount++;
            }
            else
                cout<<"O trong da dien. Thu lai vao luot sau!"<<endl;
            break;
        default:
            cout<<"Input khong hop le. Thu lai vao luot sau!"<<endl;
    }
}

bool Board::CheckWinner(char player){
    if (arr[0][0] == player && arr[0][1] == player && arr[0][2] == player)
        return true;
    if (arr[1][0] == player && arr[1][1] == player && arr[1][2] == player)
        return true;
    if (arr[2][0] == player && arr[2][1] == player && arr[2][2] == player)
        return true;
    if (arr[0][0] == player && arr[1][0] == player && arr[2][0] == player)
        return true;
    if (arr[0][1] == player && arr[1][1] == player && arr[2][1] == player)
        return true;
    if (arr[0][2] == player && arr[1][2] == player && arr[2][2] == player)
        return true;
    if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player)
        return true;
    if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player)
        return true;
    return false;
}

int main(){
    Board board;
    int moveCount = 0;
    int move;
    char player1 = 'X';
    char player2 = 'O';
    while (true){
        cout<<"Luot cua nguoi choi A(Chu X): "<<endl;
        cout<<"Chon o muon di:(Tu 1->9): "<<endl;
        cin>>move;
        board.Interaction(move,player1,moveCount);
        board.PrintBoard();
        if (board.CheckWinner(player1)){
            cout<<"Nguoi choi A chien thang!!!"<<endl;
            return 0;
        }
        if (moveCount == 9){
            cout<<"Ca hai nguoi choi hoa nhau!!!"<<endl;
            return 0;
        }
        cout<<"Luot cua nguoi choi B(Chu O): "<<endl;
        cout<<"Chon o muon di:(Tu 1->9): "<<endl;
        cin>>move;
        board.Interaction(move,player2,moveCount);
        board.PrintBoard();
        if (board.CheckWinner(player2)){
            cout<<"Nguoi choi B chien thang!!!"<<endl;
            return 0;
        }
        if (moveCount == 9){
            cout<<"Ca hai nguoi choi hoa nhau!!!"<<endl;
            return 0;
        }
    }
    return 0;
}