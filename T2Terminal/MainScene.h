/*
* @author: Praveen Suryawanshi
* @mailto: suryawanshi.praveen007@gmail.com
* please dont remove @author or modify it.
* any changes or bug fixes are done please annotate the locations where bug fixed.
*/

#pragma once
#ifndef _MAIN_SCENE_H_
#define  _MAIN_SCENE_H_


#include "IScene.h"
#include "Scene_1.h"
#include "Scene_2.h"
#include "Scene_3.h"


#define CAM_SPEED_AIRPORT 5.0f
#define CAM_SPEED_TERRAIN 5.05f
#define TRANSLATE_Z_AIRPORT -2500.0f
#define TRANSLATE_Z_TERRAIN -30.0f
#define TRANSLATE_Z_TERRAIN_LIMIT 15.0f
#define TRANSLATE_Z_SINGLE_AEROPLANE_LIMIT -2000.0f

using namespace T2Terminal;

namespace T2Terminal
{

	class MainScene : virtual public IScene
	{

	private:

		IScene *_scene;

		IScene *_scene_1;
		IScene *_scene_2;
		IScene *_scene_3;

		bool _switch;
		int _axis= 0;
		float _cam_speed;
		
		vmath::mat4 _perspectiveProjectionMatrix;

		IScene::ResizeAttributes _resizeAttributes;
		IScene::Attributes _attributes;

	public:
		MainScene();

		~MainScene();



		// Inherited via IScene
		virtual BOOL SceneHandler(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) override;

		virtual void Initialize() override;

		virtual void Update() override;

		virtual void ReSize(int width, int height, struct ResizeAttributes attributes) override;

		virtual void Render(HDC hdc, struct Attributes attributes) override;

		virtual void SceneTransition() override;

		virtual void UnInitialize() override;

		void UpdateTransformationAttributes();
		void InitializeTransformationAttributes();
		void InitializeResizeAttributes();
	};
}

#endif