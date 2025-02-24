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


	Node* pHead_diet;
	Node* pTail_diet;
	Node* pHead_exercise;
	Node* pTail_exercise;



	void loadDailyExercisePlan(std::ifstream& inputfile, Node*& pHead_exercise);//loads one record from the stream
	
	void loadDailyDietPlan(std::ifstream& inputfile, Node*& pHead);//loads one record from the stream
	
	void loadWeeklyDietPlan(std::ifstream& inputfile, Node*& pHead);

	void loadWeeklyExercisePlan(std::ifstream& inputfile, Node*& pHead);

	void displayDailyDietPlan();

	void displayWeeklyDietPlan();

	

	
	
public:
	
	FitnessAppWrapper() : pHead_diet(nullptr), pTail_diet(nullptr), pHead_exercise(nullptr), pTail_exercise(nullptr) {}

	void displayMenu();

	void runApp(void);

};





#endif