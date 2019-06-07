#include "GameMain.h"
#include <Siv3D.hpp>
#include <random>


GameMain::GameMain() {
	if (!init()) {
		//error
	}
}

bool GameMain::init() {
	return true;
}

void GameMain::execute() {
	const Font font(30);
	int count = 0;
		while (System::Update()){
			count++;
			if (count % 10 == 0) {
				font(rand() % 9 + 1).drawAt(Window::Center(), Palette::Black);
			}
		}
	finish();
}

void GameMain::finish() {

}