#include <iostream>
#include <filesystem>
#include "Image.h"

/*
https://youtube.com/roundbeargames

From Roundbeargames
~~~~~~~~~~~~~~~~~~~

I added a line to get "current path".
Make sure the image file is in that directory.
(or specify a directory yourself starting from the "current path")

Author of this code is 'Code Break' from YouTube
https://youtu.be/028GNYC32Rg
https://github.com/Code-Break0/Image-Processing
*/

int main(int argc, char** argv) 
{
	std::filesystem::path p = std::filesystem::current_path();
	
	std::cout << "current path: " << p << std::endl;

	std::cout << std::endl;
	
	Image image("randompic.jpg");

	std::cout << std::endl;

	if (image.data != nullptr)
	{
		std::cout << "file read successfully!" << std::endl;
		std::cout << "width: " << image.w << std::endl;
		std::cout << "height: " << image.h << std::endl;
	}

	return 0;
}