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

class FitnessAppWrapper
{
private:
    Node* pHead_diet = nullptr;
    Node* pTail_diet = nullptr;
    Node* pHead_exercise = nullptr;
    Node* pTail_exercise = nullptr;

    void loadDailyExercisePlan(std::ifstream& inputfile, Node*& pHead_exercise); // loads one record from the stream
    void loadDailyDietPlan(std::ifstream& inputfile, Node*& pHead_diet);         // loads one record from the stream
    void loadWeeklyDietPlan(std::ifstream& inputfile, Node*& pHead);
    void loadWeeklyExercisePlan(std::ifstream& inputfile, Node*& pHead);
    void displayDailyDietPlan(int dayIndex);
    void displayWeeklyDietPlan();

public:
    // Declare operator>> function without definition in the class
    std::istream& operator>>(std::istream& inputfile, Node*& pHead_diet);

    FitnessAppWrapper() : pHead_diet(nullptr), pTail_diet(nullptr), pHead_exercise(nullptr), pTail_exercise(nullptr) {}

    void displayMenu();
    void runApp();
};

#endif