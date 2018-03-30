#include <gam/gam.hpp>
#include <gam/vid.hpp>

#include <iostream>

int main(int argc, char *argv[]) {
	std::cout<<"Using GAM Version : "
		 <<gam::property::grab("version-major")<<"."
		 <<gam::property::grab("version-minor")<<"-"
		 <<gam::property::grab("version-flair")<<"\n";

	gam::window* win = gam::vid::openWindow("Test Window", 1280, 720);
	
	return 0;

}
