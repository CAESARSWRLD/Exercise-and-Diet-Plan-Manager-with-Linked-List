#ifndef FITNESSAPPWRAPPER_HPP
#define FITNESSAPPWRAPPER_HPP
#include <iostream>
#include <string>
#include <fstream>

class FitnessAppWrapper
{

	private:

		void loadDailyPlan(std::ifstream& inputfile)
		{
			std::string line;

			while (std::getline(inputfile, line))
			{
			std::cout << line << std::endl;
			}
		}

	//void loadDailyPlan(ifstream &fileStream)


	public:

		void displayMenu()
		{
			std::cout << "Menu:\n(1) Load weekly diet plan from file\n(2) Load weekly exercide plan from file\n(3) Store weekly diet plan to file" << std::endl;
			std::cout << "(4) Store weekly exercise plan to file\n(5) Display weekly die plan to screen\n(6) Diplay weekly exercise plan to screen" << std::endl;
			std::cout << "(7) Edit daily diet plan\n(8) Edit daily exercise plan\n(9) Exit" << std::endl;

		}

		void FitnessAppWrapper::runApp()
		{
			int choice = 0;

			displayMenu();

			std::cin >> choice;


			switch (choice)
			{
			case 1:
			
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:

				break;
			case 7:

				break;
			case 8:

				break;
			case 9:

				break;
			default:
				std::cout << "error. Invalid input";

			}
			std::cout << "your choice: " << choice << std::endl;
		}
	


	char diet_plan[7];
	char exercise_plan[7];


	
	


};


#endif