#include <iostream>

#include "User.h"

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


