#pragma once
#include <string>
using namespace std;

class DMC_boss
{
public:
	DMC_boss();
	
	void approach(string theApproachingText);

	void attack(string attack);

	~DMC_boss();
};

