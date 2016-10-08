#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
using namespace std;

void PrintInteger(int variable)
{
	cout << variable << endl;
}
//question 2
void lesserflt(float answer)
{
	float one;
	float two;
	cout << "enter value 1: ";
	cin >> one;
	cout << endl << "enter value 2: ";
	cin >> two;
	cout << endl;
	if (one < two)
	{
		answer = one;
		cout << answer << endl;
	}
	else if (two < one)
	{
		answer = two;
		cout << answer << endl;
	}
	
}
//question 3
void lesserflt(float a[3])
{
	cin >> a[0] >> a[1] >> a[2];
	float lesser;
	lesser = a[0];
	for (int i = 0; i < 3; i++)
	{
		if (lesser > a[i])
			lesser = a[i];

	}
	cout << lesser << endl;

	
}
//question 4
void Half()
{
	float halfnum;
	float num;
	cin >> num;
	halfnum = num / 2;
	cout << halfnum << endl;
}
//Question 5
void CoinToss()
{
	
	int tosstimes;
	int num;
	cin >> tosstimes;
	for (int i = 0; i < tosstimes; i++)
	{
		
		num = rand();
		if (num <=  32767 / 2)
			cout << "heads" << endl;
		else if (num > 32767 / 2)
			cout << "tails" << endl;
	}

 
}
//Question 7
int SumTo(int N)
{
	int sum = 0;
	for (int i = 0; i <= N; i++)
	{
		sum = sum + i;
		
	}
	N = sum;
return N;

}
//Question 8
int arraysum(int arrayvar[],int arraylength)
{
	int sum= 0;
	for (int i = 0; i < arraylength; i++)
	{
		sum = sum + arrayvar[i];
	 }
	return sum;




}
//Question 9
int arraymin(int arrayvar[], int arraylength)
{
	int min;
	min = arrayvar[0];
	for (int i = 0; i < arraylength; i++)
	{
		if (min > arrayvar[i])
			min = arrayvar[i];
	}
	return min;

}
//question 10
void arraymult(int inputarray[], int arraylength, int outputarray[])
{


	for (int i = 0; i < arraylength; i++)
	{
		outputarray[i] = inputarray[i] * i;
		cout << outputarray[i] << endl;
	}
	
}

//question 11

void arraysum(int arrayin1[], int arrayin2[], int arraylength, int arrayout[])
{
	for (int i = 0; i < arraylength; i++)
	{
		arrayout[i] = arrayin1[i] + arrayin2[i];

		cout << arrayout[i] << endl;
	}
}
//question 12
void arraysequence( int array_input[], int arraylength)
{
	int sum = 0;
	for (int i = 0; i < arraylength; i++)
	{
		sum = sum + array_input[i];
		cout << sum << endl;


	}
}


//question 13
int onenum(int thearray[], int arraylength, int numfound)
{
	bool found = false;
	int i= 0;
	while (found == false)
	{
		
		if (i < arraylength)
		{
				
			if (thearray[i] == numfound)
			{
				found = true;
				numfound = i;
				return numfound;
			}
i++;
		}
		else
		{
			found = true;
			numfound = -1;
			return numfound;
		}

	}

}

//question 14
int Split(int inputarray[], int arraylength, int output1[], int output2[])
{	
	int countpos = 0;
	int countneg = 0;
	int current = 0;
	for (int i = 0; i < arraylength; i++)
		{
			current = inputarray[i];
				if (inputarray[i] >= 0)
			{
					output1[countpos] = inputarray[i];
					countpos++;
				}
else if (inputarray[i] < 0)
			{
				output2[countneg] = inputarray[i];
				countneg++;
}

		

			
	}
	return countpos;
}

//Question 15
int expo(int x, int y)
{

	for (int i = 0; i < y; i++)
	{
		x *= x;
	}


	return x;
}

//Question 16

