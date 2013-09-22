#include "WarScene.h"
#include "cocos-ext.h"
#include "PartenerView.h"
#include "SimpleControll.h"
#include "WarModel.h"
#include "EnumCommon.h"

using namespace cocos2d::extension;
USING_NS_CC;

WarScene::WarScene(void)
{
}


WarScene::~WarScene(void)
{
}

CCScene* WarScene::scene()
{
	CCScene* mScene = CCScene::create();
	WarScene* mWarScene = WarScene::create();

	mScene->addChild(mWarScene);

	return mScene;
}

bool WarScene::init()
{
	if (!CCLayer::init())
	{
		return false;
	}

	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	//mSTimer = CCTimer::initWithTarget(this, SEL_SCHEDULE(WarScene::onTimerHandler()));
	schedule(schedule_selector(WarScene::onTimerHandler), 0.5f);

	//bg = CCSprite::create("bg.jpg");
	//bg->setAnchorPoint(ccp(0, 0));
	//bg->setPosition(ccp(0, 0));
	//addChild(bg);
	UILayer* tlayer = UILayer::create();
	addChild(tlayer);
	UIWidget* root = CCUIHELPER->createWidgetFromJsonFile("WarUI_1.json");
	tlayer->addWidget(root);
	 
	//CCNode* pNode = CCSSceneReader::sharedSceneReader()->createNodeWithSceneFile("WarScene.json");
	//addChild(pNode);
	//CCNode* root = pNode->getChildByTag(10011);

	//bg1 = CCSprite::create("background.png");
	//bg2 = CCSprite::create("background.png");
	//bg1->setRotation(90);
	//bg1->setAnchorPoint(ccp(0, 0));
	//bg1->setPosition(ccp(0, visibleSize.height));
	//bg2->setRotation(90);
	//bg2->setAnchorPoint(ccp(0, 0));
	//bg2->setPosition(ccp(1020, visibleSize.height));
	//addChild(bg1);
	//addChild(bg2);

	CCLabelTTF* pLabel = CCLabelTTF::create("", "Arial", 24);

	// position the label on the center of the screen
	pLabel->setPosition(ccp(origin.x + visibleSize.width/2, origin.y + visibleSize.height - pLabel->getContentSize().height - 100));

	// add the label as a child to this layer
	addChild(pLabel, 1);


	//CCArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("ActionEditor/Cowboy0.png", "ActionEditor/Cowboy0.plist", "ActionEditor/Cowboy.ExportJson");
	//CCArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("fuwang/FuWang0.png", "fuwang/FuWang0.plist", "fuwang/FuWang.ExportJson");
	//CCArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("fuwang/FuWang.ExportJson");
	CCArmature* armature = CCArmature::create("FuWang");
	armature->getAnimation()->playByIndex(1);
	//armature->setScale(0.2f);
	//armature->setPosition(ccp(visibleSize.width * rand() / RAND_MAX, visibleSize.height * rand() / RAND_MAX));
	//armature->setScaleX(-0.2f);
	//addChild(armature, 2);

	SimpleControll* movecontroll = SimpleControll::create();
	//SimpleControll* movecontroll = new SimpleControll;
	movecontroll->setSpeed(3);
	//addChild(movecontroll);

	hero = PartenerView::create();
	//PartenerView* hero = new PartenerView;
	hero->setAvatar(armature);
	hero->setPosition(ccp(visibleSize.width / 4, visibleSize.height / 4));
	addChild(hero, 2);

	hero->setController(movecontroll);

	CCDictionary* strings = CCDictionary::createWithContentsOfFile("i18n_cn.xml");
	const char* str = ((CCString*)strings->objectForKey("japanese"))->m_sString.c_str();
	pLabel->setString(str);
	movecontroll = SimpleControll::create();
	movecontroll->setSpeed(2);
	armature = CCArmature::create("FuWang");
	armature->getAnimation()->playByIndex(1);
	stone = PartenerView::create();
	stone->setAvatar(armature);
	stone->setPosition(ccp(visibleSize.width / 2 + 200, visibleSize.height / 2));
	stone->setTarget(hero);
	stone->setController(movecontroll);
	addChild(stone);

	CCArray* partener = WarModel::shardWarModel()->getPartenerArray();
	CCArray* enemy = WarModel::shardWarModel()->getEnemyArray();

	for (int i = partener->count() - 1; i >= 0; i--) 
	{
		PartenerView* pObj = (PartenerView*)partener->objectAtIndex(i);
		armature = CCArmature::create("FuWang");
		armature->getAnimation()->playByIndex(1);
		pObj->setAvatar(armature);
		char* posid = new char[12];
		sprintf(posid, "left%d", i);
		CCPoint tp = root->getChildByName("ImageView")->getChildByName(posid)->getPosition();
		pObj->setPosition(tp);
		delete posid;

		movecontroll = SimpleControll::create();
		movecontroll->setSpeed(0.5 + i * 0.5);
		pObj->setController(movecontroll);
		pObj->setTarget((PartenerView*)enemy->objectAtIndex(i));

		addChild(pObj);
	}
	
	for (int i = enemy->count() - 1; i >= 0; i--) 
	{
		PartenerView* pObj = (PartenerView*)enemy->objectAtIndex(i);
		armature = CCArmature::create("FuWang");
		armature->getAnimation()->playByIndex(1);
		pObj->setAvatar(armature);
		char* posid = new char[12];
		sprintf(posid, "right%d", i);
		CCPoint tp = root->getChildByName("ImageView")->getChildByName(posid)->getPosition();
		pObj->setPosition(tp);
		delete posid;

		movecontroll = SimpleControll::create();
		movecontroll->setSpeed(0.5 + i * 0.5);
		pObj->setController(movecontroll);
		pObj->setTarget((PartenerView*)partener->objectAtIndex(i));

		addChild(pObj);
	}

	scheduleUpdate();
	CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, 0, false);
	return true;
}

