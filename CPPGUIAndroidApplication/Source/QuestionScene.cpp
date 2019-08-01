#include "QuestionScene.h"
#include "SceneManager.h"

QuestionScene::QuestionScene()
{
	//setCentrePosition(0,0);
	setSize(400, 550);
	Rectangle<int> r = Desktop::getInstance().getDisplays().getMainDisplay().userArea;

	float labelWidth = r.getWidth() * 0.75f;
	float labelHeight = r.getHeight() * 0.5f;

	//Question Category Label
	addAndMakeVisible(questionCategoryLabel);
	//Set questionCategoryLabel text depending on the category chosen
	questionCategoryLabel.setText("-Question Category-", dontSendNotification);
	questionCategoryLabel.setFont(Font(30.0f, Font::bold));
	questionCategoryLabel.setColour(Label::textColourId, Colours::white);
	questionCategoryLabel.setJustificationType(Justification::centred);
	questionCategoryLabel.setBounds(r.getWidth() * 0.5f - labelWidth * 0.5f, r.getHeight() * 0.075f - labelHeight * 0.5f, labelWidth, labelHeight);

	//Question Label
	addAndMakeVisible(questionLabel);
	//Set Question text according to the random question function
	questionLabel.setText("-Question Question Question Question Question Question-", dontSendNotification);
	//questionLabel.setMinimumHorizontalScale(1.0f);
	questionLabel.setFont(Font(30.0f, Font::bold));
	questionLabel.setColour(Label::textColourId, Colours::white);
	questionLabel.setJustificationType(Justification::centred);
	questionLabel.setBounds(r.getWidth() * 0.5f - labelWidth * 0.5f, r.getHeight() * 0.25f - labelHeight * 0.5f, labelWidth, labelHeight);

	float buttonWidth = r.getWidth() * 0.40f;
	float buttonHeight = r.getHeight() * 0.125f;

	//Back Button
	addAndMakeVisible(backButton);
	backButton.addListener(this);
	backButton.setButtonText("Back to categories");
	backButton.setBounds(r.getWidth() * 0.25f - buttonWidth / 2, buttonHeight * 5.0f, buttonWidth, buttonHeight);
	backButton.setColour(TextButton::buttonColourId, Colours::lightgrey);
	backButton.setColour(TextButton::textColourOnId, Colours::black);
	backButton.setColour(TextButton::textColourOffId, Colours::black);

	//Different Question Button
	addAndMakeVisible(nextButton);
	nextButton.addListener(this);
	nextButton.setButtonText("Different question");
	nextButton.setBounds(r.getWidth() * 0.75f - buttonWidth / 2, buttonHeight * 5.0f, buttonWidth, buttonHeight);
	nextButton.setColour(TextButton::buttonColourId, Colours::lightgrey);
	nextButton.setColour(TextButton::textColourOnId, Colours::black);
	nextButton.setColour(TextButton::textColourOffId, Colours::black);

}

QuestionScene::~QuestionScene()
{
	backButton.removeListener(this);
	nextButton.removeListener(this);
}

void QuestionScene::paint(Graphics& g)
{

}

void QuestionScene::buttonClicked(Button * button)
{
	//Toggle Scene
	if (button->getButtonText() == "Back to categories") {
		parentPointer->ToggleScene();
	}

	//Different Question
	if (button->getButtonText() == "Different question") {

	}
	//UserInterface::getInstance().ToggleScene();
	//parentPointer->ToggleScene();
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

void QuestionScene::OnSceneChange()
{
	questionCategoryLabel.setText(Question::getInstance().GetCurrentCategory(), dontSendNotification);
	questionLabel.setText(Question::getInstance().GetCurrentQuestion(), dontSendNotification);
}
