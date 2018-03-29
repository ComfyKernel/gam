#ifndef GAM_VID_HPP
#define GAM_VID_HPP

#include <string>

namespace gam {
  namespace vid {
    namespace property {
      void* __get(const std::string&);
      void  __set(const std::string&, void*);

      template<typename T>
      const T& get(const std::string& name) {
	return *(T*)__get(name);
      }

      template<typename T>
      void set(const std::string& name, const T& data) {
	T* dat = new T(data);
	__set(name, dat);
      }
    };
    
    void clear();
  };
};

#endif
