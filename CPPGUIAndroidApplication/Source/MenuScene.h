#pragma once
#include <vector>
#include "../JuceLibraryCode/JuceHeader.h"
#include "CategoryButton.h"
#include "QuestionCategory.h"
#include "Question.h"
#include "UserInterface.h"

class SceneManager;
class MenuScene : public Component, public Button::Listener {
public:
	MenuScene();
	~MenuScene();

	void paint(Graphics&) override;
	void buttonClicked(Button* button) override;

	void SetParent(SceneManager &parent) { parentPointer = &parent; }

private:

	SceneManager* parentPointer = 0;

	std::vector<CategoryButton*> categoryButtons;

	Label titleLabel;
};