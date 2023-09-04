#pragma once
#include "Model.h"
#include "WorldTransform.h"
class Object {
public:
	void Update() {}
	void Draw() {}
	void Initialize(Audio* audio) { audio_ = audio; }

private:
	WorldTransform worldTransForm_;
	Model* model_ = nullptr;
	uint32_t textureHandle_ = 0u;
	Vector3 pos_;
	Audio* audio_;
};
