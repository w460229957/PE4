#include <cstdio>
#include <iostream>

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
                cout<<"X";
            }
            else if(board.arr_[i][j] == 2)
            {
                cout<<"O";
            }
        }
        cout<<"||"<<endl;
    }
    
}

int main(){
    Board b1 = CreateBoard();
    DisplayBoard(b1);
}