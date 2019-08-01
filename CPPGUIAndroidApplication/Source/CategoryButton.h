#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "QuestionCategory.h"

class Question;
class CategoryButton : public TextButton {
public:
	CategoryButton();
	~CategoryButton();

	void SetCategory(QuestionCategory category);
	//String CategoryToText(QuestionCategory category);
private:
	QuestionCategory category;
};