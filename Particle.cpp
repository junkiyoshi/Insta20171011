#include "Particle.h"

Particle::Particle()
{
	this->location = ofVec2f(0, -ofGetHeight() / 2 + 30);
	this->velocity = ofVec2f(ofRandom(-1.2, 1.2), ofRandom(5, 1));
	this->alpha = 255;
	this->body_color.setHsb(ofRandom(255), 255, 255);
}

Particle::~Particle()
{

}

void Particle::update()
{
	this->location += this->velocity;
	this->alpha -= 2;
}

void Particle::draw()
{
	ofSetColor(this->body_color, this->alpha);
	ofEllipse(this->location, 20, 20);
}

bool Particle::isDead()
{
	return this->alpha < 0;
}