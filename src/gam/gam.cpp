#include <gam/gam.hpp>

const std::string _gam_properties[]={
  "no-property-found",
  "version-major","0",
  "version-minor","1",
  "version-flair","pre"
};

const std::string& gam::property::grab(const std::string& name) {
  for(unsigned int i=0; i<sizeof(_gam_properties)/sizeof(_gam_properties[0]); ++i) {
    if(_gam_properties[i] == name) {
      return _gam_properties[i + 1];
    }
  }

  return _gam_properties[0];
}
