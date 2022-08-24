#pragma once
struct GraphicParams
{
	enum VTypes {
		OpenGL,
		Vulkan,
	};

	enum WindowTypes {
		GLFW,
	};

	void setVideoType(VTypes type);
	VTypes getVideoType();

	void setWindowType(WindowTypes type);
	WindowTypes getWindowType();

private:
	VTypes vType;
	WindowTypes windowType;
};

