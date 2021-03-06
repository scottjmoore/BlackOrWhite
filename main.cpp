#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Example : public olc::PixelGameEngine
{
public:

	Example()
	{
		sAppName = "Example";
	}

public:

	bool OnUserCreate() override
	{
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand()% 255));
		return true;
	}

};

int main()
{
	Example demo;

	if (demo.Construct(512, 480, 2, 2))
		demo.Start();

	return 0;
}