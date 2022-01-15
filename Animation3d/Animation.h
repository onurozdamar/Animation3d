#pragma once
#include "libs.h"
#include "MovementModel.h"
#include "Timeline.h"

class Animation
{
public:
	Animation();
	~Animation();
	void animate(float timeMill); // animate the objects
	void draw(); // draw objects
	int getTime(); // get time of current timeline
	bool nextFrame(); // go next frame
	void addTimeline(Timeline* zd);
	void pauseOtherTimelines(); // start current timeline and pause other timelines
	void print();
	bool animating = false;
private:
	vector<Timeline*>* timelines;
	int currentTimeline;
};

