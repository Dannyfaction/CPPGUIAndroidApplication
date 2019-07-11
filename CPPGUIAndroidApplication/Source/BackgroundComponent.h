#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class BackgroundComponent : public Component {
public:
	BackgroundComponent();
	~BackgroundComponent();

	void paint(Graphics&) override;
};