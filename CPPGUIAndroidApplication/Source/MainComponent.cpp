/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
	Question::getInstance().InitializeQuestions();
	//setSize(600, 400);
	//addAndMakeVisible(backGround);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

	g.fillAll(Colours::grey);
    g.setFont (Font (24.0f));
    g.setColour (Colours::white);
    g.drawText ("So... android app", getLocalBounds(), Justification::centred, true);


}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
