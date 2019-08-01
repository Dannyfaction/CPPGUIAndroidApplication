#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "MenuScene.h"
#include "QuestionScene.h"

class SceneManager : public Component{
public:
	SceneManager();
	~SceneManager();

	void paint(Graphics&) override;

	void ToggleScene();

private:
	MenuScene menuScene;
	QuestionScene questionScene;
};