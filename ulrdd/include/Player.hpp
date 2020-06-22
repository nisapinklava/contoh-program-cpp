#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player {

	public:
		Player(string name);
		~Player();
		
		void setName(string name);
		
		string getName();

		void setAbsolutePosition(int position);
		void setPosition(int position);
		
		int getPosition();

	private:
		string name;
		mutable int position = 0;
		
};