#include <iostream>
#include <cstdlib>
#include <string>

#include "User.h"

using namespace std;

char GetCompInput();
char GetLoginInput(char& UserInput);
char GetInitInput(char& Userinput);
char GetPlayInput(char& Userinput);

int main()
{
    char UserInput;
    string UserName = "";
    User user; 
    
    UserInput = GetLoginInput(UserInput);
    switch(UserInput)
    {
     case 'L':


            cout << "Please Enter User Name" << '\n';
            cin >> UserName;
           
            if(user.FindUser(UserName)){

                            UserInput =  GetInitInput(UserInput);
        switch(UserInput)
        {
        /*
        case 'L':
            break; 
    */
    case 'p': 
    
    while ( UserInput != 'Q')
    {
              
	UserInput = GetPlayInput(UserInput) ;
        char CompChoice = GetCompInput();

               
        cout << "Userinput:" <<UserInput << '\n'; // << ' ' << "CompChoice:" <<CompChoice<<endl;
	
          switch(UserInput)
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
	    }
	          cout <<	user.FindUser(UserName);     

	         
        break;

	case 'l':
             user.ListUsers();

	break;
    }
    
    //cout<<"Hello World";

   
    return 0;
}


char GetLoginInput(char& UserInput)
{
    cout <<"Please Enter L to login" <<'\n';
  cout <<"Please Enter l to list Players" << '\n';
   
    cin >> UserInput;
  if(UserInput != 'L' && UserInput != 'l')
       GetLoginInput(UserInput);
 

  return UserInput; 
}

char GetInitInput(char& UserInput)
{
   
    cout <<"Please Enter p to start game" << '\n';
   
    cin >> UserInput;
        
   // cout << Userinput <<endl; debug
  
    if(UserInput != 'p' )
       GetInitInput(UserInput);
  
    return UserInput;
}

char GetPlayInput(char& UserInput)
{
   
    cout <<"Please Enter R for rock, P for paper, S for Scissors, or Q to quit game" <<endl;
    
    cin >> UserInput;
        
   // cout << Userinput <<endl;
  
    if(UserInput != 'R' && UserInput != 'P' && UserInput != 'S' &&  UserInput != 'Q')
       GetPlayInput(UserInput);
  
    return UserInput;
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




