#pragma once
/*
* @author: Praveen Suryawanshi
* @mailto: suryawanshi.praveen007@gmail.com
* please dont remove @author or modify it.
* any changes or bug fixes are done please annotate the locations where bug fixed.
*/

#ifndef _SCENE_3_H_
#define _SCENE_3_H_

#include "Starfield.h"
#include "Fonts.h"
#include "PhotoRoom.h"


#include "IScene.h"
namespace Scene_3
{
	class Scene_3 : public virtual T2Terminal::IScene
	{
	public:
		Scene_3();
		~Scene_3();

	private:
		Sanket::Starfield *_Starfield;
		Sanket::Fonts *_Fonts;
		Rushabh::PhotoRoom *_PhotoRoom;

	public :

		// Inherited via IScene
		virtual BOOL SceneHandler(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) override;

		virtual void Initialize() override;

		virtual void Update() override;

		virtual void ReSize(int width, int height, struct ResizeAttributes attributes) override;

		virtual void Render(HDC hdc, struct Attributes attributes) override;

		virtual void SceneTransition() override;

		virtual void UnInitialize() override;

	};
}

#endif // !_SCENE_3_H_
