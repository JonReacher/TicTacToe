#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int a,l;
int row;
int column;
bool win_check;
bool game_continue_loop;
int valid_selection_loop;

char playAgain;
char board[3][3];

int main()
{

    do
    {

        char board[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

        cout << endl;
        cout << endl;
        cout << endl;

        cout << "Welcome to the GREATEST Tic Tac Toe game in history." << endl;
        cout << endl;


        cout << " |1  2  3|\n";
        for(int i=0; i<3; i++)
        {

            cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
        }

        do
        {
            do
            {

                valid_selection_loop=0;
                game_continue_loop=false;
                win_check=false;
                l=0;

                cout << endl;

                cout << "Player 1 (X's) enter coordinates." << endl;

                cout << endl;

                cout << "Row";

                cin >> row;

                cout << "Column";

                cin >> column;
                cout << endl;
                cout << endl;

                row--;
                column--;


                if(board[row][column] == '-')
                {

                    board[row][column] = 'X';
                    valid_selection_loop=1;

                    cout << " |1  2  3|\n";

                    for(int i=0; i<3; i++)
                    {

                        cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
                    }
                }
                else
                {
                    cout << "Pick another spot." << endl;
                    cout << endl;
                }

            }
            while(valid_selection_loop==0);

            for(a=0; a<3; a++)
            {
                if((board[a][0]==board[a][1] && board[a][1]==board[a][2] && board[a][0] != '-') || (board[0][a]==board[1][a] && board[1][a]==board[2][a] && board[0][a] != '-')
                        || (board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0] != '-') || (board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[2][0] != '-'))
                {

                    win_check=true;
                    game_continue_loop=true;

                }
            }

            if(win_check==true)
            {
                cout << "Player 1 (X's) is the winner!" << endl;
                cout << endl;
                l=1;
            }

            if((board[0][0]!= '-' && board[0][1]!= '-' && board[0][2] != '-') && (board[1][0]!= '-' && board[1][1]!= '-' && board[1][2] != '-') && (board[2][0]!= '-' && board[2][1]!= '-' && board[2][2] != '-') && (l==0))
            {

                cout << "It's a stalemate!" << endl;
                cout << endl;

                game_continue_loop=true;
            }

            //Player 2 starts here

            if(game_continue_loop==false)
            {

                valid_selection_loop=0;
                //Diagonals

                if(board[0][0]==board[1][1] && board[2][2]=='-' && valid_selection_loop==0 && board[0][0]!='-')
                {
                    board[2][2]='O';
                    valid_selection_loop=1;

                }

                if(board[1][1]==board[2][2] && board[0][0]=='-' && valid_selection_loop==0 && board[1][1]!='-')
                {
                    board[0][0]='O';
                    valid_selection_loop=1;

                }

                if(board[0][2]==board[1][1] && board[2][0]=='-' && valid_selection_loop==0 && board[0][2]!='-')
                {
                    board[2][0]='O';
                    valid_selection_loop=1;

                }

                if(board[1][1]==board[2][0] && board[0][2]=='-' && valid_selection_loop==0 && board[1][1]!='-')
                {
                    board[0][2]='O';
                    valid_selection_loop=1;

                }

                //3 rows, 1 and 2 places

                if(board[0][0]==board[0][1] && board[0][2]=='-' && valid_selection_loop==0 && board[0][0]!='-')
                {
                    board[0][2]='O';
                    valid_selection_loop=1;

                }

                if(board[1][0]==board[1][1] && board[1][2]=='-' && valid_selection_loop==0 && board[1][0]!='-')
                {
                    board[1][2]='O';
                    valid_selection_loop=1;

                }

                if(board[2][0]==board[2][1] && board[2][2]=='-' && valid_selection_loop==0 && board[2][0]!='-')
                {
                    board[2][2]='O';
                    valid_selection_loop=1;

                }

                //3 rows, 2 and 3 places

                if(board[0][1]==board[0][2] && board[0][0]=='-' && valid_selection_loop==0 && board[0][1]!='-')
                {
                    board[0][0]='O';
                    valid_selection_loop=1;

                }

                if(board[1][1]==board[1][2] && board[1][0]=='-' && valid_selection_loop==0 && board[1][1]!='-')
                {
                    board[1][0]='O';
                    valid_selection_loop=1;

                }

                if(board[2][1]==board[2][2] && board[2][0]=='-' && valid_selection_loop==0 && board[2][1]!='-')
                {
                    board[2][0]='O';
                    valid_selection_loop=1;

                }

                //3 columns, 1 and 2 places

                if(board[0][0]==board[1][0] && board[2][0]=='-' && valid_selection_loop==0 && board[0][0]!='-')
                {
                    board[2][0]='O';
                    valid_selection_loop=1;

                }

                if(board[0][1]==board[1][1] && board[2][1]=='-' && valid_selection_loop==0 && board[0][1]!='-')
                {
                    board[2][1]='O';
                    valid_selection_loop=1;


                }

                if(board[0][2]==board[1][2] && board[2][2]=='-' && valid_selection_loop==0 && board[0][2]!='-')
                {
                    board[2][2]='O';
                    valid_selection_loop=1;

                }

                //3 columns, 2 and 3 places

                if(board[1][0]==board[2][0] && board[0][0]=='-' && valid_selection_loop==0 && board[1][0]!='-')
                {
                    board[0][0]='O';
                    valid_selection_loop=1;

                }

                if(board[1][1]==board[2][1] && board[0][1]=='-' && valid_selection_loop==0 && board[1][1]!='-')
                {
                    board[0][1]='O';
                    valid_selection_loop=1;

                }

                if(board[1][2]==board[2][2] && board[0][2]=='-' && valid_selection_loop==0 && board[1][2]!='-')
                {
                    board[0][2]='O';
                    valid_selection_loop=1;

                }

                //Rows, seperated

                if(board[0][0]==board[0][2] && board[0][1]=='-' && valid_selection_loop==0 && board[0][0]!='-')
                {
                    board[0][1]='O';
                    valid_selection_loop=1;

                }

                if(board[1][0]==board[1][2] && board[1][1]=='-' && valid_selection_loop==0 && board[1][0]!='-')
                {
                    board[1][1]='O';
                    valid_selection_loop=1;

                }

                if(board[2][0]==board[2][2] && board[2][1]=='-' && valid_selection_loop==0 && board[2][0]!='-')
                {
                    board[2][1]='O';
                    valid_selection_loop=1;

                }

                //Columns, seperated

                if(board[0][0]==board[2][0] && board[1][0]=='-' && valid_selection_loop==0 && board[0][0]!='-')
                {
                    board[1][0]='O';
                    valid_selection_loop=1;

                }

                if(board[0][1]==board[2][1] && board[1][1]=='-' && valid_selection_loop==0 && board[0][1]!='-')
                {
                    board[1][1]='O';
                    valid_selection_loop=1;


                }

                if(board[0][2]==board[2][2] && board[1][2]=='-' && valid_selection_loop==0 && board[0][2]!='-')
                {
                    board[1][2]='O';
                    valid_selection_loop=1;

                }

                //Diagonals, seperated

                if(board[0][0]==board[2][2] && board[1][1]=='-' && valid_selection_loop==0 && board[0][0]!='-')
                {
                    board[1][1]='O';
                    valid_selection_loop=1;

                }

                if(board[0][2]==board[2][0] && board[1][1]=='-' && valid_selection_loop==0 && board[0][2]!='-')
                {
                    board[1][1]='O';
                    valid_selection_loop=1;

                }

                if(valid_selection_loop==0)
                {

                    while(valid_selection_loop==0)
                    {

                        srand(time(0));

                        row=(rand() % 3);

                        column=(rand() % 3);


                        if(board[row][column] == '-')
                        {

                            board[row][column] = 'O';
                            valid_selection_loop=2;

                            cout << endl;
                            cout << endl;

                            cout << " |1  2  3|\n";

                            for(int i=0; i<3; i++)
                            {

                                cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
                            }
                        }
                    }
                }


                if(valid_selection_loop==1)
                {
                    cout << endl;
                    cout << endl;

                    cout << " |1  2  3|\n";

                    for(int i=0; i<3; i++)
                    {

                        cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
                    }
                }

                for(a=0; a<3; a++)
                {
                    if((board[a][0]==board[a][1] && board[a][1]==board[a][2] && board[a][0] != '-') || (board[0][a]==board[1][a] && board[1][a]==board[2][a] && board[0][a] != '-')
                            || (board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0] != '-') || (board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[2][0] != '-'))
                    {

                        win_check=true;
                        game_continue_loop=true;

                    }
                }

                if(win_check==true)
                {
                    cout << "Computa' Man (O's) is the winner!" << endl;
                    cout << endl;
                    l=1;
                }

                if((board[0][0]!= '-' && board[0][1]!= '-' && board[0][2] != '-') && (board[1][0]!= '-' && board[1][1]!= '-' && board[1][2] != '-') && (board[2][0]!= '-' && board[2][1]!= '-' && board[2][2] != '-') && (l==0))
                {

                    cout << "It's a stalemate!" << endl;
                    cout << endl;

                    game_continue_loop=true;
                }
            }

        }
        while(game_continue_loop==false);

        cout << "Would you  like to play again? y/n" << endl;
        cin >> playAgain;
        if(playAgain=='n')
        {
            return 0;
        }

    }
    while(playAgain=='y');

}
