#include "MenuScene.h"

MenuScene::MenuScene()
{
	//setCentrePosition(0,0);
	setSize(400, 550);

	for (int i = 0; i < static_cast<int>(QuestionCategory::COUNT); i++)
	{
		categoryButtons.push_back(new CategoryButton());
		categoryButtons[i]->SetCategory(static_cast<QuestionCategory>(i));
		addAndMakeVisible(categoryButtons[i]);

		categoryButtons[i]->addListener(this);

		Rectangle<int> r = Desktop::getInstance().getDisplays().getMainDisplay().userArea;
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
	for (int i = 0; i < static_cast<int>(QuestionCategory::COUNT); i++)
	{
		if (button == categoryButtons[i]) {
			categoryButtons[i]->setVisible(false);
		}
	}
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