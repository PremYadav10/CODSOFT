#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
     int value;
     int num;
     int option;
     
  srand(time(0));
  int random = 1+(rand()%100);  

  cout<<" \t WELCOME IN NUMBER GUESSING GAME \n IN THE GAME - LEVEL OF DIFFICULTY ARE GIVEN YOU CAN SELECT ANY ONE AS PER YOUR CHOICE \n AFTER SELECT YOU HAVE TO GUESS THE NUMBER - LET'S START THE GAME"<<endl;  
  cout<<"THERE ARE THREE LEVEL  \n 1.EASY \t 2.MEDIUM \t 3.HARD \nCHOOSE ANY ONE  :  ";        
  cin>>value;
  
  cout<<endl;

  switch (value)
  {

  case 1:
    cout<<" IN THIS LEVEL YOU CAN GUESS 10 TIMES "<<endl;
    value=10;
    break;
  
  case 2:
    cout<<" IN THIS LEVEL YOU CAN GUESS 6 TIMES "<<endl;
    value=6;
    break;

    case 3:
    cout<<" IN THIS LEVEL YOU CAN GUESS 3 TIMES "<<endl;
    value=3;
    break;

  default: 
    cout<<"INVALID OPTION \nENTER A VALID OPTION"<<endl;
    value=0;
    break;

  }

 if(value>0)
 {
   cout<<"GUESS THE NUMBER BETWEEN 1 TO 100 "<<endl;  
   cin>>num;
 }

  for(int i=1;i<=value;i++)
  { 

  if(num == random)
    {
        cout<<" YEAHH YOU WIN"<<endl;
        break;
    }

  else if(0 < num && num <=100 && num > random)
  { 
    cout<<"WRONG \n HINT FOR YOU :: THE GUESS IS TOO HIGH "<<endl;
  }

  else if(0 < num && num <=100 && num < random)
  { 
    cout<<"WRONG \n HINT FOR YOU :: THE GUESS IS TOO LOW "<<endl;
  }

  else
     {
        cout<<"ENTER A VALID NUMBER :: IN RANGE 1-100"<<endl;
     }

    if(i<value)
    {
     cout<<"RE-ENTER  :  ";
     cin>>num;
    }
  }

   if(value>0)
   {
   if(num != random)
   {
    cout<<"\n OOPS YOU ARE LOSE \n BETTER LUCK NEXT TIME \n";
   }
   cout<<" THANKS FOR PLAY GAME \n\n"; 
   }

  cout<<" WHAT YOU WANT \n 1.CONTINUE PLAY GAME \t 2.EXIT \n ";
  cin>>option;

  if(option == 1)
  {
    main(); 
  } 
  else
  {
    return 0;
  } 
}


