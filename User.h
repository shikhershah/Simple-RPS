#include <iostream>
#include <string>

#ifndef USER_H
#define USER_H

class User{

private:
   char UserInput;
public:

   User();
   ~User();
   void ListUsers();
   void ListUsers(std::string& FileName);
   bool FindUser(std::string& UserName);
   void CreateUser(std::string& UserName);

   char GetUserInput();
   void SetUserInput(char Input);

   char GetLoginInput();

  // char GetLoginInput(char& UserInput);
  /* char GetInitInput(char& UserInput);
   char GetGameMode(char& UserInput); 
   char GetPlayInput(char& UserInput);*/
  // void GamePlay(char& UserInput);
};

#endif // USER_H
