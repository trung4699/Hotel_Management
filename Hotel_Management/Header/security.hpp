/*
* File: security.hpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file include function declaration for the security
*/

#ifndef SECURITY_H
#define SECURITY_H

#include "Header/employee.hpp"

class Security
{
private:
    User_Account Admin_Account;
    bool Authenticate;

public:
    Security();

    bool getAuthenticate();

    void checkAdminLogIn(User_Account account);
    void setPassword(std::string password);
    void adminLogOut();
    
};



#endif