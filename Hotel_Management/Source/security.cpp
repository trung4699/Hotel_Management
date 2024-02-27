/*
* File: security.cpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file for function definition for the security
*/

#include "Header/security.hpp"

Security::Security()
{
    User_Account admin;
    admin.userName = "Admin";
    admin.password = "123456";
    Admin_Account = admin;
    Authenticate = false;
}

bool Security::getAuthenticate()
{
    return Authenticate;
}


void Security::checkAdminLogIn(User_Account account)
{
    if (Admin_Account.userName == account.userName && Admin_Account.password == account.password)
    {
        Authenticate = true;
    }
}

void Security::adminLogOut()
{
    Authenticate = false;
}

void Security::setPassword(std::string password)
{
    if (Authenticate == true)
    {
        Admin_Account.password = password;
    }
    
}