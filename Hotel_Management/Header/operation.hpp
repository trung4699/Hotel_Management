/*
* File: operation.hpp
* Author: Phan Hoang Trung
* Date: 12/07/2023
* Description: This is a file include function declaration the operation
*/

#ifndef OPERATION_H
#define OPERATION_H

#include "Header/employee.hpp"
#include "Header/customer.hpp"
#include "Header/room.hpp"
#include "Header/floor.hpp"
#include "Header/security.hpp"
#include "Header/bill.hpp"
#include "Header/feedback.hpp"

void employeeLogIn(std::list <Employee> &Employee_Database);
void addEmployee(std::list <Employee> &Employee_Database, Security Admin_Account_Original);
void employeePrintInfo(Employee employee);
void employeeUpdateInfo(Employee *employee);

void adminLogIn(std::list <Employee> &Employee_Database, Security &Admin_Account_Original, std::list <Bill> &Revenue_Database, std::vector <Floor> &Hotel_Floor, std::list <FeedbackAndRating> Feedback_Database);
void printListEmployee(std::list <Employee> &Employee_Database, Security Admin_Account_Original);
void employeeChangePosition(std::list <Employee> &Employee_Database);
void employeeUpdateShift(Employee *employee, Security Admin_Account_Original);
void printShift(WorkSchedule schedule);
void printWorkSchedule(const std::list <WorkSchedule> Schedule_Database);

void employeeAddShift(Employee *employee);
int deleteShift(const std::list <WorkSchedule> Schedule_Database);

void addCustomer(std::list <Customer> &Customer_Database);
void updateInfoCustomer(std::list <Customer> &Customer_Database);
void deleteCustomer(std::list <Customer> &Customer_Database);
void printListCustomer(const std::list <Customer> Customer_Database);
void checkPhoneToPrintBookingHistory(const std::list <Customer> Customer_Database);
void printCustomerBookingHistory(const std::list <BookingHistory> bookingHistoryData, const std::string nameCustomer);
void printCustomerCheckInOrOut(Customer customer);

void printListRoomStatus(std::vector <Floor> &Hotel_Floor);
void deleteFloor(std::vector <Floor> &Hotel_Floor);
void deleteRoom(std::vector <Floor> &Hotel_Floor);

void bookingRoom(std::list <Customer> &Customer_Database, std::vector <Floor> &Hotel_Floor);
void printRoomStatus(Floor floor);

void roomCheckIn(std::vector <Floor> &Hotel_Floor, std::list <Customer> &Customer_Database );
void roomCheckOut(std::vector <Floor> &Hotel_Floor, std::list <Customer> &Customer_Database);
void roomSetFree(std::vector <Floor> &Hotel_Floor);


void prepaid(std::list <Bill> &Revenue_Database, std::vector <Floor> &Hotel_Floor);
void printBill(Bill bill);
void postpaid(std::list <Customer> &Customer_Database, std::list <Bill> &Revenue_Database);
void printRevenue(std::list <Bill> &Revenue_Database, Security &Admin_Account_Original);
void printOccupancyRate(std::vector <Floor> &Hotel_Floor, Security &Admin_Account_Original);


void writeFeedback(std::list <FeedbackAndRating> &Feedback_Database);
void printListFeedback(std::list <FeedbackAndRating> Feedback_Database, Security &Admin_Account_Original);

#endif