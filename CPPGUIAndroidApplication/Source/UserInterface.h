#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class UserInterface {

public:
	static UserInterface &getInstance() {
		static UserInterface instance;
		return instance;
	}

	void SpawnComponent(Component component);

private:
	UserInterface() {}

	UserInterface(UserInterface const&) = delete;
	void operator=(UserInterface const&) = delete;

private:
};