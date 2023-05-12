#include <iostream>
#include <fstream>

#include "User.h"

User::User()
{

}

User::~User()
{

}


void User::ListUsers(std::string& FileName)
{
  std::string ReadText;
  std::ifstream FileRead;

   FileRead.open(FileName);

   if(!FileRead)
   {
      std::cout << "File Not Found" <<'\n';  
      return;
   }  

   while(getline(FileRead, ReadText))
   {
      std::cout << ReadText <<'\n'; 
/*
      if(ReadText.find(UserName))
      {
         std::cout <<"Found" <<'\n';
      }
*/
   } 

   FileRead.close();     
}

void User::ListUsers()
{
  std::string ReadText;
  std::ifstream FileRead;

   FileRead.open("User.txt");

   if(!FileRead)
   {
      std::cout << "File Not Found" <<'\n';  
      return;
   }  

   while(getline(FileRead, ReadText))
   {
      std::cout << ReadText <<'\n'; 
/*
      if(ReadText.find(UserName))
      {
         std::cout <<"Found" <<'\n';
      }
*/
   } 

   FileRead.close();     
}




bool User::FindUser(std::string& UserName)
{
  std::string ReadText;
  std::ifstream FileRead;

   FileRead.open("User.txt");

   if(!FileRead)
   {
      std::cout << "File Not Found" <<'\n';  
      return false;
   }  

   while(getline(FileRead, ReadText))
   {
//      std::cout << ReadText <<'\n'; 

      if(ReadText == UserName)
      {
         return true;
      }
   //   else
     //    return false;

   } 

   FileRead.close();   

   return false;  
}

void User::CreateUser(std::string& UserName)
{
   std::ofstream FileWrite;

   FileWrite.open("User.txt", std::ofstream::app);

   if(!FileWrite)
   {
      std::cout << "File Not Found" <<'\n';  
      return; 
   }  
   UserName += '\n';
   FileWrite << UserName;


}

//bool FindUser(std::string& User);

char User::GetUserInput()
{
   return UserInput;

}

void User::SetUserInput()
{
   char Input = '';

   cin >> Input;

   UserInput = Input;

}


//char User::GetLoginInput(char& UserInput)
char User::GetLoginInput()
{
   cout <<"Please Enter L to login" <<'\n';
   cout <<"Please Enter C to create Player" << '\n';
   
   SetUserInput();
   //cin >> UserInput;

   if(GetUserInput() != 'L' && GetUserInput() != 'C')
      GetLoginInput();
 
   return GetUserInput();
}

/*
char User::GetInitInput(char& UserInput)
{
   
   cout <<"Please Enter p to start game" << '\n';
   cout << "Please Enter l to list players" << '\n';
   cin >> UserInput;
        
   // cout << Userinput <<endl; debug
  
   if(UserInput != 'p' && UserInput != 'l' )
      GetInitInput(UserInput);
  
   return UserInput;
}

char User::GetGameMode(char& UserInput)
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

char User::GetPlayInput(char& UserInput)
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
