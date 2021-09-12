#pragma once

#include "ofMain.h"
#include "ofxOpenVrUtil.h"
#include "ofxViveSRWorks.h"
#include "ofxGui.h"
#include "ofxDeepDream.h"

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/core/cuda.hpp>

#include <opencv2/cudaimgproc.hpp>
#include <opencv2/highgui.hpp>

#include <opencv2/core/opengl.hpp>
#include <opencv2/cudacodec.hpp>

#include <torch/torch.h>
#include <torch/script.h>

class ofApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();
		
	void exit();
	void keyPressed(int key);
		
private:
	void drawGrid();
	void drawScene();

	ofxOpenVrUtil::Interface vr;
	ofxViveSRWorks::Interface vive;
	std::array<ofFbo, 2> eyeFbo;

	ofEasyCam cam;
	ofxPanel panel;

	ofParameter<bool> isDrawScene;
	ofParameter<bool> isDrawEyeTexture;

	ofxDeepDream::ofxDeepDream DeepDream;


};
