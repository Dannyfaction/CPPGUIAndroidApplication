#include "BackgroundComponent.h"

BackgroundComponent::BackgroundComponent()
{
	//setCentrePosition();
	//setSize(100, 100);
}

BackgroundComponent::~BackgroundComponent()
{
}

void BackgroundComponent::paint(Graphics& g)
{
	g.fillAll(Colours::black);
}
