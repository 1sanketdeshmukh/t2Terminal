#pragma once
/*
* @author: Praveen Suryawanshi
* @mailto: suryawanshi.praveen007@gmail.com
* please dont remove @author or modify it.
* any changes or bug fixes are done please annotate the locations where bug fixed.
*/

#pragma once
#ifndef  _AIRPORT_TOP_H_
#define _AIRPORT_TOP_H_

#include"IScene.h"


namespace Rushabh
{

	class  AirportTop : virtual public T2Terminal::IScene
	{
	public:

		AirportTop();


		~AirportTop();

	private:

		GLuint _vertexShaderObject;
		GLuint _fragmentShaderObject;
		GLuint _shaderProgramObject;

		GLuint _modelMatrixUniform;
		GLuint _ViewMatrixUniform;
		GLuint _projectMatrixUniform;

		mat4 _perspectiveProjectionMatrix;

		GLuint _LaUniform;
		GLuint _LdUniform;
		GLuint _LsUniform;
		GLuint _LightPositionUniform;

		GLfloat _angle;

		GLuint material_shininess_uniform;

		ModelParser *_modelParser;

	public:

		virtual BOOL SceneHandler(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) override;

		virtual void Initialize() override;

		virtual void Update() override;

		virtual void ReSize(int width, int height, struct ResizeAttributes attributes) override;

		virtual void Render(HDC hdc, struct Attributes attributes) override;

		virtual void SceneTransition() override;

		virtual void UnInitialize() override;

	};
}


#endif // ! _SINGLE_AEROPLANE_H_
