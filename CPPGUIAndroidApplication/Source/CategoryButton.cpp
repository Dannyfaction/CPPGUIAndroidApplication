#include "CategoryButton.h"



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

String CategoryButton::CategoryToText(QuestionCategory category)
{
	String text;
	switch (category)
	{
	case QuestionCategory::personalLife:
		text = "Personal Life";
		break;
	case QuestionCategory::history:
		text = "History";
		break;
	case QuestionCategory::friends:
		text = "Friends";
		break;
	case QuestionCategory::fun:
		text = "Fun";
		break;
	default:
		text = "Error in function";
		break;
	}
	return text;
}
