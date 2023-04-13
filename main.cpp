#include <iostream>
#include <cstdlib>
#include <string>

#include "User.h"

using namespace std;

char GetCompInput();
char GetInitInput(char& Userinput);
char GetUserInput(char& Userinput);

int main()
{
    char Userinput;
    Userinput =  GetInitInput(Userinput);

    switch(Userinput)
    {
    /*
        case 'L':
        
        string FileName;
        cout << "Please Enter File Name" <<endl;
        cin >> FileName;
        User user;      
	      user.ListUsers(FileName);

    break; 
    */
    case 'B': 
    
    while ( Userinput != 'Q')
    {
              
	Userinput = GetUserInput(Userinput) ;
        char CompChoice = GetCompInput();

               
        cout << "Userinput:" <<Userinput << '\n'; // << ' ' << "CompChoice:" <<CompChoice<<endl;
	
          switch(Userinput)
            {
               case 'Q':
                  return 0;
               break;
            
               case 'R':
                  if(CompChoice == 'P')
                    cout << "You Lose" <<endl;
                  else if(CompChoice == 'R')
                    cout << "Tie" <<endl;
                  else 
                    cout <<"You Win" <<endl;
               // else if (CompChoice == 'R')
                   // cout << "Tie";
               break;
            
               case 'P':
                  if (CompChoice == 'S')
                    cout << "You Lose" <<endl;
                  else if(CompChoice == 'P')
                    cout <<"Tie" <<endl;
                  else 
                    cout << "You Win" <<endl;
               break;
            
               case 'S':
                  if (CompChoice == 'R')
                    cout << "You Lose" <<endl;
                  else if(CompChoice == 'S')
                    cout <<"Tie" <<endl;
                  else 
                    cout <<"You Win" <<endl;
               break;
        
           }
       
      
      }
       break;
    
    }
    //cout<<"Hello World";

   
    return 0;
}

char GetCompInput()
{
     srand (time(NULL));
    int comp = rand() % 3;
    
    switch(comp)
    {
        case 0:
            return 'R';
        break;
        
        case 1:
            return 'P';
        break;
        
        case 2:
            return 'S';
        break;
    }
    
    return 'Q';
}


char GetInitInput(char& Userinput)
{
   
    cout <<"Please Enter B or L" << '\n';
    cin >> Userinput;
        
   // cout << Userinput <<endl;
  
    if(Userinput != 'B' && Userinput != 'L')
       GetInitInput(Userinput);
  
    return Userinput;
}



char GetUserInput(char& Userinput)
{
   
    cout <<"Please Enter R, P, S, or Q " <<endl;
    cin >> Userinput;
        
   // cout << Userinput <<endl;
  
    if(Userinput != 'R' && Userinput != 'P' && Userinput != 'S' &&  Userinput != 'Q')
       GetUserInput(Userinput);
  
    return Userinput;
}




