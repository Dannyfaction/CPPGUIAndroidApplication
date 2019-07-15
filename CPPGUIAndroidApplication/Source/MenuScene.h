#pragma once
#include <vector>
#include "../JuceLibraryCode/JuceHeader.h"
#include "CategoryButton.h"
#include "QuestionCategory.h"

class MenuScene : public Component, public Button::Listener {
public:
	MenuScene();
	~MenuScene();

	void paint(Graphics&) override;
	void buttonClicked(Button* button) override;

private:

	std::vector<CategoryButton*> categoryButtons;
};