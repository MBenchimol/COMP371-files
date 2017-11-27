#ifndef COLLISION_H
#define COLLISION_H

#include "gtc/matrix_transform.hpp"
#include "gtc/type_ptr.hpp"
#include "..\glm\glm.hpp"
#include <vector>

class Sphere{
public:
	glm::vec3 centerPos;
	float radius;

	bool isColliding(Sphere s){
		if (s.is)
		float distance = glm::sqrt(glm::pow((centerPos.x - s.centerPos.x), 2) + glm::pow((centerPos.y - s.centerPos.y), 2) + glm::pow((centerPos.z - s.centerPos.z), 2));
		if (distance <= radius + s.radius){
			return true;
		}
		return false;

	}
};

/*
Each object (camera, people, buildings) will have bounding spheres. each time a new object is created, push an equivalent bounding sphere into a vector.
Iterate through each object every frame between camera and other objects to check for collisions. 
If true, prevent moving in that same direction
*/
#endif