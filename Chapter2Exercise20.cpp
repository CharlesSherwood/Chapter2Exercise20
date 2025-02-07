#include <iostream>
using namespace std;

int main()
{
	// This progrm will calculate the total gallons of paint needed to paint 2 coats on a fence that is 6 feet by 100 feet.

	// We will start by createing some variables

	int length = 100;
	int height = 6;
	int paint_area = 340;
	int fence_area;
	double gallons_of_paint;

	// Now we will now calculate the total number of gallons needed to paint 2 coats on this fence.
	fence_area = 100 * 6 * 2;
	gallons_of_paint = fence_area / paint_area;


	cout << "The total gallons of paint required to paint 2 coats on this wooden fence is: " << gallons_of_paint << endl;

	return 0;

}