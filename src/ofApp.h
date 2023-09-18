#pragma once

#include "ofMain.h"
#include <vector>
#include "Entity.h"
#include "ofxGui.h"
#include <time.h>
#include <list> //std::list, lista ligada

class ofApp : public ofBaseApp{

	public:
		void setup();
		void setupPelotas();
		void setupLemmings();
		void update();
		void updatePelotas();
		void updateLemmings();

		float imageGUNposx;
		float imageGUNposy;
		float imageSHIELDposx;
		float imageSHIELDposy;
		float imagePOWERposx;
		float imagePOWERposy;

		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

	//mis variables
		

		float gravity = 9.81f * 100; //escala a 100 px por metro

		float radioCirculo;

		
		std::vector<Entity> gameObjects;
		std::vector<ofColor> color;

		//casita de fondo
		ofImage imgHogar;
		ofImage Frasco;
		ofImage Arma;
		ofImage power;

		//estados de la aplicacion
		enum EAppState {
			menu, pelotas, lemmings, max
		} appstate ;

		//cosas del UI
		ofTrueTypeFont titleFont;
		ofTrueTypeFont uiFont;
		ofxPanel mainmenu;
		ofxButton btnEjercicio1, btnEjercicio2;

		void onBtn1Pressed();
		void onBtn2Pressed();

		//juego con inventario (lemmings)
		ofImage playerSpriteImg;
		float limit = 50;
		float posx;
		float posy;
		bool onHand = false;
		ofVec2f playerSize;
		ofVec2f playerSpriteOffset;

		ofVec2f Shieldsize;
		ofVec2f Shieldofset;

		ofVec2f Gundsize;
		ofVec2f Gundofset;

		ofVec2f Powersize;
		ofVec2f Powersetofset;

		//inputs del jugador
		bool w, s, a, d;
		//inventario, es una lista ligada
		std::list<Entity> inventory;
		Entity* currItem;
		void NextItem();
		void PrevItem();
		std::list<Entity>::iterator inventoryIterator;
};
