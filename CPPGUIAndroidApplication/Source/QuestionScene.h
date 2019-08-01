#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "CategoryButton.h"
#include "QuestionCategory.h"
#include "UserInterface.h"

class SceneManager;
class QuestionScene : public Component, public Button::Listener {
public:
	QuestionScene();
	~QuestionScene();

	void paint(Graphics&) override;
	void buttonClicked(Button* button) override;

	void SetParent(SceneManager &parent) { parentPointer = &parent; }
	void OnSceneChange();

private:

	SceneManager* parentPointer = 0;

	TextButton backButton;
	TextButton nextButton;

	Label questionCategoryLabel;
	Label questionLabel;
};