/*
* File: feedback.cpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file for function definition of customer feedback
*/

#include "Header/feedback.hpp"

FeedbackAndRating::FeedbackAndRating(std::string name, std::string phone, std::string feedback, int rating)
{
    Name = name;
    Phone = phone;
    Feedback = feedback;
    Rating = rating;
}

std::string FeedbackAndRating::getName()
{
    return Name;
}

std::string FeedbackAndRating::getPhone()
{
    return Phone;
}

std::string FeedbackAndRating::getFeedback()
{
    return Feedback;
}

int FeedbackAndRating::getRating()
{
    return Rating;
}