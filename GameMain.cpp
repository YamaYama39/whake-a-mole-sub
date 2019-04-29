#include "GameMain.h"
#include <Siv3D.hpp>


GameMain::GameMain() {
	if (!init()) {
		//error
	}
}

bool GameMain::init() {
	return true;
}

void GameMain::execute() {
		Graphics::SetBackground(ColorF(0.8, 0.9, 1.0));
		while (System::Update()){

		}
	finish();
}

void GameMain::finish() {

}