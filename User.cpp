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
<<<<<<< HEAD

   if(!FileRead)
   {
      std::cout << "File Not Found" <<'\n';  
      return;
   }  

=======

   if(!FileRead)
   {
      std::cout << "File Not Found" <<'\n';  
      return;
   }  

>>>>>>> a92741e... add List Users, Fix Login
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

