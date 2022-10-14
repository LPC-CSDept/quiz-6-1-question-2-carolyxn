#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &, int &, int &);
int findMin(int &, int &, int &);
void printResult(int &, int &, int &, int);

// ******************************
// Your code here
// ******************************

int main()
{
	int n1, n2, n3;
	getInput(n1, n2, n3);
	int min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);
}

void getInput(int &n1, int &n2, int &n3)
{
	cout << "Enter in three values: ";
	cin >> n1 >> n2 >> n3;
}

int findMin(int n1, int n2, int n3)
{
	int min, nums[3];
	nums[0] = n1, nums[1] = n2, nums[2] = n3;
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