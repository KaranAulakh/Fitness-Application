#include "Exercise.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>

Exercise::Exercise() = default; //Default constructor for exercises

Exercise::Exercise(string exerciseName, string muscleTargeted, bool isCardio)
    //Constructor arguments for exercises,
{
    this->exerciseName = exerciseName;
    this->muscleTargeted = muscleTargeted;
    this->isCardio = isCardio;
}
//Constructor arguments for exercises

void Exercise::setName(string exerciseName) {
    this->exerciseName = exerciseName;
}

void Exercise::setMuscle(string muscleTargeted) {
    this->muscleTargeted = muscleTargeted;
}

void Exercise::setCardio(bool isCardio) {
    this->isCardio = isCardio;
}

string Exercise::getName(){
    return exerciseName;
}

string Exercise::getMuscle(){
    return muscleTargeted;
}

bool Exercise::getCardio(){
    return isCardio;
}
