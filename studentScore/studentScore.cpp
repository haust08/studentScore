// Hailee Austin
// Date: 9/14/2022
// Program Title: Student Score
// Program Description: Program will read student scores and calculate the average

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> // header file for input output file


using namespace std;

int main()
{
	string name1, name2, name3;
	double score1, score2, score3, score4, score5, score6, score7, score8, score9;
	double avg1, avg2, avg3;

	// Declaring file stream variables
	ifstream inData;
	ofstream outData;

	//Open the input output files
	inData.open("score.txt");
	outData.open("score_output.out");


	// Code for data manipulation
	getline(inData, name1);
	inData >> score1 >> score2 >> score3;
	inData.ignore();

	getline(inData, name2);
	inData >> score4 >> score5 >> score6;
	inData.ignore();

	getline(inData, name3);
	inData >> score7 >> score8 >> score9;

	// Calculations
	avg1 = (score1 + score2 + score3) / 3;
	avg2 = (score4 + score5 + score6) / 3;
	avg3 = (score7 + score8 + score9) / 3;

	//Output to the file
	outData << fixed << showpoint << setprecision(2);

	outData << setw(25) << left << "Name" << setw(9) << "Score 1" << setw(9) << "Score 2" << setw(9) << "Score 3" << setw(9) << "Average" << endl;
	outData << setw(25) << left << name1 << setw(9) << score1 << setw(9) << score2 << setw(9) << score3 << setw(9) << avg1 << endl;
	outData << setw(25) << left << name2 << setw(9) << score4 << setw(9) << score5 << setw(9) << score6 << setw(9) << avg2 << endl;
	outData << setw(25) << left << name3 << setw(9) << score7 << setw(9) << score8 << setw(9) << score9 << setw(9) << avg3 << endl;

	//Output to the screen
	cout << "Processing data" << endl;
	cout << "Please check score_output.out" << endl;

	// Closing the files
	inData.close();
	outData.close();

	return 0;
}
