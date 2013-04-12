/*
-----------------------------------------------------------------------------
Filename:    TutorialApplication.cpp
-----------------------------------------------------------------------------

This source file is part of the
___                 __    __ _ _    _ 
/___\__ _ _ __ ___  / / /\ \ (_) | _(_)
//  // _` | '__/ _ \ \ \/  \/ / | |/ / |
\_// (_| | | |  __/  \  /\  /| |   <| |
\___/ \__, |_|  \___|   \/  \/ |_|_|\_\_|
|___/                              
Tutorial Framework
http://www.ogre3d.org/tikiwiki/
-----------------------------------------------------------------------------
*/
#include "TutorialApplication.h"

//-------------------------------------------------------------------------------------
TutorialApplication::TutorialApplication(void)
{
}
//-------------------------------------------------------------------------------------
TutorialApplication::~TutorialApplication(void)
{
}

//-------------------------------------------------------------------------------------
void TutorialApplication::createScene(void)
{
	// Set the scene's ambient light
	mSceneMgr->setAmbientLight(Ogre::ColourValue(1.0, 1.0, 1.0));

	// Create an Entity
	Ogre::Entity* ogreHead = mSceneMgr->createEntity("Head", "ogrehead.mesh");

	// Create a SceneNode and attach the Entity to it
	Ogre::SceneNode* headNode = mSceneMgr->getRootSceneNode()->createChildSceneNode("HeadNode");
	headNode->attachObject(ogreHead);
	headNode->yaw( Ogre::Degree( -90 ) );
	headNode->scale( .5, 1, 2 ); 
	Ogre::Entity* ogreHead2 = mSceneMgr->createEntity( "Head2", "ogrehead.mesh" );
	Ogre::SceneNode* headNode2 = mSceneMgr->getRootSceneNode()->createChildSceneNode( "HeadNode2", Ogre::Vector3( 100, 0, 0 ) );
	headNode2->attachObject( ogreHead2 );
	headNode2->pitch( Ogre::Degree( -90 ) );
	headNode2->scale( 1, 2, 1 );

	Ogre::Entity* ogreHead3 = mSceneMgr->createEntity( "Head3", "ogrehead.mesh" );
	Ogre::SceneNode* headNode3 = mSceneMgr->getRootSceneNode()->createChildSceneNode( "HeadNode3", Ogre::Vector3( 200, 0, 0 ) );
	headNode3->attachObject( ogreHead3 );

	headNode3->roll( Ogre::Degree( -90 ) );
	// Create a Light and set its position
	Ogre::Light* light = mSceneMgr->createLight("MainLight");
	light->setPosition(20.0f, 80.0f, 50.0f);
}


//
//#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
//#define WIN32_LEAN_AND_MEAN
//#include "windows.h"
//#endif
//
//#ifdef __cplusplus
//extern "C" {
//#endif
//
//#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
//	INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT )
//#else
//	int main(int argc, char *argv[])
//#endif
//	{
//		// Create application object
//		TutorialApplication app;
//
//		try {
//			app.go();
//		} catch( Ogre::Exception& e ) {
//#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
//			MessageBox( NULL, e.getFullDescription().c_str(), "An exception has occured!", MB_OK | MB_ICONERROR | MB_TASKMODAL);
//#else
//			std::cerr << "An exception has occured: " <<
//				e.getFullDescription().c_str() << std::endl;
//#endif
//		}
//
//		return 0;
//	}
//
//#ifdef __cplusplus
//}
//#endif