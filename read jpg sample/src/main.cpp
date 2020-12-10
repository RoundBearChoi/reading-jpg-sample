#include <iostream>
#include <filesystem>
#include "Image.h"

/*
https://youtube.com/roundbeargames

From Roundbeargames
~~~~~~~~~~~~~~~~~~~

I'm using std::filesystem::current_path() to get "current path".
Make sure the image file is in that directory.
e.g. image1

(or specify a directory yourself starting from the "current path")
e.g. image2

For more details, check out 'Code Break' from YouTube
https://youtu.be/028GNYC32Rg
https://github.com/Code-Break0/Image-Processing
*/

int main(int argc, char** argv) 
{
	std::filesystem::path p = std::filesystem::current_path();
	
	std::cout << "current path: " << p << std::endl;

	std::cout << std::endl;
	
	// read randompic.jpg and print (current path)

	Image image1("randompic.jpg");
	
	std::cout << std::endl;

	if (image1.data != nullptr)
	{
		std::cout << "image1 read successfully!" << std::endl;

		std::cout << std::endl;

		std::cout << "width: " << image1.w << std::endl;
		std::cout << "height: " << image1.h << std::endl;

		std::cout << std::endl;

		for (int i = 0; i < image1.w * image1.channels; i++)
		{
			int n = (int)image1.data[i];
			std::cout << n << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;

	// read randompic2 at a specific location

	Image image2("RandomFolder/randompic2.jpg");

	// copy house.jpg to "copied house.jpg"

	Image house("house.jpg");
	Image copiedhouse = house;
	copiedhouse.write("copied house.jpg");

	// create white.jpg

	Image white(100, 100, 3);
	
	for (int i = 0; i < white.w * white.h * white.channels; i++)
	{
		white.data[i] = 255;
	}

	white.write("white.jpg");

	return 0;
}