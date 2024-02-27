/*
* File: floor.hpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file include function declaration of one floor
*/

#ifndef FLOOR_H
#define FLOOR_H

#include "Header/room.hpp"
#include <vector>

class Floor
{
private:
    std::vector <Room> NumberOfRoom;
public:
    Floor();

    void setRoom(int numberRoom);

    std::vector <Room> getRoomData();
    
    int getNumberOfRoom();
    void checkOutRoom(int numberRoom);
    void setFreeRoom(int numberRoom);

    void selectRoom(Customer customer_room, int room);
  
    
};

#endif