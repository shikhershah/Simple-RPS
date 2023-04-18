#include <iostream>
#include <string>

#ifndef USER_H
#define USER_H

class User{


public:

User();


void ListUsers(std::string& FileName);
bool FindUser(std::string& UserName);

};

#endif // USER_H
