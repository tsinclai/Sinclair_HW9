/*
All programming assignments for the remainder of this course must begin with
a variation of the following four lines:

Program Name: Energy Drink Consumption
Purpose: To track information about a soda vendor based on user input.
Author: Tabitha Sinclair
Date Last Modified: 02-05-19
*/

#include <iostream>
using namespace std;

int main () {

double numberOfCustomers; //number of customers surveyed
double purchaseEnergyDrink; // number of surveyed customers who purchase energy Drinks
double preferCitrusDrinks; // number of energy drinkers who prefer citrus-flavored drinks


 cout << "Enter Number of customers surveyed ";
 cin >> numberOfCustomers;
 cout << "Enter the percent of customers who purchase Energy Drinks ";
 cin >> purchaseEnergyDrink;
 cout << "Enter the percent of customers who prefer citrus-flavored drinks ";
 cin >> preferCitrusDrinks;

 double energyDrinkCustomers = numberOfCustomers * purchaseEnergyDrink;
 double citrusFlavorCustomers = energyDrinkCustomers * preferCitrusDrinks;

 cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week is " << energyDrinkCustomers << endl;
 cout << "The approximate number of customers in the survey who prefer citrus-falvored energy drinks is " << citrusFlavorCustomers << endl;

 return 0;

}
