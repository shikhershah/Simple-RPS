#include <iostream>
#include <fstream>

#include "User.h"

User::User()
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

/*      if(ReadText.find("end"))
      {
         std::cout <<"Found End" <<'\n';
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
      std::cout << ReadText <<'\n'; 

      if(ReadText.find(UserName))
      {
         std::cout <<"Found " <<UserName  <<'\n';
         return true;
      }
      else
         return false;

   } 

   FileRead.close();   

   return false;  
}








//bool FindUser(std::string& User);

