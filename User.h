#include <iostream>
#include <string>

#ifndef USER_H
#define USER_H

class User{

private:
   char UserInput;
   bool IsPractice = false;

public:

   //User();
   //~User();

   /***
    *
    *
    */
   char GetUserInput();
   void SetUserInput();

   bool GetIsPractice();
   void SetIsPractice();


   /***
    *
    * Functions
    *
    * 
   */
   void ListUsers();
   void ListUsers(std::string& FileName);
   bool FindUser(std::string UserName);
   void CreateUser(std::string& UserName);

   char GetLoginInput();
   char GetInitInput();
   char GetGameMode();
   char GetPlayInput();
   //void GamePlay();
   // char GetLoginInput(char& UserInput);
  /* char GetInitInput(char& UserInput);
   char GetGameMode(char& UserInput); 
   char GetPlayInput(char& UserInput);*/
  // void GamePlay(char& UserInput);
};

#endif // USER_H
