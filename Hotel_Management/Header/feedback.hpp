/*
* File: feedback.hpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file include function declaration of one feedback
*/

#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <iostream>
#include <string>

class FeedbackAndRating
{
private:
    
    std::string Name;
    std::string Phone;
    std::string Feedback;
    int Rating;
    

public:
    FeedbackAndRating(std::string name, std::string phone, std::string feedback, int rating);

    std::string getName();
    std::string getPhone();
    std::string getFeedback();
    int getRating();
    
};



#endif