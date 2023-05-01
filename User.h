#include <iostream>
#include <string>

#ifndef USER_H
#define USER_H

class User{


public:

User();
~User();
void ListUsers();
void ListUsers(std::string& FileName);
bool FindUser(std::string& UserName);
void CreateUser(std::string& UserName);
};

#endif // USER_H
