#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int r;
int c;
int a;
int i;
int j;
int k;
int l;
char playAgain;
char board[3][3];

int main(){

    do{

        char board[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

        cout << endl;
        cout << endl;
        cout << endl;

        cout << "Welcome to the GREATEST Tic Tac Toe game in history." << endl;
        cout << endl;


        cout << " |1  2  3|\n";
        for(int i=0; i<3; i++){

            cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
        }

        do{
            do{

                    i=0;
                    j=0;
                    k=0;
                    l=0;

                    cout << endl;

                    cout << "Player 1 (X's) enter coordinates." << endl;

                    cout << endl;

                    cout << "Row";

                    cin >> r;

                    cout << "Column";

                    cin >> c;

                    cout << endl;
                    cout << endl;

                    r--;
                    c--;


                if(board[r][c] == '-'){

                   board[r][c] = 'X';
                   i=1;

                   cout << " |1  2  3|\n";

                    for(int i=0; i<3; i++){

                        cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
                    }
                }else{
                  cout << "Pick another spot." << endl;
                  cout << endl;
                }

                }while(i==0);

                for(a=0;a<3;a++){
                        if((board[a][0]==board[a][1] && board[a][1]==board[a][2] && board[a][0] != '-') || (board[0][a]==board[1][a] && board[1][a]==board[2][a] && board[0][a] != '-')
                           || (board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0] != '-') || (board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[2][0] != '-')){

                            k=1;
                            j=1;

                        }
                }

                if(k==1){
                            cout << "Player 1 (X's) is the winner!" << endl;
                            cout << endl;
                            l=1;
                        }

                        if((board[0][0]!= '-' && board[0][1]!= '-' && board[0][2] != '-') && (board[1][0]!= '-' && board[1][1]!= '-' && board[1][2] != '-') && (board[2][0]!= '-' && board[2][1]!= '-' && board[2][2] != '-') && (l==0)){

                                cout << "It's a stalemate!" << endl;
                                cout << endl;

                                j=1;
                        }

                //Player 2 starts here

            if(j==0){

                    i=0;
                            //Diagonals

                            if(board[0][0]==board[1][1] && board[2][2]=='-' && i==0 && board[0][0]!='-')
                            {
                                board[2][2]='O';
                                i=1;

                            }

                            if(board[1][1]==board[2][2] && board[0][0]=='-' && i==0 && board[1][1]!='-')
                            {
                                board[0][0]='O';
                                i=1;

                            }

                            if(board[0][2]==board[1][1] && board[2][0]=='-' && i==0 && board[0][2]!='-')
                            {
                                board[2][0]='O';
                                i=1;

                            }

                            if(board[1][1]==board[2][0] && board[0][2]=='-' && i==0 && board[1][1]!='-')
                            {
                                board[0][2]='O';
                                i=1;

                            }

                            //3 rows, 1 and 2 places

                            if(board[0][0]==board[0][1] && board[0][2]=='-' && i==0 && board[0][0]!='-')
                            {
                                board[0][2]='O';
                                i=1;

                            }

                            if(board[1][0]==board[1][1] && board[1][2]=='-' && i==0 && board[1][0]!='-')
                            {
                                board[1][2]='O';
                                i=1;

                            }

                            if(board[2][0]==board[2][1] && board[2][2]=='-' && i==0 && board[2][0]!='-')
                            {
                                board[2][2]='O';
                                i=1;

                            }

                            //3 rows, 2 and 3 places

                            if(board[0][1]==board[0][2] && board[0][0]=='-' && i==0 && board[0][1]!='-')
                            {
                                board[0][0]='O';
                                i=1;

                            }

                            if(board[1][1]==board[1][2] && board[1][0]=='-' && i==0 && board[1][1]!='-')
                            {
                                board[1][0]='O';
                                i=1;

                            }

                            if(board[2][1]==board[2][2] && board[2][0]=='-' && i==0 && board[2][1]!='-')
                            {
                                board[2][0]='O';
                                i=1;

                            }

                            //3 columns, 1 and 2 places

                            if(board[0][0]==board[1][0] && board[2][0]=='-' && i==0 && board[0][0]!='-')
                            {
                                board[2][0]='O';
                                i=1;

                            }

                            if(board[0][1]==board[1][1] && board[2][1]=='-' && i==0 && board[0][1]!='-')
                            {
                                board[2][1]='O';
                                i=1;


                            }

                            if(board[0][2]==board[1][2] && board[2][2]=='-' && i==0 && board[0][2]!='-')
                            {
                                board[2][2]='O';
                                i=1;

                            }

                            //3 columns, 2 and 3 places

                            if(board[1][0]==board[2][0] && board[0][0]=='-' && i==0 && board[1][0]!='-')
                            {
                                board[0][0]='O';
                                i=1;

                            }

                            if(board[1][1]==board[2][1] && board[0][1]=='-' && i==0 && board[1][1]!='-')
                            {
                                board[0][1]='O';
                                i=1;

                            }

                            if(board[1][2]==board[2][2] && board[0][2]=='-' && i==0 && board[1][2]!='-')
                            {
                                board[0][2]='O';
                                i=1;

                            }

                            //Rows, seperated

                             if(board[0][0]==board[0][2] && board[0][1]=='-' && i==0 && board[0][0]!='-')
                            {
                                board[0][1]='O';
                                i=1;

                            }

                            if(board[1][0]==board[1][2] && board[1][1]=='-' && i==0 && board[1][0]!='-')
                            {
                                board[1][1]='O';
                                i=1;

                            }

                            if(board[2][0]==board[2][2] && board[2][1]=='-' && i==0 && board[2][0]!='-')
                            {
                                board[2][1]='O';
                                i=1;

                            }

                            //Columns, seperated

                            if(board[0][0]==board[2][0] && board[1][0]=='-' && i==0 && board[0][0]!='-')
                            {
                                board[1][0]='O';
                                i=1;

                            }

                            if(board[0][1]==board[2][1] && board[1][1]=='-' && i==0 && board[0][1]!='-')
                            {
                                board[1][1]='O';
                                i=1;


                            }

                            if(board[0][2]==board[2][2] && board[1][2]=='-' && i==0 && board[0][2]!='-')
                            {
                                board[1][2]='O';
                                i=1;

                            }

                            //Diagonals, seperated

                            if(board[0][0]==board[2][2] && board[1][1]=='-' && i==0 && board[0][0]!='-')
                            {
                                board[1][1]='O';
                                i=1;

                            }

                            if(board[0][2]==board[2][0] && board[1][1]=='-' && i==0 && board[0][2]!='-')
                            {
                                board[1][1]='O';
                                i=1;

                            }

                        if(i==0)
                        {

                                    while(i==0)
                                    {

                                            srand(time(0));

                                            r=(rand() % 3);

                                            c=(rand() % 3);


                                            if(board[r][c] == '-')
                                            {

                                               board[r][c] = 'O';
                                               i=2;

                                               cout << endl;
                                               cout << endl;

                                               cout << " |1  2  3|\n";

                                                for(int i=0; i<3; i++){

                                                    cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
                                                }
                                            }
                                    }
                        }


                    if(i==1)
                    {
                        cout << endl;
                        cout << endl;

                        cout << " |1  2  3|\n";

                        for(int i=0; i<3; i++)
                        {

                            cout << i+1 << "|" << board[i][0] << "  " << board[i][1] << "  " << board[i][2] << "|" << endl;
                        }
                    }

                        for(a=0;a<3;a++){
                            if((board[a][0]==board[a][1] && board[a][1]==board[a][2] && board[a][0] != '-') || (board[0][a]==board[1][a] && board[1][a]==board[2][a] && board[0][a] != '-')
                           || (board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0] != '-') || (board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[2][0] != '-')){

                                    k=1;
                                    j=1;

                                }
                        }

                        if(k==1){
                            cout << "Computa' Man (O's) is the winner!" << endl;
                            cout << endl;
                            l=1;
                        }

                        if((board[0][0]!= '-' && board[0][1]!= '-' && board[0][2] != '-') && (board[1][0]!= '-' && board[1][1]!= '-' && board[1][2] != '-') && (board[2][0]!= '-' && board[2][1]!= '-' && board[2][2] != '-') && (l==0)){

                                cout << "It's a stalemate!" << endl;
                                cout << endl;

                                j=1;
                        }
            }

        }while(j==0);

        cout << "Would you  like to play again? y/n" << endl;
        cin >> playAgain;
        if(playAgain=='n'){
            return 0;
        }

    }while(playAgain=='y');

}
