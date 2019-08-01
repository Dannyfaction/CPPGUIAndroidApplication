#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include <vector>
#include <string>
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
	String GetCurrentCategory() { return currentCategory; }
	String CategoryToText(QuestionCategory category);

private:
	Question() {}

	Question(Question const&) = delete;
	void operator=(Question const&) = delete;

private:
	std::vector<std::string> questionsPersonalLife;
	std::vector<std::string> questionsHistory;
	std::vector<std::string> questionsFriends;
	std::vector<std::string> questionsFun;

	String currentQuestion = "-Question-";
	String currentCategory = "-Question Category-";
};