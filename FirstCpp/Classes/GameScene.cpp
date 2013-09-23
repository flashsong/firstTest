#include "GameScene.h"
#include "war/WarScene.h"
#include "war/PartenerVo.h"
#include "war/WarModel.h"
#include "EnumCommon.h"
#include "SceneManager.h"

//������չ��
#include "cocos-ext.h"
#include "loader/LoadManager.h"
//���������ռ�
using namespace cocos2d::extension;

USING_NS_CC;

double getRandom(double start, double end)
{
	return start+(end-start)*rand()/(RAND_MAX + 1.0);
}

CCScene* GameWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    GameWorld *layer = GameWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }

	initGame(); // ��ʼ����Ϸ
    
    CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(GameWorld::menuCloseCallback));
    
	pCloseItem->setPosition(ccp(origin.x + visibleSize.width - pCloseItem->getContentSize().width/2 ,
                                origin.y + pCloseItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition(CCPointZero);
    this->addChild(pMenu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    CCLabelTTF* pLabel = CCLabelTTF::create("Hello World", "Arial", 24);
    
    // position the label on the center of the screen
    pLabel->setPosition(ccp(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - pLabel->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(pLabel, 1);

    // add "HelloWorld" splash screen"
    CCSprite* pSprite = CCSprite::create("HelloWorld.png");

    // position the sprite on the center of the screen
    pSprite->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(pSprite, 0);

	////����һ��UILayer��
	//UILayer*   ul =UILayer::create();
	////����ˢ�º���
	//ul->scheduleUpdate();
	////��UILayer����뵽��ǰ�ĳ���
	//this->addChild(ul);
	////ʹ��json�ļ���Layer������CocoStudio���ɵĿؼ�
	//ul->addWidget(CCUIHELPER->createWidgetFromJsonFile("UIEditorTest/UIEditorTest_1.json"));


	//���ȶ�ȡpng,plist��ExportJson/json�ļ���
	CCArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("ActionEditor/Cowboy0.png", "ActionEditor/Cowboy0.plist", "ActionEditor/Cowboy.ExportJson");
	//Ȼ�󴴽�armature�࣬�������г�ʼ��
	CCArmature *armature = CCArmature::create("Cowboy");
	//Ȼ��ѡ�񲥷Ŷ���0�����������ź�λ������
	armature->getAnimation()->playByIndex(1);
	//��ģ���й���������������������Խ������޸�Ϊ0/1/2�е�����ֵ���鿴��ͬЧ��
	armature->setScale(0.5f);
	armature->setPosition(ccp(visibleSize.width * 0.5, visibleSize.height * 0.5));
	//���armature���ӵ�������
	this->addChild(armature,2);

	armature = CCArmature::create("Cowboy");
	//Ȼ��ѡ�񲥷Ŷ���0�����������ź�λ������
	armature->getAnimation()->playByIndex(2);
	//��ģ���й���������������������Խ������޸�Ϊ0/1/2�е�����ֵ���鿴��ͬЧ��
	armature->setScale(0.5f);
	armature->setPosition(ccp(visibleSize.width * 0.7, visibleSize.height * 0.7));
	//���armature���ӵ�������
	this->addChild(armature,3);
    
    return true;
}


void GameWorld::menuCloseCallback(CCObject* pSender)
{
	////����һ���µĳ���
	//CCScene * newscene  = CCScene::create();
	////��CocoStudio�����༭�����ɵ��������ɸ��ڵ�
	//CCNode *pNode = CCSSceneReader::sharedSceneReader()->createNodeWithSceneFile("SceneEditorTest/SceneEditorTest.json");

	////���ű�������
	//CCComAudio *pAudio = (CCComAudio*)(pNode->getComponent("Audio"));
	////pAudio->playBackgroundMusic(pAudio->getFile(), pAudio->isLoop());
	//pAudio->playBackgroundMusic(pAudio->getFile(), true);
	////�����������ö���
	//CCComRender *pFishRender = (CCComRender*)(pNode->getChildByTag(10010)->getComponent( "butterFlyFish"));
	//CCArmature *pButterFlyFish= (CCArmature *)(pFishRender->getRender());
	//pButterFlyFish->getAnimation()->playByIndex(0);
	//newscene->addChild(pNode, 0, 1);
	////�л����µĳ���
	//CCDirector::sharedDirector()->replaceScene(newscene);

	
	LoadManager::shardLoadManager()->addLoadItem("fuwang/FuWang0.png", "fuwang/FuWang0.plist", "fuwang/FuWang.ExportJson");
	LoadManager::shardLoadManager()->addLoadItem("weapon/Weapon0.png", "weapon/Weapon0.plist", "weapon/Weapon.ExportJson");
	LoadManager::shardLoadManager()->load(SCENE_WAR);
}

// ��ʼ����Ϸ
void GameWorld::initGame(void)
{
	// ��ʼ����Ϸ
	SceneManager::shardSceneManager(); // ��ʼ������������

	// for test ��ʼ��˫����Ӫ����
	//int temp[9];
	//int icount = 0;
	//srand(unsigned(time(0)));
	//while (icount < 9)
	//{
	//	int idata = rand()%9;
	//	for (int i = 0; i < 9; i++)
	//	{
	//		if (temp[i] == idata) break;
	//		temp[i] = idata;
	//		icount++;
	//	}
	//}

	//CCArray* partener = WarModel::shardWarModel()->getPartenerArray();
	//for (int i = 0; i < 3; i++)
	//{
	//	PartenerView* p1 = PartenerView::create();
	//	PartenerVo* pinfo1 = PartenerVo::create();
	//	pinfo1->name = "fuwanghero";
	//	pinfo1->posId = i;
	//	pinfo1->gender = 1;
	//	pinfo1->pngName = "fuwang/FuWang0.png";
	//	pinfo1->xmlName = "fuwang/FuWang0.plist";
	//	pinfo1->jsonName = "fuwang/FuWang.ExportJson";
	//	p1->setInfo(pinfo1);
	//	partener->addObject(p1);
	//}

	//CCArray* enemy = WarModel::shardWarModel()->getEnemyArray();
	//for (int i = 0; i < 3; i++)
	//{
	//	PartenerView* p1 = PartenerView::create();
	//	PartenerVo* pinfo1 = PartenerVo::create();
	//	pinfo1->name = "fuwanghero";
	//	pinfo1->posId = i;
	//	pinfo1->gender = 1;
	//	pinfo1->pngName = "fuwang/FuWang0.png";
	//	pinfo1->xmlName = "fuwang/FuWang0.plist";
	//	pinfo1->jsonName = "fuwang/FuWang.ExportJson";
	//	p1->setInfo(pinfo1);
	//	enemy->addObject(p1);
	//}

	//CCDataReaderHelper::sharedDataReaderHelper()->addDataFromFileAsync();
	//CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile(string("fuwang/FuWang0.plist").c_str(), string("fuwang/FuWang0.png").c_str());
	

}

void GameWorld::enterWarScene()
{
	CCLog("callback");
	CCScene* warScene = WarScene::scene();
	CCDirector::sharedDirector()->replaceScene(warScene);
}