#ifndef DIETPLAN_HPP
#define DIETPLAN_HPP
#include <string>
#include <fstream>
#include <iostream>


class ExercisePlan;

class DietPlan
{
	

private:

    int goal_calories;
    std::string name;
    std::string date;



	friend std::ostream& operator<<(std::ostream& output, const DietPlan& plan);
	friend std::ifstream& operator>>(std::ifstream& input, DietPlan& plan);


public:


	//default constructor
	DietPlan() : goal_calories(0), name(""), date("") {}

	//destructor
	~DietPlan()
	{
		//the cout can be uncommented to check the effectiveness of the destructor. 
		//the destructor is called too often because i used a linked list. the data is stored in the nodes.


		//std::cout << "\ndiet plan class destroyed\n";
	}

	//copy constructor
	DietPlan(const DietPlan& plan) : name(plan.name), goal_calories(plan.goal_calories), date(plan.date) {}

	DietPlan(int calories, const std::string& plan_name, const std::string& plan_date)
        : goal_calories(calories), name(plan_name), date(plan_date) {}

	

	std::string getDate() const
	{
		return date;
	}

	int getGoalCalories() const
	{
		return goal_calories;
	}

	std::string getName() const 
	{
		return name;
	}


	void setGoalCalories(int goal)
	{
		goal_calories = goal;
	}

	void setPlanName(const std::string& new_name)
	{
		name = new_name;
	}

	void setDate(const std::string& new_date)
	{
		date = new_date;
	}

	


	
	
};





#endif //DIETPLAN_HPP