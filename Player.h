#pragma once
#include <Novice.h>
#include <math.h>
#include <Vector2.h>

//using namespace KamataEngine;

//プレイヤー
class Player {

private:

	// 位置
	Vector2 position_;

	// 速さ
	float speed_ = 2.0f;

public:

	void Initialize();

	void Update();

	void Draw();

	/// 右移動
	void MoveRight();

	/// 左移動
	void MoveLeft();
};