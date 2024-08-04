/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
August 4, 2024

Finals Prep Week 13, Q1-Q9 -- FinalsPrep.cpp

*******************************************************************************/

/* Q1: Write lines of code that declare a vector of integers and define it to 
	   have the following values 10, 13, -9, 53, 81, 8, 47, 5, -9, 27. */

#include <vector>

std::vector<int> intVector = { 10, 13, -9, 53, 81, 8, 47, 5, -9, 27 };


/******************************************************************************/

/* Q2: Write a code snippet that copies the elements of the vector in question
	   1 into a set. */

#include <set>

std::set<int> unique_intVector(intVector.begin(), intVector.end());

// a. What will be printed when the elements of the set are printed out?

// Code snippet to print out the values of the set:

for (int value : unique_intVector) {
	std::cout << value << " ";
}


// Output:
// 10 13 -9 53 81 8 47 5 -9 27


/******************************************************************************/

/* Q3: a. Declare a function updateValueByRef that takes an integer and the 
		  pointer to a float. It updates the value of the float. It does not 
		  return anything. */

void updateValueByRef(int numberInt, float* numberFloat);

/* b. Write the code for the above function updateValueByRef that adds the int
	  value to the float value and stores the sum in the address of the float. */

void updateValueByRef(int numberInt, float* numberFloat) {
	*numberFloat += static_cast<float>(numberInt);
}

/* c. Add 1 line to the code in italics that calls the updateValueByRef function
	  with the variables below.
	  
	  int inc = 10;

	  float fValue = 122.856; */

updateValueByRef(inc, &fValue);

/* d. Write a function called updateValue that has 2 arguments, a float and an
	  integer, that has the same functionality as updateValueByRef. */

void updateValue(float& numberFloat2, int numberInt2) {
	numberFloat2 += static_cast<float>(numberInt2);
}


/******************************************************************************/

/* Q4: How many bytes are required to store 1 instance of the class shown below?
	   [Hint: Run sizeOfData.cpp] 
	   
	   class employee  {
	   private:
		   char name[100];
		   int age;
		   char intern; */

// char name[100]	= 100 bytes
// int age			= 4 bytes
// char intern		= 1 byte + 3 bytes (padding)
// TOTAL			= 108 bytes


/******************************************************************************/

/* Q5. Write a line of code that will store a string that the user inputs, 
	   even if the string contains a space in it. */

std::getline(std::cin, userString);


/******************************************************************************/

/* Q6: Write a function that stores the Fibonacci numbers into a vector till 
	   the Fibonacci number is less than or equal to 380.
	   Fibonacci numbers are 0, 1, 2, 3, 5, 8, 13 and so on. Any number is the
	   sum of its 2 previous numbers.
	   The function should print out the Fibonacci numbers and return the size 
	   of the vector. */

int fibonacci(std::vector<int>& fibonacciSeq) {
	int a = 0, b = 1;

	fibonacciSeq.push_back(a);
	fibonacciSeq.push_back(b);

	while (true) {
		int next = a + b;
		if (next > 380) {
			break;
		}
		fibonacci.push_back(next);
		a = b;
		b = next;
	}

	for (int num : fibonacciSeq) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	return fibonnacciSeq.size();
}


/******************************************************************************/

/* Q7. Write a code snippet only for a class called journey
		a. With the following attributes:
			  i. place where the journey starts
			 ii. destination
			iii. mode of transport
		b. Add the declaration of the following functions
			  i. Virtual function called travelTime that returns the value 3.5
			 ii. A function declaration only for a function called timeAtDestination 
				 that returns a variable of type time_t */

class Journey {
private:
	std::string start;
	std::string destination;
	std::string modeOfTransport;

public:
	virtual float travelTime() {
		return 3.5;
	}

	time_t timeAtDestination() {
		time_t time;

		return time;
	}
};

/*		c. Based on the link, what file must be included in the class that
		   journey is in ?

				#include <time.h> */


/******************************************************************************/

/* Q8. What function must be defined in the child class of journey called 
	   flight? (No code required, just write the name of the function) */

		// travelTime ==> since it is a virtual function, it must be defined.


/******************************************************************************/

/* Q9. Write 2 ways of displaying the vector
	   vector<float> values = { 12.2, 91.77, 100.66, 13.55, 22.55, 16.16 }; */

// Method 1:
for (float value : values) {
	std::cout << value << " ";
}

// Method 2:
for (std::vector<float>::iterator it = value.begin(); it != values.end() ++it) {
	std::cout << *it << " ";
}
