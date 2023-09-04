#pragma once
#include <stdio.h>
#include "Object.h"
std::list<Object*> LoadObject(Audio* audio) {
	std::list<Object*> objects;
	//objects.push_back(newObject);
	for (Object* object : objects)
		object->Initialize(audio);
	return objects;
}