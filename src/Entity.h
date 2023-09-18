#pragma once
#include <string>
#include <random>
#include "ofMain.h"
//#include "GenericArray.h"

class Entity
{
public:
	std::string name;
	int health;
	ofColor color;

	Entity();

	const char* toString();

	ofVec2f* position;
	ofVec2f* velocity;

	void draw();
	ofColor setColor(ofColor _color);
};