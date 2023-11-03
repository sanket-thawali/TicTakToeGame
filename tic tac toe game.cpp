#include<conio.h>
#include <iostream>

using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


void board()
{
    system("cls");
    cout<<"\t\t\t\t-------------------------------------------------\n";
    cout<<"\t\t\t\t|                                               |\n";
    cout << "\t\t\t\t|\t\tTic Tac Toe Game                |\n";
     cout<<"\t\t\t\t|                                               |\n";
     cout<<"\t\t\t\t-------------------------------------------------\n";
     cout<<"\n\n\n\n\n";
     cout<<"Let's play a Tic Tac Toe Game!!!\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
     
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}


int main()
{

	system("cls");
	system("Color f0");
	
	int player = 1,i,choice;
	
	while(true){
    char mark;
    
   do
    {
    	
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    cout<<"\n\n";
    cout<<"****************"<<endl;
    if(i==1)

        cout<<"==>\a Congratulations!!! Player "<<--player<<" WIN ";
    else
        cout<<"==>\aGame DRAW\nHave a Better Luckt Next Time!!";
   
    
    cin.ignore();
    cin.get();
    cin.clear();
    char a;
    cout<<"Do you want to play again?\n";
    cin>>a;
    if(a=='y'){
     for (int i = 1; i <= 9; i++)
        {
            square[i] = '0' + i;
        }
    	
	}
	else{
		exit(1);
	}
}
    return 0;
}



