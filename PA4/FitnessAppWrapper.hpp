#ifndef FITNESSAPPWRAPPER_HPP
#define FITNESSAPPWRAPPER_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "DietPlan.hpp"
#include "ExercisePlan.hpp"
#include "Node.hpp"
#include "linkedList.hpp"


class FitnessAppWrapper
{

private:
    Node* pHead_diet = nullptr;
    Node* pTail_diet = nullptr;
    Node* pHead_exercise = nullptr;
    Node* pTail_exercise = nullptr;


    //some of the parameters in these functions are irrelevant because I changed some functions after initially making them
    void loadDailyExercisePlan(std::ifstream& inputfile, Node*& pHead_exercise, linkedList*& list);
    void loadWeeklyExercisePlan(std::ifstream& inputfile, Node*& pHead, linkedList*& list);

    void loadDailyDietPlan(std::ifstream& inputfile, Node*& pHead_diet, linkedList*& list);
    void loadWeeklyDietPlan(std::ifstream& inputfile, Node*& pHead, linkedList*& list);


    void storeWeeklyDietPlan(std::ofstream& outputfile, Node*& pHead, linkedList*& list, bool exited);
    void storeDailyDietPlan(std::ofstream& outputfile, Node* tempNode, linkedList*& list, bool exited);

    void storeWeeklyExercisePlan(std::ofstream& outputfile, Node*& pHead, linkedList*& list, bool exited);
    void storeDailyExercisePlan(std::ofstream& outputfile, Node* tempNode, linkedList*& list, bool exited);

    void displayWeeklyPlan_diet() const {}
    void displayDailyPlan_diet(Node* tempNode) const {}

public:

    Node* getpHead_diet()
    {
        return pHead_diet;
    }

    Node* getpTail_diet()
    {
        return pTail_diet;
    }

    Node* getpHead_exercise()
    {
        return pHead_exercise;
    }

    Node* getpTail_exercise()
    {
        return pTail_exercise;
    }


    

    FitnessAppWrapper() : pHead_diet(nullptr), pTail_diet(nullptr), pHead_exercise(nullptr), pTail_exercise(nullptr) {}

    void displayMenu();
    void runApp();
};

#endif