/*FileName:Chapter2Exercise20.cpp
Programmer Name:Charles Sherwood
Date:2/2025
Requirements:A particular brand of paint covers 340 square feet per gallon. Write a program to
determine and report approximately how many gallons of paint will be needed to paint
two coats on a wooden fence that is 6 feet high and 100 feet long.
*/



#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

	//Start with making variables
	double length = 100;
	double height = 6;
	double paint_area = 340;
	double fence_area;
	double gallons_of_paint;

	// Now we will now calculate the total number of gallons needed to paint 2 coats on this fence.
	fence_area = 100 * 6 * 2;
	gallons_of_paint = fence_area / paint_area;

	//Then we display that on the screen
	cout << "The total gallons of paint required to paint 2 coats on this wooden fence is: " << gallons_of_paint << endl;

	return 0;


}