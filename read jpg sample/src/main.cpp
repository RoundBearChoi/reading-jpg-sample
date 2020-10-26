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
	
	Image image1("randompic.jpg");
	
	std::cout << std::endl;

	if (image1.data != nullptr)
	{
		std::cout << "image1 read successfully!" << std::endl;
		std::cout << "width: " << image1.w << std::endl;
		std::cout << "height: " << image1.h << std::endl;
	}

	Image image2("RandomFolder/randompic2.jpg");

	return 0;
}