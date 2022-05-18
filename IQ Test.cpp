
//The test is as follows : the person gets a piece of squared paper with a 4 × 4 square painted on it.
// Some of the square's cells are painted black and others are painted white. 
// Your task is to repaint at most one cell the other color so that the picture has a 2 × 2 square, completely consisting of cells of the same color. 
// If the initial picture already has such a square, the person should just say so and the test will be completed.
//Your task is to write a program that determines whether it is possible to pass the test.
// You cannot pass the test if either repainting any cell or no action doesn't result in a 2 × 2 square, consisting of cells of the same color.
//Input
//Four lines contain four characters each : the j - th character of the i - th line equals "." 
// if the cell in the i - th row and the j - th column of the square is painted white, and "#", if the cell is black.
//Output
//Print "YES" (without the quotes), if the test can be passed and "NO" (without the quotes) otherwise.

#include <iostream>
using namespace std;
int main()
{
	char arr[4][4];
	cout<< "enter array elements only characters (# or .) \n";
	for (int j = 0;j < 4;j++)
	{
		for (int i = 0;i < 4;i++)
		{			
			cin >> arr[j][i];
		}
	}
	for (int j = 0;j < 3;j++)
	{
		for (int i = 0;i < 3;i++)
		{
			bool y ;
			if ((arr[j][i] == arr[j][i + 1]) && (arr[j][i + 1] == arr[j + 1][i]) && (arr[j + 1][i] == arr[j + 1][i + 1]))
			{
				y = 1;
				cout << "array square 2*2 of index\t" << j << "\tcolumn and row\t" << i << "\tare equal" << endl;
			}
			else
			{
				y = 0;
				cout << "array square 2*2 of index\t" << j << "\tcolumn and row\t" << i << "\tare not equal" << endl;
				if ((arr[j][i] ==  '+') && (arr[j][i + 1] == '.') && (arr[j + 1][i] == '.') && (arr[j + 1][i + 1] == '.'))
				{
					cout << " you can change here 1 time only in position \t " << j << "," << i << "and" << j + 1 << "," << i + 1 << endl;
					cout << "yes\n";
				}
				else if ((arr[j][i] == '.') && (arr[j][i + 1] ==  '+') && (arr[j + 1][i] == '.') && (arr[j + 1][i + 1] == '.'))
				{
					cout << " you can change here 1 time only in position \t " << j << "," << i + 1 << "and" << j + 1 << "," << i << endl;
					cout << "yes\n";
				}
				else if ((arr[j][i] == '.') && (arr[j][i + 1] == '.') && (arr[j + 1][i] =='+') && (arr[j + 1][i + 1] == '.'))
				{
					cout << " you can change here 1 time only in position \t " << j + 1 << "," << i << "and" << j << "," << i + 1 << endl;
					cout << "yes\n";
				}
				else if ((arr[j][i] == '.') && (arr[j][i + 1] == '.') && (arr[j + 1][i] == '.') && (arr[j + 1][i + 1] == '+'))
				{
					cout << " you can change here 1 time only in position \t " << j + 1 << "," << i + 1 << "and" << j + 1 << "," << i + 1 << endl;
					cout << "yes\n";
				}
				else
				{
					cout << " this 2*2 square can't be changed from 1 time\n ";
					cout << "no\n";
				}
			}
		}
		cout << endl;
	}
	return 0;
}