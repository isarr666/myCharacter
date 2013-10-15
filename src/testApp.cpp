#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(100,100,100);
    ofSetCircleResolution(500);
    ofEnableSmoothing();
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //hair.....
    
    for (int i=0; i<5; i++) {
       // for (int j=0; j<5; j++) {
            ofSetLineWidth(16);
            ofSetColor(0+i*20, 0+i*20, 0+i*20);
            ofLine(ofGetWidth()/2-i*20, 300, ofGetWidth()/2-360*(sin(pi/6+i*pi/12)), 300+360*(cos(pi/6+i*pi/12)));
            ofLine(ofGetWidth()/2+i*20, 300, ofGetWidth()/2+360*(sin(pi/6+i*pi/12)), 300+360*
                (cos(pi/6+i*pi/12)));
       
            ofCircle(ofGetWidth()/2-360*(sin(pi/6+i*pi/12)), 300+360*(cos(pi/6+i*pi/12)), 10);
            ofCircle(ofGetWidth()/2+360*(sin(pi/6+i*pi/12)), 300+360*
                 (cos(pi/6+i*pi/12)), 10);
       // }
    }

    
    //face.....
    ofSetColor(220, 210, 200);
    ofEllipse(ofGetWidth()*0.5, ofGetHeight()*0.5, 400, 300);
    
    //eye.....
    
    ofSetLineWidth(4);
    ofSetColor(255, 255, 255);
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2-30, 200, 100);
    
    //ofNoFill();
    ofSetColor(0, 0, 0);
    //ofCircle(ofGetWidth()/2, ofGetHeight()/2-30, 30);
    //ofFill();
    
    ofCircle(ofGetWidth()/2, ofGetHeight()/2-30, 30);
    
    
    //mouth......
    ofSetColor(180, 100, 100);
    ofTriangle(ofGetWidth()/2, ofGetHeight()/2+60, ofGetWidth()/2-20, ofGetHeight()/2+120, ofGetWidth()/2+20, ofGetHeight()/2+120);
    //ofEllipse(ofGetWidth()/2, ofGetHeight()/2+80, 30, 50);
    
    
        
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
