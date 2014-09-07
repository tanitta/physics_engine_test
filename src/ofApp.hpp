#pragma once

#include "ofMain.h"
#include <physics_engine.hpp>
#include <physics_entity.hpp>
class ofApp : public ofBaseApp{
	private:
		physics_engine::physics_entity physics_entity;
	public:
		ofApp():physics_entity(){};
		~ofApp(){};

		void setup(){};
		void update(){};
		void draw(){};

		void keyPressed(int key){};
		void keyReleased(int key){};
		void mouseMoved(int x, int y ){};
		void mouseDragged(int x, int y, int button){};
		void mousePressed(int x, int y, int button){};
		void mouseReleased(int x, int y, int button){};
		void windowResized(int w, int h){};
		void dragEvent(ofDragInfo dragInfo){};
		void gotMessage(ofMessage msg){};

};
