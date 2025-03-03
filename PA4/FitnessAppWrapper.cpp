#define _CRT_SECURE_NO_WARNINGS
#include "FitnessAppWrapper.hpp"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstring>
#include "Node.hpp"
#include "linkedList.hpp"
#include <limits>


void FitnessAppWrapper::displayMenu()
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

	int choice = 0;

	bool exited = false;

    linkedList* list = new linkedList();

	while (!exited)
	{
		displayMenu();
		std::cout << "Enter your choice:\n";
		std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            switch (choice)
            {
            case 1:
            {
                std::ifstream inputFileDiet;
                inputFileDiet.open("dietPlans.txt");


                if (!inputFileDiet)
                {
                    std::cout << "ERROR OPENING THE DIET TXT FILE\n\n";
                }



                std::cout << "Loading weekly diet plan from file...\n";
                loadWeeklyDietPlan(inputFileDiet, pHead_diet, list);

                inputFileDiet.close();
            break;
            }
            case 2:
            {


                std::ifstream inputFileExercise;
                inputFileExercise.open("exercisePlans.txt");




                if (!inputFileExercise)
                {
                    std::cout << "ERROR OPENING THE EXERCISE TXT FILE\n\n";
                }


                std::cout << "Loading weekly exercise plan from file...\n";
                loadWeeklyExercisePlan(inputFileExercise, pHead_exercise, list);

                inputFileExercise.close();
                break;
            }
            case 3:
            {
                std::ofstream outputFileDiet;
                outputFileDiet.open("dietResults.txt");

                    if (!outputFileDiet.is_open())
                    {
                        std::cout << "could not open txt file";
                    }

                storeWeeklyDietPlan(outputFileDiet, pHead_diet, list, exited);
                std::cout << "Storing weekly diet plan to file...\n";

                outputFileDiet.close();
                break;
            }
            case 4:
            {

                std::ofstream outputFileExercise;
                outputFileExercise.open("exerciseResults.txt");

                    if (!outputFileExercise.is_open())
                    {
                        std::cout << "could not open txt file";
                    }


                storeWeeklyExercisePlan(outputFileExercise, pHead_exercise, list, exited);


                std::cout << "Storing weekly exercise plan to file...\n";
                outputFileExercise.close();
                break;
            }
            case 5:
            {
                std::cout << "Displaying weekly diet plan...\n";
                list->displayWeeklyPlan_diet();
                break;
            }
            case 6:
            {
                std::cout << "Displaying weekly exercise plan...\n";
                list->displayWeeklyPlan_exercise();
                break;
            }
            case 7:
            {

                std::cout << "Editing daily diet plan...\n";
                list->editGoalCalories();
                break;
            }
            case 8:
            {
                std::cout << "Editing daily exercise plan...\n";
                list->editGoalSteps();
                break;
            }
            case 9:
            {
                //exit
                std::cout << "Exiting program\n";
                exited = true;
                break;
            }
            default:
            {
                std::cout << "Invalid input\n";
                break;
            }
        }
	}

    delete list;
}

void FitnessAppWrapper::loadDailyExercisePlan(std::ifstream& inputfile, Node*& pHead_exercise, linkedList*& list)
{
    ExercisePlan plan;

    inputfile >> plan;

    std::string line_str;

    list->insertEnd_exercise(plan);
    std::getline(inputfile, line_str, '\n');//skip a line
}

void FitnessAppWrapper::loadWeeklyExercisePlan(std::ifstream& inputfile, Node*& pHead_exercise, linkedList*& list)
{
    for (int i = 0; i < 7; ++i)
    {
        if (!inputfile)
        {
            return;
        }


        loadDailyExercisePlan(inputfile, pHead_diet, list);
    }
}

void FitnessAppWrapper::storeWeeklyExercisePlan(std::ofstream& outputfile, Node*& pHead, linkedList*& list, bool exited)
{

    Node* tempNode = list->get_pHead();


    while (tempNode != nullptr)
    {
        storeDailyExercisePlan(outputfile, tempNode, list, exited);
        tempNode = tempNode->pNext;
    }

}

void FitnessAppWrapper::storeDailyExercisePlan(std::ofstream& outputfile, Node* tempNode, linkedList*& list, bool exited)
{

    if (!outputfile.is_open())
    {
        std::cout << "failed to open txt file for writing\n";
        exited = true;
        return;
    }

    outputfile << *(tempNode->exercisePlan);

}

void FitnessAppWrapper::storeWeeklyDietPlan(std::ofstream& outputfile, Node*& pHead, linkedList*& list, bool exited)
{

    Node* tempNode = list->get_pHead();


    while (tempNode != nullptr)
    {
        storeDailyDietPlan(outputfile, tempNode, list, exited);
        tempNode = tempNode->pNext;
    }

}

void FitnessAppWrapper::storeDailyDietPlan(std::ofstream& outputfile, Node* tempNode, linkedList*& list, bool exited)
{

    if (!outputfile.is_open())
    {
        std::cout << "failed to open txt file for writing\n";
        exited = true;
        return;
    }

    outputfile << *(tempNode->dietPlan);
    
}

void FitnessAppWrapper::loadDailyDietPlan(std::ifstream& inputfile, Node*& pHead_diet, linkedList*& list)
{
    DietPlan plan;



    inputfile >> plan;

   

    list->insertEnd_diet(plan);

    std::string line_str;
    std::getline(inputfile, line_str, '\n');//skip a line
}

void FitnessAppWrapper::loadWeeklyDietPlan(std::ifstream& inputfile, Node*& pHead_diet, linkedList*& list)
{
	for (int i = 0; i < 7; ++i)
	{
        if (!inputfile)
        {
            return;
        }

		loadDailyDietPlan(inputfile, pHead_diet, list);

	}
}