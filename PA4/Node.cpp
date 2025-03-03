#include "Node.hpp"
#include "DietPlan.hpp"
#include "ExercisePlan.hpp"


Node::Node(const DietPlan& plan)
    : dietPlan(new DietPlan(plan)), exercisePlan(nullptr), pNext(nullptr) {}

Node::Node(const ExercisePlan& plan)
    : dietPlan(nullptr), exercisePlan(new ExercisePlan(plan)), pNext(nullptr) {}