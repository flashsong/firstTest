#include "AppDelegate.h"
#include "GameScene.h"
#include "war/WarScene.h"
#include "cocos2d.h"
#include "CCEGLView.h"
#include "script_support/CCScriptSupport.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "Lua_extensions_CCB.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#include "Lua_web_socket.h"
#endif

USING_NS_CC;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    CCDirector* pDirector = CCDirector::sharedDirector();
    CCEGLView* pEGLView = CCEGLView::sharedOpenGLView();

    pDirector->setOpenGLView(pEGLView);
	
    // turn on display FPS
    pDirector->setDisplayStats(true);

	pEGLView->setDesignResolutionSize(1136, 640, kResolutionNoBorder);
	//pEGLView->setFrameSize(960, 640)

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

    // create a scene. it's an autorelease object
    CCScene *pScene = GameWorld::scene();
	//CCScene* pScene = WarScene::scene();

    // run
    pDirector->runWithScene(pScene);

//	// register lua engine
//	CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
//	CCScriptEngineManager::sharedManager()->setScriptEngine(pEngine);
//
//	CCLuaStack *pStack = pEngine->getLuaStack();
//	lua_State *tolua_s = pStack->getLuaState();
//	tolua_extensions_ccb_open(tolua_s);
//#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
//	pStack = pEngine->getLuaStack();
//	tolua_s = pStack->getLuaState();
//	tolua_web_socket_open(tolua_s);
//#endif
//
//	std::string path = CCFileUtils::sharedFileUtils()->fullPathForFilename("hello.lua");
//	pEngine->executeScriptFile(path.c_str());

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    CCDirector::sharedDirector()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    CCDirector::sharedDirector()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
