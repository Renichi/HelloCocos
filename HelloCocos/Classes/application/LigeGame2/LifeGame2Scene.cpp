#include "LifeGame2Scene.h"

USING_NS_CC;

LifeGame2Scene::LifeGame2Scene()
{
}

LifeGame2Scene::~LifeGame2Scene()
{
}

void LifeGame2Scene::initialize()
{
	// レイヤーの作成
	auto *pLayer = GameLayer::create();
	this->addChild(pLayer);

	// タイトル
	auto *pTitleLabel = Label::create("LifeGame2", "fonts/arial.ttf", 24);
	pTitleLabel->setPosition(24, RESOLUTION_HEIGHT - 24);
	pTitleLabel->setAnchorPoint(Vec2(0, 1.0f));
	pTitleLabel->setColor(Color3B(255, 255, 255));
	pTitleLabel->setZOrder(1.0f);
	pLayer->addChild(pTitleLabel);
}

void LifeGame2Scene::finalize()
{
}

void LifeGame2Scene::enter()
{
}

void LifeGame2Scene::leave()
{
}

bool LifeGame2Scene::input()
{
	return false;
}

void LifeGame2Scene::process(float delta)
{
}