// 每帧执行
void WarScene::update(float delta)
{
	//bg1->setPosition(ccp(bg1->getPosition().x - 3, bg1->getPosition().y));
	//bg2->setPosition(ccp(bg2->getPosition().x - 3, bg2->getPosition().y));

	//if (bg1->getPosition().x < -1020)
	//{
	//	bg1->setPosition(ccp(1020, 640));
	//}
	//if (bg2->getPosition().x < -1020)
	//{
	//	bg2->setPosition(ccp(1020, 640)); 
	//}
}

// 该函数每秒钟执行一次
void WarScene::onTimerHandler(float dt)
{
	if (stone != NULL)
	{ 
		stone->getController()->checkTargetPos();
	}

	CCArray* partener = WarModel::shardWarModel()->getPartenerArray();
	for (int i = partener->count() - 1; i >= 0; i--) 
	{
		PartenerView* pObj = (PartenerView*)partener->objectAtIndex(i);
		pObj->getController()->checkTargetPos();
	}

	CCArray* enemy = WarModel::shardWarModel()->getEnemyArray();
	for (int i = enemy->count() - 1; i >= 0; i--) 
	{
		PartenerView* pObj = (PartenerView*)enemy->objectAtIndex(i);
		pObj->getController()->checkTargetPos();
	}
}

// 触摸开始
bool WarScene::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPoint = pTouch->getLocation();
	printf("%f,%f",touchPoint.x,touchPoint.y);
	hero->getController()->moveTo(touchPoint);
	return true;
}

// 触摸移动
void WarScene::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPoint = pTouch->getLocation();
	printf("%f,%f",touchPoint.x,touchPoint.y);
}

// 触摸结束
void WarScene::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPoint = pTouch->getLocation();
	printf("%f,%f",touchPoint.x,touchPoint.y);
}
