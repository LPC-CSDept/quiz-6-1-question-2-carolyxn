#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &, int &, int &);
void printResult(int &, int &, int &, int);

// ******************************
// Your code here
// ******************************

void getInput(int &n1, int &n2, int &n3)
{
	cout << "Enter in three values: ";
	cin >> n1 >> n2 >> n3;
}

int findMin(int n1, int n2, int n3)
{
	int min;
	int nums[3];
	min = nums[0];
	for (int i = 1; i < 3; i++)
	{
		if (nums[i] < min)
        {
            min = nums[i];
			break;
        }
	}
	return min; 
}


// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}