#pragma once
#include "includes.h"
#include "MovementModel.h"
#include "Timeline.h"

class Animation
{
public:
	Animation();
	~Animation();
	void animate(float timeMill);
	void draw();
	int getTime();
	bool nextFrame();
	void addTimeline(Timeline* zd);
	void pauseOtherTimelines();
	void print();
	bool animating = false;
private:
	vector<Timeline*>* timelines;
	int currentTimeline;
};

