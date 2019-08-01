#include "MenuScene.h"
#include "SceneManager.h"

MenuScene::MenuScene()
{
	//this->parentPointer = &parent;
	//setCentrePosition(0,0);
	setSize(400, 550);
	Rectangle<int> r = Desktop::getInstance().getDisplays().getMainDisplay().userArea;

	addAndMakeVisible(titleLabel);
	titleLabel.setText("Pick a question category", dontSendNotification);
	titleLabel.setFont(Font(24.0f, Font::bold));
	titleLabel.setColour(Label::textColourId, Colours::white);
	titleLabel.setJustificationType(Justification::centred);
	float labelWidth = r.getWidth() * 0.75f;
	float labelHeight = r.getHeight() * 0.1f;
	titleLabel.setBounds(r.getWidth()/2-labelWidth/2, r.getHeight()/12-labelHeight/2, labelWidth, labelHeight);
	
	for (int i = 0; i < static_cast<int>(QuestionCategory::COUNT); i++)
	{
		categoryButtons.push_back(new CategoryButton());
		categoryButtons[i]->SetCategory(static_cast<QuestionCategory>(i));
		addAndMakeVisible(categoryButtons[i]);

		categoryButtons[i]->addListener(this);

		float buttonWidth = r.getWidth() * 0.75f;
		float buttonHeight = r.getHeight() * 0.125f;
		categoryButtons[i]->setBounds(r.getWidth()/2 - buttonWidth/2, buttonHeight * 1.25f * i + buttonHeight, buttonWidth, buttonHeight);
	}
}

MenuScene::~MenuScene()
{
	for (int i = 0; i < static_cast<int>(QuestionCategory::COUNT); i++)
	{
		categoryButtons[i]->removeListener(this);
	}
}

void MenuScene::paint(Graphics& g)
{
	//g.fillAll(Colours::white);

	/*
	Rectangle<float> rectangle(20.0f, 350.0f, 140.0f, 80.0f);

	g.setColour(Colours::white);
	g.fillRect(rectangle);

	g.setFont(Font(20.0f));
	g.setColour(Colours::black);
	
	//setintercep


	g.drawText("Personal Life", rectangle, Justification::centred, false);
	*/
	//centreWithSize(0,0);
}

void MenuScene::buttonClicked(Button * button)
{
	//Toggle Scene
	//UserInterface::getInstance().ToggleScene();
	parentPointer->ToggleScene();
	//GetRandomQuestion?

	/*for (int i = 0; i < static_cast<int>(QuestionCategory::COUNT); i++)
	{
		if (button == categoryButtons[i]) {
			categoryButtons[i]->setVisible(false);
		}
	}*/
	/*
	if (button == &category1Button) {
		if (category1Button.getAlpha() > 0.0f) {
			category1Button.setVisible(false);
			category1Button.setAlpha(0.0f);
		}
		else {
			category1Button.setAlpha(100.0f);
		}

	}*/

}