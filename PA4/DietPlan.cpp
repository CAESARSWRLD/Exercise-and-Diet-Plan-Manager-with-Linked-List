#include "DietPlan.hpp"
#include "Node.hpp"
#include "FitnessAppWrapper.hpp"


//std::istream& operator>>(std::istream& inputfile, Node*& pHead_diet)
//{
//    DietPlan plan;
//
//    inputfile >> plan;
//
//    if (!inputfile) {
//        std::cerr << "Failed to read a diet plan!" << std::endl;
//        return;
//    }
//
//    Node* newNode = new Node(plan);
//
//    if (pHead_diet == nullptr)
//    {
//        pHead_diet = newNode;
//        pTail_diet = newNode;
//    }
//    else
//    {
//        pTail_diet->pNext = newNode;
//        pTail_diet = newNode;
//    }
//}

//std::ostream& operator<<(std::ostream& outStream, const DietPlan& plan)
//{
//	outStream << plan.name << "\n";
//	outStream << plan.goal_calories << "\n";
//	outStream << plan.date << "\n";
//	return outStream;
//}