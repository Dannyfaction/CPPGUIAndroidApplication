/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Question.h"
#include "UserInterface.h"
#include "SceneManager.h"
//#include "MenuScene.h"
//#include "QuestionScene.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/

class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

	//void ToggleScene();

private:
    //==============================================================================
    // Your private member variables go here...

	SceneManager sceneManager;
	//MenuScene menuScene;
	//QuestionScene questionScene;

	//TextButton testButton;

	
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};


