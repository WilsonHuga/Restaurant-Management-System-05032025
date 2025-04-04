#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "MenuItem.h"
#include "Order.h"
#include <vector>
#include <string>

class Restaurant {
public:
    std::vector<Appetizer> appetizers;
    std::vector<MainCourse> mainCourses;
    std::vector<Dessert> desserts;
    std::vector<Order> orders;
    std::vector<bool> availableTables;

    int tableCount;

    Restaurant(int tableCount);
    void addAppetizer(Appetizer appetizer);
    void addMainCourse(MainCourse mainCourse);
    void addDessert(Dessert dessert);
    void displayMenu();
    void displayOrders();
    void createOrder(int tableNum);
    void addOrderItem(int tableNum, MenuItem* menuItem, int qty);
    void completeOrder();
    void markInPreparation(int tableNum);
    void showAvailableTables();
    void addMenuItem();
    void removeMenuItem();
    void addSpecialMenu();
    void viewCustomerTablesAndBills();
    void loadSavedOrders();
    void updateTableAvailability();

    // New method to get the active order for a table
    bool getActiveOrderForTable(int tableNum, Order& result);


    // Manager usage 
    void viewAllBills();
    void generateSalesReport();
    //double calculateTotalRevenue();


    void loadMenuFromFile();
    void saveMenuToFile();
};

#endif