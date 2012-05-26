#ifndef _PYTHON_ALEMBIC_OCOMPOUNDPROPERTY_H_
#define _PYTHON_ALEMBIC_OCOMPOUNDPROPERTY_H_

   #include "foundation.h"
   #include "oproperty.h"
   #include "oobject.h"

   #include <cstring>

   typedef struct __oCompoundProperty
   {
      PyObject_HEAD
      void * mArchive;
      Alembic::Abc::OCompoundProperty * mBaseCompoundProperty;
      std::string * mFullName;
   } oCompoundProperty;

   PyObject * oCompoundProperty_new(Alembic::Abc::OCompoundProperty compound, std::string compoundFullName, const char * in_propName, int tsIndex, void * in_Archive);
   void oCompoundProperty_deletePointers(oCompoundProperty * prop);

   bool register_object_oCompoundProperty(PyObject *module);

   #ifdef _DEBUG
      #include <iostream>
      #define INFO_MSG(msg)    std::cerr << "INFO [" << __FILE__ << ":" << __LINE__ << "] " << msg << std::endl
   #else
      #define INFO_MSG(msg)
   #endif

#endif
