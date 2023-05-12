#include <iostream>
#include <cstdlib>
#include <string>

#include "User.h"

using namespace std;

char GetCompInput();
void GamePlay(char& UserInput);


int main()
{
  // char UserInput;
   string UserName = "";
   User user; 
    
   //UserInput = GetLoginInput(UserInput);
   User.GetLoginInput();
   switch(UserInput)
   {
      case 'L':
   
      cout << "Please Enter User Name" << '\n';
      cin >> UserName;
           
      if(user.FindUser(UserName))
      {
         //Add while loop to continue till tired of playing
         UserInput =  GetInitInput(UserInput);
         switch(UserInput)
         {
            case 'p': 
    	     //  UserInput = GetGameMode(UserInput); //0, 1 ,3

               while (UserInput != 'Q')
               {
                  UserInput = GetGameMode(UserInput);
	          switch(UserInput)
                  {
		
                     case '0':
	                while(UserInput != 'Q')
                        {
                           UserInput = GetPlayInput(UserInput);
                           GamePlay(UserInput);

                        }
                     break;
               
                     case '1':
                        UserInput = GetPlayInput(UserInput);
                        GamePlay(UserInput);
	             break;
                  
                     case '3':
                  
                        for(int i = 0; i < 3; i++)
		        {
                           UserInput = GetPlayInput(UserInput);
                           GamePlay(UserInput);

                        }
	             break;
                  }
               }
            break;
 
            case 'l':
               
	       user.ListUsers();	
	    break;
           /*    default:

		cout << "please Enter p or l" <<'\n';
               break;
    */
         }
      }
      else
         cout << "Please enter different name:" << '\n' ;
	         
      break;

      case 'C':
            // user.ListUsers();
         cin >> UserName;
	 user.CreateUser(UserName);
      break;
   }
    
    //cout<<"Hello World";

   
    return 0;
}


char GetLoginInput(char& UserInput)
{
   cout <<"Please Enter L to login" <<'\n';
   cout <<"Please Enter C to create Player" << '\n';
   
   cin >> UserInput;
   if(UserInput != 'L' && UserInput != 'C')
      GetLoginInput(UserInput);
 

   return UserInput; 
}

char GetInitInput(char& UserInput)
{
   
   cout <<"Please Enter p to start game" << '\n';
   cout << "Please Enter l to list players" << '\n';
   cin >> UserInput;
        
   // cout << Userinput <<endl; debug
  
   if(UserInput != 'p' && UserInput != 'l' )
      GetInitInput(UserInput);
  
   return UserInput;
}

char GetGameMode(char& UserInput)
{
   cout <<"\n Please Enter GameMode:" <<'\n';
   cout <<"   0 for Practice" <<'\n';
   cout <<"   1 for Best of one" <<'\n';
   cout <<"   3 for Best of three" <<'\n';
   if(UserInput == 'Q')
      cout <<"   Q to quit" <<'\n';

   cin >> UserInput;

   if(UserInput != '0' && UserInput != '1' && UserInput != '3' && UserInput != 'Q' )
      GetGameMode(UserInput);

   return UserInput;
}

char GetPlayInput(char& UserInput)
{
   
   cout <<"Please Enter R for rock, P for paper, S for Scissors" <<'\n';
   if(UserInput == '0')
    cout <<"Please Enter Q to quit practice" <<'\n';
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

void GamePlay(char& UserInput)
{
    
   char CompChoice = GetCompInput();
            
   cout << "Userinput:" <<UserInput << '\n'; // << ' ' << "CompChoice:" <<CompChoice<<endl;
	
   switch(UserInput)
   {
      case 'Q':
        UserInput = GetGameMode(UserInput); 
      break;
            
      case 'R':
         if(CompChoice == 'P')
            cout << "You Lose" <<'\n';
         else if(CompChoice == 'R')
            cout << "Tie" <<endl;
         else 
            cout <<"You Win" <<'\n';
               // else if (CompChoice == 'R')
                   // cout << "Tie";
      break;
            
      case 'P':
         if (CompChoice == 'S')
            cout << "You Lose" <<'\n';
         else if(CompChoice == 'P')
            cout <<"Tie" <<'\n';
         else 
            cout << "You Win" <<'\n';
      break;
            
      case 'S':
         if (CompChoice == 'R')
            cout << "You Lose" <<'\n';
         else if(CompChoice == 'S')
            cout <<"Tie" <<'\n';
         else 
            cout <<"You Win" <<'\n';
      break;
        
   } 
     
}


