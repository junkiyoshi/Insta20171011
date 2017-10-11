#include "ofApp.h"

//--------------------------------------------------------------
ofApp::~ofApp(){
	for (int i = this->particles.size() - 1; i > -1; i--) {
		Particle* p = this->particles[i];
		delete p;
		this->particles.erase(this->particles.begin() + i);
	}
}

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);

}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < 3; i++) {
		this->particles.push_back(new Particle());
	}

	for (int i = this->particles.size() - 1; i > -1; i--) {
		this->particles[i]->update();

		if (this->particles[i]->isDead()) {
			delete this->particles[i];
			this->particles.erase(this->particles.begin() + i);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	this->cam.begin();

	for (int i = this->particles.size() - 1; i > -1; i--) {
		this->particles[i]->draw();
	}

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
