/*
//Tristan Watne
//Comp Sci 1 - CCCS
//Chapter 9 Program
//Write a Program that reads students' names followed by their test scores
//A.the program should output each student's name followed by their test scores and the relevant Grade
//B.It should also find and print the highest score and the names of the students having the highest test score.
//C.Students data should be stored ina struct variable of the type student studentType, which has 4 components
//.. studentFName and studentLName of type string,
//..testScore of type int (testScore is between 0 and 99).
//..and grade of type char
//suppose that the class has 20 students. use an array of 20 components of the type StudentType
//Your program must contain at least the following functions:
//..A function to read the students' data into the array
//..A function to assign the relevant grade to each student.
//..A function to find the highest test score.
//..A function to print the names of the students having the highest test score.
//Your program must output each student's name in this form:
//..last name followed by a comma, followed by a space, followed by the first name;
//..the name must left justified.
//..moreover, other than declaring the variable and open the input and output files, the fucntion main should only be a collection of function calls.
//
*/
#include <iostream>
#include <fstream>
#include <string>


//declare structure 
struct studentType
{
	std::string studentFname[20];
	std::string studentLname[20];
	int testScore[20];
	char grade[20];
};

//declare functions
void read_data_into_array();
void assign_grade_to_each_student();
std::string find_highest_test_score(std::string score);
void announce_winner();



int main()
{
	void read_data_into_array();
	void assign_grade_to_each_student();
	void announce_winner();

	system("pause");
	return 0;

}

void read_data_into_array()
{
	int location;
	studentType studentFtype;
	studentType studentLname;
	studentType testscore;

	//open files 
	std::ifstream infile("ex2data.txt");
	if (infile.is_open())
	{

		//loop through text to place in array
		for (int i = 0; i < 20; ++i)
		{
			infile >> studentType.studentfname[i]
				>> studentType.studentlname[i]
				>> studentType.testscore[i];
		}
	}
}

void  assign_grade_to_each_student()
{
	//variable for position in String
	int gradePercent;

	//loop though reading first of numbers, adding 1 for double digit and then transpose score
	//to char grade following numberic score
	for (int i = 0; i < 20; ++i)
	{
		gradePercent = studentType.testscore[i];

		if (gradePercent > 100 && gradePercent < 90)
		{
			grade.insert(studentType.grade[i], 'A')
		}
		else if (gradePercent > 90 && gradePercent < 80)
		{
			studentType.grade.insert(studentType.grade[i], 'B')
		}
		else if (gradePercent > 70 && gradePercent < 60)
		{
			studentType.grade.insert(studentType.grade[i], 'C')
		}
		else if (gradePercent > 50 && gradePercent < 60)
		{
			studentType.grade.insert(studentType.grade[i], 'D')
		}
		else
		{
			studentType.grade.insert(studentType.grade[i], 'F')
		}
	}
}

std::string find_highest_test_score(std::string score)
{
	int currentScore;
	int highestScore;
	std::string score;

	highestScore = 0;

	for (int i = 0; i < 20; ++i)
	{
		currentScore = studentType[i].find_first_of("0123456789");

		//if the score is higher than the last score, copy the whole array component to score
		if (currentScore > highestScore)
		{
			score = studentType[i];
		}

	}
	return score;
}
void announce_winner()
{
	std::string winner;
	//call highest score function
	std::string find_highest_test_score(winner)

		//output winner string
		std::cout << "The winner is " << winner << std::endl;

}