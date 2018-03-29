#include <gam/gam.hpp>

#include <iostream>

int main(int argc, char *argv[]) {
	std::cout<<"Using GAM Version : "
		 <<gam::property::grab("version-major")<<"."
		 <<gam::property::grab("version-minor")<<"-"
		 <<gam::property::grab("version-flair")<<"\n";

	return 0;

}
