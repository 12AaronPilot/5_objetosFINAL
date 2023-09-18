#include "Entity.h"
#include "ofMain.h"

Entity::Entity()
{
	health = 100;
	std::string e = "Entity";
	//nums aleatorios
	std::random_device randomizer;
	std::mt19937 gen(randomizer());
	std::uniform_int_distribution<int> dist(10000, 99999);
	name = e.append(std::to_string(dist(gen)));
	position = new ofVec2f(0, 0);
	velocity = new ofVec2f(0, 0);

}

const char* Entity::toString()
{
	return name.c_str();
}

void Entity::draw()
{
	ofSetColor(setColor(color));
	ofCircle(position->x, position->y, 25);
}

ofColor Entity::setColor(ofColor _color)
{
	color = _color;
	return _color;
}
