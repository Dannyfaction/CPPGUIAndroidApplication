#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "QuestionCategory.h"

class CategoryButton : public TextButton {
public:
	CategoryButton();
	~CategoryButton();

	void SetCategory(QuestionCategory category) { this->category = category;
	setName(CategoryToText(category));
	setButtonText(getName());
	}
	String CategoryToText(QuestionCategory category);
private:
	QuestionCategory category;
};