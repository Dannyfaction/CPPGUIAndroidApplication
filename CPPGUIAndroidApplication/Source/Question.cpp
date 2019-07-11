#include "Question.h"

void Question::InitializeQuestions()
{
	//Personal Life Questions
	questionsPersonalLife.push_back("What are your life goals?");
	questionsPersonalLife.push_back("What is the last time you accomplished something great?");

	//History Questions
	questionsHistory.push_back("What is your favorite era and why?");

	//Friends Questions
	questionsFriends.push_back("");

	//Fun Questions
	questionsFun.push_back("What is your best drunk story?");
}

void Question::GetRandomQuestion(QuestionCategory category)
{
	switch (category) {
	case QuestionCategory::personalLife:
		//generate a random question from personalLife category
		break;
	}
}
