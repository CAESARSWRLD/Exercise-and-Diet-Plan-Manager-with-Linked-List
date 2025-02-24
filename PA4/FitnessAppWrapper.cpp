#include "FitnessAppWrapper.hpp"


void FitnessAppWrapper::loadDailyExercisePlan(std::ifstream& inputfile, Node*& pHead_exercise)
{
	ExercisePlan plan;

	inputfile >> plan;

	Node* newNode = new Node(plan);

	if (pHead_exercise == nullptr)
	{
		pHead_exercise = newNode;

		pTail_exercise = newNode;

	}
	else
	{
		pTail_exercise->pNext = newNode;

		pTail_exercise = newNode;
	}
}

void FitnessAppWrapper::loadWeeklyExercisePlan(std::ifstream& inputfile, Node*& pHead_exercise)
{
	for (int i = 0; i < 8; ++i)
	{
		loadDailyExercisePlan(inputfile, pHead_exercise);
	}
}

inline void FitnessAppWrapper::displayMenu()
{
    std::cout << "1. Load weekly diet plan from file\n";
    std::cout << "2. Load weekly exercise plan from file\n";
    std::cout << "3. Store weekly diet plan to file\n";
    std::cout << "4. Store weekly exercise plan to file\n";
    std::cout << "5. Display weekly diet plan to screen\n";
    std::cout << "6. Display weekly exercise plan to screen\n";
    std::cout << "7. Edit daily diet plan\n";
    std::cout << "8. Edit daily exercise plan\n";
    std::cout << "9. Exit\n";
}

void FitnessAppWrapper::runApp()
{
	int choice = 0;

	bool exited = false;

	while (!exited)
	{
		displayMenu();
		std::cout << "Enter you choice:\n";
		std::cin >> choice;
		std::cin.ignore();



        switch (choice) 
        {
        case 1:
            // Option 1: Load weekly diet plan from file
            std::cout << "Loading weekly diet plan from file...\n";
            // call loadWeeklyDietPlan() or equivalent
            break;
        case 2:
            // Option 2: Load weekly exercise plan from file
            std::cout << "Loading weekly exercise plan from file...\n";
            // call loadWeeklyExercisePlan() or equivalent
            break;
        case 3:
            // Option 3: Store weekly diet plan to file
            std::cout << "Storing weekly diet plan to file...\n";
            // call storeWeeklyDietPlan() or equivalent
            break;
        case 4:
            // Option 4: Store weekly exercise plan to file
            std::cout << "Storing weekly exercise plan to file...\n";
            // call storeWeeklyExercisePlan() or equivalent
            break;
        case 5:
            // Option 5: Display weekly diet plan to screen
            std::cout << "Displaying weekly diet plan...\n";
            // call displayWeeklyDietPlan() or equivalent
            break;
        case 6:
            // Option 6: Display weekly exercise plan to screen
            std::cout << "Displaying weekly exercise plan...\n";
            // call displayWeeklyExercisePlan() or equivalent
            break;
        case 7:
            // Option 7: Edit daily diet plan
            std::cout << "Editing daily diet plan...\n";
            // call editDailyDietPlan() or equivalent
            break;
        case 8:
            // Option 8: Edit daily exercise plan
            std::cout << "Editing daily exercise plan...\n";
            // call editDailyExercisePlan() or equivalent
            break;
        case 9:
            //exit
            std::cout << "Exiting program\n";
            exited = true;
            break;
        default:
            std::cout << "Invalid input\n";
            break;
        }
	}
}


void FitnessAppWrapper::loadDailyDietPlan(std::ifstream& inputfile, Node*& pHead_exercise)
{
	DietPlan plan;

	inputfile >> plan;

	Node* newNode = new Node(plan);

	if (pHead_diet == nullptr)
	{
		pHead_diet = newNode;

		pTail_diet = newNode;

	}
	else
	{
		pTail_diet->pNext = newNode;

		pTail_diet = newNode;
	}
}

void FitnessAppWrapper::loadWeeklyDietPlan(std::ifstream& inputfile, Node*& pHead_diet)
{
	for (int i = 0; i < 8; ++i)
	{
		loadDailyExercisePlan(inputfile, pHead_diet);
	}
}