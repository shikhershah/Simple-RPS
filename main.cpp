#include <iostream>
#include <cstdlib>
#include <string>

#include "User.h"


char GetCompInput();
void GamePlay(char UserInput);


int main()
{
  // char UserInput;
   std::string UserName = "";
   User user; 
   

   
   //UserInput = GetLoginInput(UserInput);
   user.GetLoginInput();
   switch(user.GetUserInput())
   {
      case 'L':
   
      std::cout << "Please Enter User Name" << '\n';
      std::cin >> UserName;
      std::cout <<'\n';

      if(user.FindUser(UserName))
      {
         user.GetInitInput();//p || l
         switch(user.GetUserInput())
         {
      
            case 'p': 
    	     //  UserInput = GetGameMode(UserInput); //0, 1 ,3
            
               while (user.GetUserInput() != 'Q')
               {

                  user.GetGameMode();//0 || 1 || 3
	          switch(user.GetUserInput())
                  {
		
                     case '0':
                        user.SetIsPractice();
	                while(user.GetUserInput() != 'q')
                        {
                           user.GetPlayInput();
                           GamePlay(user.GetUserInput());

                        }
                        user.SetIsPractice();
                     break;
               
                     case '1':
                        user.GetPlayInput();
                        GamePlay(user.GetUserInput());
	             break;
                  
                     case '3':
                  
                        for(int i = 0; i < 3; i++)
		        {
                           user.GetPlayInput();
                           GamePlay(user.GetUserInput());

                        }
	             break;
                  }
               }
            break;
 
            case 'l':
               
	       user.ListUsers();	
	    break;
            default:

               std::cout << "please Enter p or l" <<'\n';
            break;
    
         }
        
      }
      else
         std::cout << "Please enter different name:" << '\n' ;
	         
      break;

      case 'C':
            // user.ListUsers();
         std::cin >> UserName;
	 user.CreateUser(UserName);
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

void GamePlay(char UserInput)
{
   User user; 
   char CompChoice = GetCompInput();
            
   std::cout << "Userinput:" <<UserInput << '\n'; // << ' ' << "CompChoice:" <<CompChoice<<endl;
	
   switch(UserInput)
   {
      case 'Q':
        user.GetGameMode(); 
      break;
            
      case 'R':
         if(CompChoice == 'P')
            std::cout << "You Lose" <<'\n';
         else if(CompChoice == 'R')
            std::cout << "Tie" <<'\n';
         else 
            std::cout <<"You Win" <<'\n';
               // else if (CompChoice == 'R')
                   // cout << "Tie";
      break;
            
      case 'P':
         if (CompChoice == 'S')
            std::cout << "You Lose" <<'\n';
         else if(CompChoice == 'P')
            std::cout <<"Tie" <<'\n';
         else 
            std::cout << "You Win" <<'\n';
      break;
            
      case 'S':
         if (CompChoice == 'R')
            std::cout << "You Lose" <<'\n';
         else if(CompChoice == 'S')
            std::cout <<"Tie" <<'\n';
         else 
            std::cout <<"You Win" <<'\n';
      break;
        
   } 
     
}


