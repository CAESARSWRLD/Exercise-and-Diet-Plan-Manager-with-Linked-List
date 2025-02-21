#include "FitnessAppWrapper.hpp"


void loadDailyDietPlan(std::ifstream& inputfile, DietPlan weeklyPlan[])//loads one record from the stream
{
	std::string line;

	int i = 0;
	while (i < 4)
	{

		std::getline(inputfile, line);
		std::cout << line << std::endl;

		weeklyPlan[i].name = line;
		i++;

	}
}

void loadDailyExercisePlan(std::ifstream& inputfile, ExercisePlan weeklyPlan[])//loads one record from the stream
{
	std::string line;

	int i = 0;
	while (i < 4)
	{

		std::getline(inputfile, line);
		std::cout << line << std::endl;

		weeklyPlan[i].name = line;
		i++;

	}
}

void loadWeeklyExercisePlan(std::ifstream& inputfile, ExercisePlan weeklyPlan[])
{
	std::string line;

	int j = 0;
	while (j < 7)//loop read through the whole week
	{
		int i = 0;
		while (i < 4)
		{

			std::getline(inputfile, line);
			std::cout << line << std::endl;

			weeklyPlan[i].name = line;
			i++;

		}
		j++;
	}
}

void loadWeeklyDietPlan(std::ifstream& inputfile, DietPlan weeklyPlan[])
{
	std::string line;

	int j = 0;
	while (j < 7)//loop read through the whole week
	{
		int i = 0;
		while (i < 4)
		{

			std::getline(inputfile, line);
			std::cout << line << std::endl;

			weeklyPlan[i].name = line;
			i++;

		}
		j++;
	}
}

void displayMenu()
{
	std::cout << "Menu:\n(1) Load weekly diet plan from file\n(2) Load weekly exercise plan from file\n(3) Store weekly diet plan to file" << std::endl;
	std::cout << "(4) Store weekly exercise plan to file\n(5) Display weekly diet plan to screen\n(6) Diplay weekly exercise plan to screen" << std::endl;
	std::cout << "(7) Edit daily diet plan\n(8) Edit daily exercise plan\n(9) Exit" << std::endl;

}



void runApp()
{


	std::ifstream inFileDietPlan("dietPlans.txt");

	if (inFileDietPlan.is_open())
	{
		std::cout << "diet plan file opened\n";
	}
	else
	{
		std::cout << "failed to open diet plan file\n";
	}


	std::ifstream inFileExercisePlan("exercisePlans.txt");

	if (inFileExercisePlan.is_open())
	{
		std::cout << "exercise plan file opened\n";
	}
	else
	{
		std::cout << "failed to open exercise plan file\n";
	}

	//std::vector<int> myDietVector[120];

	DietPlan myDietPlanArray[120];





	ExercisePlan weeklyExercisePlanArray[120];


	bool exited = false;
	//exited is never actually set to true. The program is exited with exit(0) when the user selects option 9.

	while (!exited)
	{


		int choice = 0;

		displayMenu();//shows menu choices

		std::cin >> choice;

		switch (choice)
		{
		case 1://load weekly diet plan from the file

			loadWeeklyDietPlan(inFileDietPlan, myDietPlanArray);
			break;
		case 2:
			loadWeeklyExercisePlan(inFileExercisePlan, weeklyExercisePlanArray);
			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8:

			break;
		case 9:

			///exit program should also write the most recent weekly plans to the correspoding files
			std::cout << "...Exiting program...";

			exited = true;

			break;


		}





	}

	exit(0);
	char diet_plan[7];
	char exercise_plan[7];
}












