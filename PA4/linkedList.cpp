#include "linkedList.hpp"
#include "Node.hpp"
#include <cstring>

void linkedList::displayWeeklyPlan_diet() const
{
	Node* tempNode = pHead;
	while (tempNode)
	{
		displayDailyPlan_diet(tempNode);

		tempNode = tempNode->pNext;
	}
}

void linkedList::displayDailyPlan_diet(Node* tempNode)const
{
	std::cout << *(tempNode->dietPlan) << std::endl;
}

void linkedList::displayWeeklyPlan_exercise() const
{
	Node* tempNode = pHead;
	while (tempNode)
	{
		displayDailyPlan_exercise(tempNode);

		tempNode = tempNode->pNext;
	}
}

void linkedList::displayDailyPlan_exercise(Node* tempNode) const
{
	std::cout << *(tempNode->exercisePlan) << std::endl;
}

void linkedList::editGoalCalories()const
{
    std::string plan_name;
    Node* tempNode = pHead;
    std::cout << "What's the name of the diet plan you would like to edit?:\n";
    std::cin >> plan_name;

    //std::cout << "You chose: " << plan_name << std::endl;
    int loops = 0;
    while (tempNode != nullptr && loops < 30)
    {
        //std::cout << "checking node: " << tempNode->dietPlan->getName() << std::endl;

        if (std::strcmp(tempNode->dietPlan->getName().c_str(), plan_name.c_str()) == 0)
        {
            std::cout << "Plan name found!\n";

            int newGoal;
            std::cout << "Enter the new goal calories:\n";
            std::cin >> newGoal;

            tempNode->dietPlan->setGoalCalories(newGoal);
            return;
        }

        tempNode = tempNode->pNext;
        loops++;
        //std::cout << "Loops: " << loops << "\n";  //debug cout to track the loop count
    }

    std::cout << "Unable to find that name after 30 tries\n";
    

}

void linkedList::editGoalSteps()const//contains some commented debugging couts
{
    std::string plan_name;
    Node* tempNode = pHead;
    std::cout << "What's the name of the exercise plan you would like to edit?:\n";
    std::cin >> plan_name;

    //std::cout << "You chose: " << plan_name << std::endl;
    int loops = 0;
    while (tempNode != nullptr && loops < 30)
    {
        //std::cout << "Checking node: " << tempNode->exercisePlan->getPlanName() << std::endl;

        //using c_str allows a string to be converted to a const char* which allows for comparison using strcmp
        if (std::strcmp(tempNode->exercisePlan->getPlanName().c_str(), plan_name.c_str()) == 0)
        {
            std::cout << "Plan name found!\n";

            int newGoal;

            std::cout << "Enter the new goal steps:\n";
            std::cin >> newGoal;

            if (tempNode->exercisePlan)
            {
                tempNode->exercisePlan->setGoalSteps(newGoal);

                std::cout << "updated plan:\n";
                std::cout << tempNode->exercisePlan->getPlanName() << std::endl;
                std::cout << tempNode->exercisePlan->getGoalSteps() << std::endl;
                std::cout << tempNode->exercisePlan->getDate() << std::endl;

                std::string c;
                std::cout << "input c to continue";
                std::cin >> c;
            }
            else
            {
                std::cout << "node is null" << std::endl;
            }
            

            return;
        }

        tempNode = tempNode->pNext;
        loops++;
        //std::cout << "Loops: " << loops << "\n";  //debug print to track the loop count
    }

    std::cout << "unable to find that plan-name after 30 tries\n";


}