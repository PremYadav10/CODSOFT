#include<iostream>
#include<stdlib.h>
using namespace std;

void show_calculator()
{
    cout<<"-----------------------------------------------"<<endl;
    cout<<"|----           ARITHMETIC                ----|"<<endl;
    cout<<"|----            CALCULATOR               ----|"<<endl;
    cout<<"|----                                     ----|"<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|     e    |     c    |    /     |      +     |"<<endl;
    cout<<"|    EXIT  |   CLEAR  |   DIV    |     ADD    |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|          |          |          |      -     |"<<endl;
    cout<<"|     1    |     2    |     3    |     SUB    |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|          |          |          |      *     |"<<endl;
    cout<<"|     4    |     5    |     6    |     MUL    |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|     7    |     8    |     9    |      0     |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"-----------------------------------------------"<<endl;
};



int show_answer(double answer)
{
    cout<<"-----------------------------------------------"<<endl;
    cout<<"|----  CURRENT          |                      "<<endl;
    cout<<"|----    OUTPUT:-       |       "<<answer       <<endl;
    cout<<"|----                   |                      "<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|     e    |     c    |     /    |      +     |"<<endl;
    cout<<"|    EXIT  |   CLEAR  |    DIV   |     ADD    |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|          |          |          |      -     |"<<endl;
    cout<<"|     1    |     2    |     3    |     SUB    |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|          |          |          |      *     |"<<endl;
    cout<<"|     4    |     5    |     6    |     MUL    |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|---------------------------------------------|"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"|     7    |     8    |     9    |      0     |"<<endl;
    cout<<"|          |          |          |            |"<<endl;
    cout<<"-----------------------------------------------"<<endl;
};


int main()
{   system("cls");
    char opr;
    double num1,num2;
    double value;
    double convert=1;
 
    show_calculator();

   

    while( opr != 'e' )
{ 
        if( convert == 1 )
  {
   
       cout<<"ENTER OPR : "<<endl;
       cin>>opr;

    switch (opr)
    {
    case '+':
        cout<<"ENTER NUM 1 : "<<endl;
        cin>>num1;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1+num2;
        break;

    case '-':
        cout<<"ENTER NUM 1 : "<<endl;
        cin>>num1;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1-num2;
        break;

    case '*':
        cout<<"ENTER NUM 1 : "<<endl;
        cin>>num1;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1*num2;
        break;

    case '/':
        cout<<"ENTER NUM 1 : "<<endl;
        cin>>num1;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1/num2;
        break;

    case 'c':
        value = 0;
        convert=1;
        break;

    }

    system("cls");

    show_answer(value);

    convert = 0;
   
    }
  else {
     

    cout<<"ENTER OPR : "<<endl;
    cin>>opr;

    // while( opr != 'e' )
    // {
    switch (opr)
    {
    case '+':
        num1 = value;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1+num2;
        break;

    case '-':
        num1 = value;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1-num2;
        break;

    case '*':
        num1 = value;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1*num2;
        break;

    case '/':
        num1 = value;
        cout<<"ENTER NUM 2 : "<<endl;
        cin>>num2;
        value=num1/num2;
        break;

    case 'c':
        value=0;
        convert=1;
        break;

    }
    system("cls");
    show_answer(value);
   
    }
  
}
    return 0;
}