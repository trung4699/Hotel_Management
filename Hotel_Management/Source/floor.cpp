/*
* File: floor.cpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file for function definition of one floor
*/

#include "Header/floor.hpp"


Floor::Floor()
{
    NumberOfRoom.resize(1);
}

void Floor::setRoom(int numberRoom)
{

    NumberOfRoom.resize(numberRoom);
}

std::vector <Room> Floor::getRoomData()
{
    return NumberOfRoom;
}

int Floor::getNumberOfRoom()
{
    return NumberOfRoom.size();
}

void Floor::selectRoom(Customer customer_room, int room)
{
    NumberOfRoom.at(room).bookingRoom(customer_room);
}

void Floor::checkOutRoom(int numberRoom)
{
    NumberOfRoom.at(numberRoom).checkOut();
}

void Floor::setFreeRoom(int numberRoom)
{
    NumberOfRoom.at(numberRoom).freeRoom();
}
