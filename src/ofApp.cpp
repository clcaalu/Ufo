#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ufo.load("ufo.png");
	ufo.setAnchorPercent(0.5, 0.5);
}

//--------------------------------------------------------------
void ofApp::update(){
	if (ufoX < mouseX) ufoX += 10;
	if (ufoX > mouseX) ufoX -= 10;
	if (ufoY < mouseY) ufoY += 10;
	if (ufoY > mouseY) ufoY -= 10;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(128, 192, 255);
	ofSetColor(255, 255, 255);
	ufo.draw(ufoX, ufoY, 128, 128);
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
