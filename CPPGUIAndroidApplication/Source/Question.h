#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>
#include <string>
#include <ctime>
#include "QuestionCategory.h"

class Question {

public:
	static Question &getInstance() {
		static Question instance;
		return instance;
	}

	void InitializeQuestions();
	void SetRandomQuestion(QuestionCategory category);
	String GetCurrentQuestion() { return currentQuestion; }
	QuestionCategory GetCurrentCategory() { return currentCategory; }
	String CategoryToText(QuestionCategory category);
	QuestionCategory TextToCategory(String text);

private:
	Question() {}

	Question(Question const&) = delete;
	void operator=(Question const&) = delete;

private:
	std::vector<std::string> questionsPersonalLife;
	std::vector<std::string> questionsHistory;
	std::vector<std::string> questionsRomantic;
	std::vector<std::string> questionsFun;

	String currentQuestion = "-Question-";
	QuestionCategory currentCategory;
};