void looknsay(int arrayz[], int arraylength)
{
	int count = 0;
	int countnum = 0;
	int j = 0;

	for (int i = 0; i < arraylength; i++)
	{
		count = 0;
		
		countnum = arrayz[i];


		for (int j = i; j < arraylength; j++)
		{
			if (countnum == arrayz[j])
			{
				i = j;
				count++;
			}
			else if (countnum != arrayz[j])
			{
				break;
			}
		}
		if (i == arraylength - 1)
		{
			cout << count << "," << countnum;
		}
		else
		{
			cout << count << "," << countnum << ",";
		}
	}

}
//Question 17
void rockpprscis()
{
	srand(time(NULL));
	int rps = 0;
	bool tie = false;
	char retry;
	int playerchoice;
	cout << "welcome to rock paper scissors \nTo play, please press 1 for rock, 2 for paper, or 3 for scissors" << endl;
	while (tie == false)
	{
		cin >> playerchoice;
		switch (playerchoice)
		{
		case 1:

			cout << "you have picked rock" << endl;
			rps = rand() % 3 + 1;
			break;
		case 2:
			cout << "you have picked paper" << endl;
			rps = rand() % 3 + 1;
			break;
		case 3:
			cout << "you have picked scissors" << endl;
			rps = rand() % 3 + 1;
			break;
		case 4:
			cout << "you have quit the game" << endl;
			tie = true;
		}
		if (playerchoice == rps)
		{
			cout << "it's a tie!, try again." << endl;
		}
		else if (playerchoice == 1)
		{
			if (rps == 2)
				cout << "your opponent has chosen paper, you lose!" << endl;
			else if (rps == 3)
				cout << "your oppenent has chosen scissors, you win!" << endl;
		}
		else if (playerchoice == 2)
		{
			if (rps == 1)
				cout << "your opponent has chosen rock, you win!" << endl;
			else if (rps == 3)
				cout << "your opponent has chosen scissors, you lose!" << endl;
		}
		else if (playerchoice == 3)
		{
			if (rps == 1)
				cout << "your opponent has chosen rock, you lose!" << endl;
			else if (rps == 2)
			{
				cout << "your opponent has chosen paper, you win!" << endl;

			}

		}
		if (playerchoice != rps)
		{
			cout << "play again? Y/N" << endl;
			cin >> retry;
			if (retry == 'N')
			{
				tie = true;
			}
			else if (retry == 'Y')
			{
				tie = false;
			}
		}
	}
}
int main()
{
	


	//int arrayinput[10] = { 1, -12, -15, 12, 3, 4, -21, 1, 24, 4 };
	//int negatives[10]{};
	//int positives[10] = {};
	//int result = Split(arrayinput, 10, negatives, positives);
	//cout << result << endl;
	//system("pause");
	//return 0;


	//ANSWERS AFTER QUESTION 1 WILL BE SUBMITTED AS FUNCTIONS.
	
	
//	question 1
//output is 1122321
//	int the_variable = 1;
//	PrintInteger(the_variable);
//	{
//		PrintInteger(the_variable);
//		int the_variable = 2;
//		PrintInteger(the_variable);
//		{
//			PrintInteger(the_variable);
//			int the_variable = 3;
//			PrintInteger(the_variable);
//		}
//		PrintInteger(the_variable);
//	}
//	PrintInteger(the_variable);
//	
//	question 6
//	int sum (int x, int y)
//	{
//		int result;
//		result = x + y;
//	}
//	you need to return the result or just return x + y
//	int sum(int n)
//	{
//		if (0 == n)
//			return 0;
//	else
//			n = n + n;
//	}
//	you need to return n in the else statement
//#include <iostream>
//	int main()
//	{
//		double x = 13.6;
//		std::cout << "square of 13.6 = " << square(x) << std::endl;
//	}
//}
//int square(int x)
//{
//	return x * x;
//}
//	 you need to initialize the int square function outside of the main function
	
//Question 8 code	
/*int integer_array[5] = { 7, 3, 2, 4, 9 };
	int result = arraysum(integer_array, 5);
	cout << result << endl;
	*/
	

	/*int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = arraymin(integer_array, 7);
	cout << result << endl;*/

//	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int output_array[7] = {};
//	arraymult(integer_array, 7 , output_array);
//system("pause");
//	return 0;

//question 9 check	
	//int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	//int result = arraymin(integer_array, 7);
	//cout << result << endl; 
	//system("pause");
	//return 0;

	//Question 10 check
	//int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	//int output_array[7] = {};
	//arraymult(integer_array, 7, output_array);
	//system("pause");
	//return 0;
//Question 11 check

	//int array1[5] = { 5, 10, 4, 12, 5 };
	//int array2[5] = { 7 , 2 , 0 , 4 , 6 };
	//int arrayout[5] = {};
	//arraysum(array1, array2, 5, arrayout);
	//system("pause");
	//return 0;

	//Question 12 check
	/*int arrayinput[5] = { 1, 2, 3, 4, 5 };
	arraysequence(arrayinput, 5);
	system("pause");*/
	
	//Question 13 check
	//int arrayinput[5] = { 1 , 2 , 3 , 4 , 5 };
	//int numfound;
	//cin >> numfound;
	//int result = onenum(arrayinput, 5, numfound);
	//cout << result << endl;
	

	//Question 14 check
//int arraynums[5] = { 4 , 5, -2 , 12 , -5 };
//int arrout1[5];
//int arrout2[5];
//	int result = Split(arraynums, 5, arrout1, arrout2);
//	cout << result << endl;
	
	
	
//question 15 test code

//int onenum = 5;
//int twonum = 10;
//int result = expo(onenum, twonum);
//cout << result << endl;

	//question 16 test code

//int arrayz[10] = { 1,1,1,2,3,3,2,4,4,5 };
//
//looknsay(arrayz, 10);


//Question 17 test
rockpprscis();
	
	
	
	system("pause");
	return 0;

}


