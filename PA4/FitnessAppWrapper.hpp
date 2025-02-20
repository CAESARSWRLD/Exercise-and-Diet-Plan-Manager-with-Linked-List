#ifndef FITNESSAPPWRAPPER_HPP
#define FITNESSAPPWRAPPER_HPP
#include <iostream>
class FitnessAppWrapper
{
	public:

		

		void displayMenu()
		{
			std::cout << "Menu:\n(1) Load weekly diet plan from file\n(2) Load weekly exercide plan from file\n(3) Store weekly diet plan to file" << std::endl;
			std::cout << "(4) Store weekly exercise plan to file\n(5) Display weekly die plan to screen\n(6) Diplay weekly exercise plan to screen" << std::endl;
			std::cout << "(7) Edit daily diet plan\n(8) Edit daily exercise plan\n(9) Exit" << std::endl;

		}

	char diet_plan[7];
	char exercise_plan[7];


};


#endif