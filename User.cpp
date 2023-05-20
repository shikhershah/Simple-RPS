#include <iostream>
#include <fstream>

#include "User.h"
/*
User::User()
{

}

User::~User()
{
   delete User();
}
*/

/***
 *
 *
 *  Get and Set
 *
 *
*/

char User::GetUserInput()
{
   return UserInput;

}

void User::SetUserInput()
{
   char Input;

   std::cin >> Input;

   UserInput = Input;

}


bool User::GetIsPractice()
{

   return IsPractice;
}

void User::SetIsPractice()
{

   if(GetIsPractice() == false)
      IsPractice = true;

   else 
      IsPractice = false;

}

/***
 *
 *
 * Functions 
 *
 *
*/


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




bool User::FindUser(std::string UserName)// User::FindUser(std::string& UserName)
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




//char User::GetLoginInput(char& UserInput)
char User::GetLoginInput()
{
   std::cout <<"Please Enter L to login" <<'\n';
   std::cout <<"Please Enter C to create Player" << '\n';
   
   SetUserInput();

   if(GetUserInput() != 'L' && GetUserInput() != 'C')
      GetLoginInput();
 
   return GetUserInput();
}


char User::GetInitInput()
{
   
   std::cout <<"Please Enter p to start game" << '\n';
   std::cout << "Please Enter l to list players" << '\n';
   
   SetUserInput();
        
   if(GetUserInput() != 'p' && GetUserInput() != 'l' )
      GetInitInput();
  
   return GetUserInput();
}

char User::GetGameMode()
{
   std::cout <<"\n Please Enter GameMode:" <<'\n';
   std::cout <<"   0 for Practice" <<'\n';
   std::cout <<"   1 for Best of one" <<'\n';
   std::cout <<"   3 for Best of three" <<'\n';
   
   std::cout <<"   Q to quit" <<'\n';

   SetUserInput();

   if(GetUserInput() != '0' && GetUserInput() != '1' && GetUserInput() != '3' && GetUserInput() != 'Q' )
      GetGameMode();

   return GetUserInput();
}

char User::GetPlayInput()
{
   
   std::cout <<"Please Enter R for rock, P for paper, S for Scissors" <<'\n';
   if(GetIsPractice() == true)
      std::cout <<"Please Enter q to quit practice" <<'\n';
       
   SetUserInput();
   // cout << Userinput <<endl;
  
   if(GetUserInput() != 'R' && GetUserInput() != 'P' && GetUserInput() != 'S' &&  GetUserInput() != 'q')
      GetPlayInput();
  
   return UserInput;
}


