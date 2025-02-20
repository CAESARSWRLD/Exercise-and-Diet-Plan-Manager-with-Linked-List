#ifndef EXERCISEPLAN_HPP
#define EXERCISEPLAN_HPP
#include <string>

class ExercisePlan
{
public:

	int goal_steps;
	std::string plan_name;
	std::string date;

	ExercisePlan(int goal_steps, std::string plan_name, std::string date)
	{
		this->goal_steps = goal_steps;
		this->plan_name = plan_name;
		this->date = date;
	}
};

//template <class T>
//T add(T& lhs, T& rhs);


#endif