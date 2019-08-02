#include "Question.h"

void Question::InitializeQuestions()
{
	//Personal Life Questions
	questionsPersonalLife.push_back("What are your life goals?");
	questionsPersonalLife.push_back("What is the last time you accomplished something great?");
	questionsPersonalLife.push_back("Would you rather have more friends or closer friends?");
	questionsPersonalLife.push_back("What is something you have said or done that still makes you cringe?");
	questionsPersonalLife.push_back("What are some common assumpstions that people have about you that are not necessarily true?");
	questionsPersonalLife.push_back("Have you ever questioned or doubted your sanity?");
	questionsPersonalLife.push_back("If your closest friends have never met you, how do you think their lives will be different?");

	//History Questions
	questionsHistory.push_back("What is your favorite era?");
	questionsHistory.push_back("Who is your favorite President, King or Queen?");
	questionsHistory.push_back("If you could witness one key moment in history, what would that be?");

	//Romantic Questions
	questionsRomantic.push_back("What's a common trait shared by everyone you've dated?");
	questionsRomantic.push_back("What body part is the most appealing to you?");
	questionsRomantic.push_back("What is your ideal date?");
	questionsRomantic.push_back("In what ways do you judge strangers before getting to know them?");
	questionsRomantic.push_back("What is the best thing you've learned after a breakup?");


	//Fun Questions
	questionsFun.push_back("What is your best drunk story?");
	questionsFun.push_back("If you could punch anybody in the face without repercussions, who would that be?");
	questionsFun.push_back("How would a fashion magazine describe your style?");
	questionsFun.push_back("What are three things that would instantly cheer you up?");
	questionsFun.push_back("What are some overrated pleasures in life?");


}

void Question::SetRandomQuestion(QuestionCategory category)
{
	srand(time(0));
	int randomNumber;
	int questionNumber;
	switch (category) {
	case QuestionCategory::personalLife:
		//Generate a random question from 'Personal Life' category
		currentCategory = category;

		//Do while loop makes sure that you get a different question every time
		do {
			randomNumber = rand();
			questionNumber = (randomNumber % questionsPersonalLife.size()) + 0;
		} while (currentQuestion.contains(questionsPersonalLife[questionNumber]));
		currentQuestion = questionsPersonalLife[questionNumber];
		break;
	case QuestionCategory::history:
		//Generate a random question from 'History' category
		currentCategory = category;

		//Do while loop makes sure that you get a different question every time
		do {
			randomNumber = rand();
			questionNumber = (randomNumber % questionsHistory.size()) + 0;
		} while (currentQuestion.contains(questionsHistory[questionNumber]));
		currentQuestion = questionsHistory[questionNumber];
		break;
	case QuestionCategory::romantic:
		//Generate a random question from 'Romantic' category
		currentCategory = category;

		//Do while loop makes sure that you get a different question every time
		do {
			randomNumber = rand();
			questionNumber = (randomNumber % questionsRomantic.size()) + 0;
		} while (currentQuestion.contains(questionsRomantic[questionNumber]));
		currentQuestion = questionsRomantic[questionNumber];
		break;
	case QuestionCategory::fun:
		//Generate a random question from 'Fun' category
		currentCategory = category;

		//Do while loop makes sure that you get a different question every time
		do {
			randomNumber = rand();
			questionNumber = (randomNumber % questionsFun.size()) + 0;
		} while (currentQuestion.contains(questionsFun[questionNumber]));
		currentQuestion = questionsFun[questionNumber];
		break;
	default:
		currentCategory = QuestionCategory::COUNT;
		currentQuestion = "-Question set to Default-";
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
	case QuestionCategory::romantic:
		text = "Romantic";
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

QuestionCategory Question::TextToCategory(String text)
{
	if (text == "Personal Life") {
		return QuestionCategory::personalLife;
	}
	else if(text == "History") {
		return QuestionCategory::history;
	}
	else if (text == "Romantic") {
		return QuestionCategory::romantic;
	}
	else if (text == "Fun") {
		return QuestionCategory::fun;
	}
	else {
		return QuestionCategory::COUNT;
	}
	/*
	switch (text)
	{
	case "Personal Life":
		return QuestionCategory::personalLife;
		break;
	case "History":
		return QuestionCategory::history;
		break;
	case "Friends":
		return QuestionCategory::friends;
		break;
	case "Fun":
		return QuestionCategory::fun;
		break;
	default:
		return QuestionCategory::COUNT;
		break;
	}*/
}
