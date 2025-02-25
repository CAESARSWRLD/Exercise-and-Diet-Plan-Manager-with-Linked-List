#include "FitnessAppWrapper.hpp"
#include <fstream>
#include <string>
#include <iostream>


std::istream& FitnessAppWrapper::operator>>(std::istream& inputfile, Node*& pHead_diet)
{
    DietPlan plan;

    inputfile >> plan;  // Use the operator>> for DietPlan that we defined earlier

    if (!inputfile) {
        std::cerr << "Failed to read a diet plan!" << std::endl;
        return inputfile;
    }

    Node* newNode = new Node(plan);

    if (pHead_diet == nullptr) {
        pHead_diet = newNode;
        pTail_diet = newNode;  // Initialize pTail_diet to the first node
    }
    else {
        pTail_diet->pNext = newNode;
        pTail_diet = newNode;  // Update pTail_diet to the new node
    }

    return inputfile;
}



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

void FitnessAppWrapper::displayDailyDietPlan(int dayIndex)
{
    Node* current = pHead_diet;

    // Traverse the list until we reach the desired day index (0-based)
    for (int i = 0; current != nullptr && i < dayIndex; ++i) {
        current = current->pNext;  // Move to the next day
    }

    // If the day exists, print it. Otherwise, show a message that the day is invalid
    if (current != nullptr) {
        std::cout << "Diet Plan for Day " << (dayIndex + 1) << ":\n";
        std::cout << current->dietPlan << std::endl;  // Assuming you've overloaded the `<<` operator for `DietPlan`
    }
    else {
        std::cout << "Invalid day index. No diet plan found for the specified day." << std::endl;
    }
}


void FitnessAppWrapper::displayWeeklyDietPlan()
{
    std::cout << "Weekly Diet Plan:\n";
    // Loop through each day and display its diet plan
    for (int i = 0; i < 7; ++i) {
        displayDailyDietPlan(i);  // Display each day's diet plan (0 to 6)
    }
}

inline void FitnessAppWrapper::displayMenu()
{
    std::cout << "(1) Load weekly diet plan from file\n";
    std::cout << "(2) Load weekly exercise plan from file\n";
    std::cout << "(3) Store weekly diet plan to file\n";
    std::cout << "(4) Store weekly exercise plan to file\n";
    std::cout << "(5) Display weekly diet plan to screen\n";
    std::cout << "(6) Display weekly exercise plan to screen\n";
    std::cout << "(7) Edit daily diet plan\n";
    std::cout << "(8) Edit daily exercise plan\n";
    std::cout << "(9) Exit\n";
}

void FitnessAppWrapper::runApp()
{
    std::ifstream inputFileDiet;
    inputFileDiet.open("dietPlan.txt");

    if (!inputFileDiet)
    {
    std:: cout << "ERROR ERROR";
    }
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
            std::cout << "Loading weekly diet plan from file...\n";
            loadWeeklyDietPlan(inputFileDiet, pHead_diet);
            break;
        case 2:
            // Option 2: Load weekly exercise plan from file
            std::cout << "Loading weekly exercise plan from file...\n";
            // call loadWeeklyExercisePlan() or equivalent
            break;
        case 3:
            std::cout << "Storing weekly diet plan to file...\n";
            // call storeWeeklyDietPlan() or equivalent
            break;
        case 4:
            std::cout << "Storing weekly exercise plan to file...\n";
            // call storeWeeklyExercisePlan() or equivalent
            break;
        case 5:
            std::cout << "Displaying weekly diet plan...\n";
            displayWeeklyDietPlan();
            break;
        case 6:
            std::cout << "Displaying weekly exercise plan...\n";
            // call displayWeeklyExercisePlan() or equivalent
            break;
        case 7:
            // Option 7: Edit daily diet plan
            std::cout << "Editing daily diet plan...\n";
            // call editDailyDietPlan() or equivalent
            break;
        case 8:
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


void FitnessAppWrapper::loadDailyDietPlan(std::ifstream& inputfile, Node*& pHead_diet)
{
    DietPlan plan;

    inputfile >> plan;

    if (!inputfile) {
        std::cerr << "Failed to read a diet plan!" << std::endl;
        return;
    }

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
	for (int i = 0; i < 7; ++i)
	{
		loadDailyDietPlan(inputfile, pHead_diet);
	}
}