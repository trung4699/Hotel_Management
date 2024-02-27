/*
* File: room.hpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file include function declaration of one room
*/

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "Header/customer.hpp"

typedef enum {
    Available,
    Unavailable,
    Cleaning
} RoomStatus;


class Room
{
private:
    int ID;
    Customer Customer_Room;
    RoomStatus Status;
    int Bill;
    
public:
    Room();

    int getID();

    RoomStatus getStatus();

    Customer getCustomerRoom();

    void bookingRoom(Customer customer_room);
    void checkOut();
    
    void freeRoom();

};








#endif