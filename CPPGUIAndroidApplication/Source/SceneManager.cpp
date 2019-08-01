#include "SceneManager.h"

SceneManager::SceneManager()
{
	//setCentrePosition(0,0);

	addChildComponent(menuScene);
	menuScene.SetParent(*this);
	addChildComponent(questionScene);
	menuScene.setVisible(true);

	setSize(400, 550);
}

SceneManager::~SceneManager()
{

}

void SceneManager::paint(Graphics& g)
{
	//g.fillAll(Colours::white);

	//centreWithSize(0,0);
}

void SceneManager::ToggleScene()
{
	menuScene.setVisible(!menuScene.isVisible());
	questionScene.setVisible(!questionScene.isVisible());
}
