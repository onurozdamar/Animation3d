#pragma once
#include "libs.h"
#include "Timeline.h"

class Animation
{
public:
	Animation();
	~Animation();
	void animate(int timeMill);
	void draw();
	int getTime();
	bool nextFrame();
	void addTimeline(Timeline* t);
private:
	vector<Timeline*>* timelines;
	int currentTimeline;
};

