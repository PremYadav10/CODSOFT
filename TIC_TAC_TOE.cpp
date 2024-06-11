#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;



void show_structure();
int show_result();
int computer_turn();
int player_1_turn();     // player 1 = x
int player_2_turn();       // player 2 = o
int computer_vs_player();
int player_vs_player();
int check_winner();
int count_board(char symbol);
int assign_array();


int main()
{
    int choice,want;
    system("cls");
    show_structure();
    cout<<" \n CHOOSE THE MODE \n"<<"1. COMPUTER VS PLAYER \n"<<"2. PLAYER VS PLAYER \n";
    cin>>choice;
    

    switch (choice)
    {
    case 1:
        
        computer_vs_player();
        break;
    
    case 2:
        player_vs_player();
        break;

    default:
        cout<<"SELECT A VALID CHOICE"<<endl;
        break;
    }

    cout<<"\n WHAT YOU WANT \n 1. PLAY CONTINUE \n 2. EXIT GAME \n";
    cin>>want;
    if(want == 1)
    {
        assign_array();
        main();
    }
    else{
        return 0;
    }

}

 char arr[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

void show_structure()
{
    cout<<"WELCOME IN TIC TAC TOE GAME"<<endl<<endl;

    cout<<"       |       |       "<<endl;
    cout<<"   1   |   2   |   3   "<<endl;
    cout<<"_______|_______|_______"<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"   4   |   5   |   6   "<<endl;
    cout<<"_______|_______|_______"<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"   7   |   8   |   9   "<<endl;
    cout<<"       |       |       "<<endl;

}

int show_result()
{
     cout<<"       |       |       "<<endl;
    cout<<"   "<<arr[0]<<"   |   "<<arr[1]<<"   |   "<<arr[2]<<"   "<<endl;
    cout<<"_______|_______|_______"<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"   "<<arr[3]<<"   |   "<<arr[4]<<"   |   "<<arr[5]<<"   "<<endl;
    cout<<"_______|_______|_______"<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"   "<<arr[6]<<"   |   "<<arr[7]<<"   |   "<<arr[8]<<"   "<<endl;
    cout<<"       |       |       "<<endl;
}

int assign_array()
{
    for (int i = 0; i < 9; i++)
    {
        arr[i] = ' ';
    }
    
}

int count_board(char symbol)
{
    int total = 0;
    for(int i=0; i < 9; i++)
    {
        if(arr[i] == symbol)
           total+=1;
    }
    return total;
}

int computer_turn()
{
    int choice;
    srand(time(0));
    do
    {
       choice = 1+(rand()%9); 
    } while (arr[choice] != ' ');
         arr[choice]='o';
}

int player_1_turn()
{
while (true)
 {
    int choice;
    cout<<"seelect your position : ";
    cin>>choice;
    choice--;
    if(choice < 0 || choice > 8)
    {
        cout<<"PLEASE SELECT YOUR CHOICE FROM (1-9)"<<endl;
    }
    else if(arr[choice] != ' ')
    {
        cout<<"PLEASE SELECT A EMPTY POSITION "<<endl;
    }
    else
    {
        arr[choice] = 'x';
        break;
    }
 }
}

int player_2_turn()
{
  while (true)
 {
    int choice;
    cout<<"seelect your position : ";
    cin>>choice;
    choice--;
    if(choice < 0 || choice > 8)
    {
        cout<<"PLEASE SELECT YOUR CHOICE FROM (1-9)"<<endl;
    }
    else if(arr[choice] != ' ')
    {
        cout<<"PLEASE SELECT A EMPTY POSITION "<<endl;
    }
    else
    {
        arr[choice] = 'o';
        break;
    }
 }
}

int check_winner()
{
    // check winner in horizontal / row
    if(arr[0] == arr[1] && arr[1] == arr[2]  && arr[0] != ' ')
        return arr[0];

    if(arr[3] == arr[4] && arr[4] == arr[5]  && arr[3] != ' ')
        return arr[3];

    if(arr[6] == arr[7] && arr[7] == arr[8]  && arr[6] != ' ')
        return arr[6];  

    // check winner in vertical / column
    if(arr[0] == arr[3] && arr[3] == arr[6]  && arr[0] != ' ')
        return arr[0];

    if(arr[1] == arr[4] && arr[4] == arr[7]  && arr[1] != ' ')
        return arr[1];

    if(arr[2] == arr[5] && arr[5] == arr[8]  && arr[2] != ' ')
        return arr[2]; 

    // check winner in  diagonal
    if(arr[0] == arr[4] && arr[4] == arr[8]  && arr[0] != ' ')
        return arr[0];

    if(arr[2] == arr[4] && arr[4] == arr[6]  && arr[2] != ' ')
        return arr[2];

    if(count_board('x') + count_board('o') < 9)
        return 'c';
    else
        return 'd';
        
}

int computer_vs_player()
{
    string player_name;
    cout<<" ENTER YOUR NAME : ";
    cin>>player_name;
    while (true)
    {
        system("cls");
        show_result();
        if(count_board('x') == count_board('o'))
        {
            cout<<player_name<<"'s Turn "<<endl;
            player_1_turn();
        }
        else{
            computer_turn();
        }

       char winner = check_winner();
       if (winner == 'x')
       {
        system("cls");
        show_result();
        cout<<player_name<<" Won The Game "<<endl;
        break;
       }
        else if(winner == 'o')
        {
        system("cls");
        show_result();
        cout<<"computer Won The Game "<<endl;
        break;  
        }
        else if(winner == 'd')
        {
            cout<<"Game Is Draw "<<endl;
            break;
        }

        
    }
       

}
    


int player_vs_player()
    {
       string player_1_name,player_2_name;
       cout<<"ENTER PLAYER 1 NAME :";
       cin>>player_1_name;
       cout<<"\n ENTER PLAYER 2 NAME :";
       cin>>player_2_name;

       while(true)
       {
        system("cls");
        show_result();
        if(count_board('x') == count_board('o'))
        {
            cout<<player_1_name<<"'s Turn "<<endl;
            player_1_turn();
        }
        else
        {
            cout<<player_2_name<<"'s Turn "<<endl;
            player_2_turn();
        }

        char winner = check_winner();

        if (winner == 'x')
       {
        system("cls");
        show_result();
        cout<<player_1_name<<" Won The Game "<<endl;
        break;
       }
        else if(winner == 'o')
        {
        system("cls");
        show_result();
        cout<<player_2_name<<" Won The Game "<<endl;
        break;  
        }
        else if(winner == 'd')
        {
            cout<<"Game Is Draw "<<endl;
            break;
        }
       }
    }