#include "Question.h"

void Question::InitializeQuestions()
{
	//Personal Life Questions
	questionsPersonalLife.push_back("What are your life goals?");
	questionsPersonalLife.push_back("What is the last time you accomplished something great?");

	//History Questions
	questionsHistory.push_back("What is your favorite era and why?");

	//Friends Questions
	questionsFriends.push_back("Would you rather have more friends or closer friends?");

	//Fun Questions
	questionsFun.push_back("What is your best drunk story?");
}

void Question::SetRandomQuestion(QuestionCategory category)
{
	switch (category) {
	case QuestionCategory::personalLife:
		//generate a random question from personalLife category
		break;
	default:
		currentCategory = "-Question Category Set-";
		currentQuestion = "-Question Set-";
		break;
	}
}

String Question::CategoryToText(QuestionCategory category)
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
