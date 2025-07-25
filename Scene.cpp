#include "Scene.h"

void Scene::Initialize() {

	//インプットハンドラークラスを作る
	inputHandler_ = new InputHandler();

	//A Dキー押された時の右移動コマンド作る
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveLeftCommand2PressKeyD();

	player_ = new Player();
	player_->Initialize();
}

void Scene::Update() {

	//AかDキー押されたとき、発生したコマンドを格納
	iCommand_ = inputHandler_->HandleInput();

	if (iCommand_)iCommand_->Execute(*player_);

	player_->Update();
}

void Scene::Draw() {

	player_->Draw();
}