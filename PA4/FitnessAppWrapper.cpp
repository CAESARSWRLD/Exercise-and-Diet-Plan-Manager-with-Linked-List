#include "FitnessAppWrapper.hpp"


void FitnessAppWrapper::loadDailyDietPlan(std::ifstream& inputfile, DietPlan dailyPlan[])//loads one record from the stream
{
	std::string line;

	
	

	std::getline(inputfile, line);
	std::cout << line << std::endl;
	dailyPlan->name = line;

	std::cout << dailyPlan->name << std::endl;


	std::getline(inputfile, line);
	std::cout << line << std::endl;
	dailyPlan->goal_calories = std::stoi(line);

	std::cout << dailyPlan->goal_calories << std::endl;


	std::getline(inputfile, line);
	std::cout << line << std::endl;
	dailyPlan->date = std::stoi(line);

	std::cout << dailyPlan->date << std::endl;


	std::cout << line << std::endl;

	
}

void FitnessAppWrapper::loadDailyExercisePlan(std::ifstream& inputfile, ExercisePlan dailyPlan[])//loads one record from the stream
{
	

	std::string line;

	//setter implementation
	//DietPlan::set_goal_calories();

	std::getline(inputfile, line);
	std::cout << line << std::endl;
	dailyPlan->name = line;

	std::cout << dailyPlan->name << std::endl;


	std::getline(inputfile, line);
	std::cout << line << std::endl;
	dailyPlan->goal_steps = std::stoi(line);

	std::cout << dailyPlan->goal_steps << std::endl;


	std::getline(inputfile, line);
	std::cout << line << std::endl;
	dailyPlan->date = std::stoi(line);

	std::cout << dailyPlan->date << std::endl;


	std::cout << line << std::endl;
}

void FitnessAppWrapper::loadWeeklyExercisePlan(std::ifstream& inputfile, ExercisePlan weeklyPlan[])
{
	Node* pHead = new Node();
	
	ExercisePlan plan;

	std::string line;

	int j = 0;
	while (j < 7)//loop and read through the whole week
	{

		std::cin >> plan;
		pHead->first_node_string = line;
		std::cout << pHead->first_node_string << std::endl;



		std::getline(inputfile, line);
		int goalcals = std::stoi(line);
		pHead->node_integerValue = goalcals;
		std::cout << pHead->node_integerValue << std::endl;



		std::getline(inputfile, line);
		pHead->second_node_string = line;
		std::cout << pHead->second_node_string << std::endl;


		std::getline(inputfile, line);

		pHead->pNext = pHead;
		j++;
	}

	delete pHead;
}

void  FitnessAppWrapper::loadWeeklyDietPlan(std::ifstream& inputfile, DietPlan dailyPlan[])
{
	Node* pHead = new Node();

	std::string line;

	int j = 0;
	while (j < 7)//loop and read through the whole week
	{

		std::getline(inputfile, line);
		pHead->first_node_string = line;
		std::cout << pHead->first_node_string << std::endl;



		std::getline(inputfile, line);
		int goalcals = std::stoi(line);
		pHead->node_integerValue = goalcals;
		std::cout << pHead->node_integerValue << std::endl;



		std::getline(inputfile, line);
		pHead->second_node_string = line;
		std::cout << pHead->second_node_string << std::endl;


		std::getline(inputfile, line);

		j++;
	}

	delete pHead;
}

void FitnessAppWrapper::displayMenu()
{
	std::cout << "Menu:\n(1) Load weekly diet plan from file\n(2) Load weekly exercise plan from file\n(3) Store weekly diet plan to file" << std::endl;
	std::cout << "(4) Store weekly exercise plan to file\n(5) Display weekly diet plan to screen\n(6) Diplay weekly exercise plan to screen" << std::endl;
	std::cout << "(7) Edit daily diet plan\n(8) Edit daily exercise plan\n(9) Exit" << std::endl;
}

void FitnessAppWrapper::storeWeeklyDietPlanToFile(std::ifstream& inputfile, ExercisePlan weeklyPlan[])
{

}

void FitnessAppWrapper::storeWeeklyExercisePlanToFile(std::ifstream& inputfile, ExercisePlan weeklyPlan[])
{

}



void FitnessAppWrapper::runApp()
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

	DietPlan* myDietPlanArray = new DietPlan[1];

	ExercisePlan* weeklyExercisePlanArray = new ExercisePlan[1];


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
		case 2://load weekly exercise plan
			loadWeeklyExercisePlan(inFileExercisePlan, weeklyExercisePlanArray);
			break;
		case 3://store weekly diet plan to file
			
			break;
		case 4://store weekyly exercise plan to file

			break;
		case 5://display weekly diet plan to screen

			break;
		case 6://display weekly exercise plan to screen

			break;
		case 7://edit daily diet plan

			break;
		case 8://edit daily exercise plan

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