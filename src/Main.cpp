/*
 * Main.cpp
 *
 *  Created on: 15 Jul 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	char value = 127;				// 127 is the max value a char can hold, 127 values in the ASCII table

	cout << (int)value << endl;

	value++;

	cout << (int)value << endl;		/*
									 * The reason we get -128 and not -127 is because the zero takes up a
									 * number, 0 - 127 is 128 numbers.
									 *
									 * Positive range = 0 - 127.
									 * Negative range = -1 - (-128).
									 */

	/*
	 * JUST WATCH LESSON 56 ON COURSE AS MOST OF IT IS NOT CODING! BUT PRESENTATION.
	 */

	return 0;
}


