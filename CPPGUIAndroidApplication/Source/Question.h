#pragma once
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
	void GetRandomQuestion(QuestionCategory category);

private:
	Question() {}

	Question(Question const&) = delete;
	void operator=(Question const&) = delete;

private:
	std::vector<std::string> questionsPersonalLife;
	std::vector<std::string> questionsHistory;
	std::vector<std::string> questionsFriends;
	std::vector<std::string> questionsFun;
};