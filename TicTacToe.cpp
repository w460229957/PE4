#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

struct Board
{
    int arr_[3][3];
};

Board CreateBoard(){
    Board b1;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            /* code */
            b1.arr_[i][j] = 0;
        }
        
    }
    return b1;
}

void DisplayBoard(Board board){
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout<<"-----------"<<endl;
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cout<<"||";
            if (board.arr_[i][j] == 0)
            {
                /* code */
                cout<<" ";
            }
            else if(board.arr_[i][j] == 1)
            {
                cout<<"O";
            }
            else if(board.arr_[i][j] == 2)
            {
                cout<<"X";
            }
        }
        cout<<"||"<<endl;
    }
    
}
vector<int> GetPlayerChoice(){
    int x;
    int y;
    vector<int> input = {0,0};
    cout<<"What is your location to play? row .(Integers, please)"<<endl;
    cin >>x;
    input[0] = x;
    cout<<"What is your location to play? Column .(Integers, please)"<<endl;
    cin >>y;
    input[1] = y;
    return input;
}

Board PlaceMarker(Board board, vector<int> inputs, int &flag){
    if (flag == 9)
    {
        cout<<"You decided to leave the game"<<endl;
        return board;
    }
    
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            if (i == inputs[0] && j == inputs[1])
            {
                if (flag == 0)
                {
                    board.arr_[i][j] = 1;
                }
                else
                {
                    board.arr_[i][j] = 2;                   
                }
            }
            
        }
        
    }
    return board;
}

int main(){
    int flag = 0;
    int turn = 0;
    vector<int> input;
    Board b1 = CreateBoard();
    while (flag != 9 && turn != 9)
    {
        if (turn % 2 == 0)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
        DisplayBoard(b1);
        input = GetPlayerChoice();
        b1 = PlaceMarker(b1, input, flag);
        turn ++;
    }
    cout<<"Game is over. The result is "<<endl;
    DisplayBoard(b1);
}
