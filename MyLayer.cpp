#include "MyLayer.h"

Scene * MyLayer::createScene()
{
	auto scene = Scene::create();
	auto layer = MyLayer::create();

	scene->addChild(layer);
	return scene;

}

bool MyLayer::init()
{
	if (!Layer::init())
	{
		return false;
	}

	Size size = Director::getInstance()->getWinSize();
	auto sprite = Sprite::create("dashu.png");
	sprite->setPosition(size.width / 2, size.height / 2);
	addChild(sprite);

	return true;
}
