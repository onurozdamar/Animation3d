#include "Animation.h"

Animation::Animation() {
	currentTimeline = 0;
	timelines = new vector<Timeline*>();
}

Animation::~Animation() {
	for (auto p : *timelines)
		delete p;
}

void Animation::animate(float timeMill)
{
	(*timelines->at(currentTimeline)).update(timeMill);
}

void Animation::draw()
{
	(*timelines->at(currentTimeline)).draw();
}

int Animation::getTime()
{
	return (*timelines->at(currentTimeline)).getTime();
}

bool Animation::nextFrame()
{
	if (currentTimeline >= timelines->size() - 1)
	{
		currentTimeline = 0;
		animating = false;
		return false;
	}
	currentTimeline++;

	pauseOtherTimelines();

	return true;
}

void Animation::pauseOtherTimelines()
{
	animating = true;
	for (int i = 0; i < timelines->size(); i++)
	{
		if (i == currentTimeline)
		{
			timelines->at(i)->startt();
		}
		else
		{
			timelines->at(i)->pause();
		}
	}
}

void Animation::addTimeline(Timeline* zamanDilimi)
{
	timelines->push_back(zamanDilimi);
}

void Animation::print()
{
	for (int i = 0; i < timelines->size(); i++)
	{
		timelines->at(i)->yaz();
	}
}