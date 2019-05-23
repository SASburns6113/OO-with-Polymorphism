#include "DMC_boss.h"
#include <iostream>
using namespace std;

int name;

DMC_boss::DMC_boss()
{


}

void DMC_boss::approach(string theApproachingText)
{
	cout << "The " << name << "approaches you!";


}

void DMC_boss::attack(string attack)
{
	cout << name << "uses a basic attack to try and hit you";

}


DMC_boss::~DMC_boss()
{
}
