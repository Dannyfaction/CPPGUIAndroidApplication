#include "CategoryButton.h"
#include "Question.h"


CategoryButton::CategoryButton()
{
	//setCentrePosition();
	//setSize(140, 80);
	setColour(TextButton::buttonColourId, Colours::lightgrey);
	setColour(TextButton::textColourOnId, Colours::black);
	setColour(TextButton::textColourOffId, Colours::black);
	//setCentrePosition(0,0);
	//setBounds(10, 10, getWidth() - 20, 40);
	//setAlpha(100.0f);
}


CategoryButton::~CategoryButton()
{
}

void CategoryButton::SetCategory(QuestionCategory category)
{
	this->category = category;
	setName(Question::getInstance().CategoryToText(category));
	setButtonText(getName());
}
