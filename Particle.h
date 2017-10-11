#pragma once

#include "ofMain.h"

class Particle {
public:
	Particle();
	~Particle();

	void update();
	void draw();

	bool isDead();
private:
	ofVec2f location;
	ofVec2f velocity;

	ofColor body_color;
	int alpha;
};