#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3810BE455E7DF21;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_29BBD019F6E58D37_CLASS_1_3FAB92F67B4AF3DD_METHOD_1_A870D910378065FD_OFFSET UNITYSDK_OFFSET(0x8A430B0)
#define CLASS_1_29BBD019F6E58D37_CLASS_1_3FAB92F67B4AF3DD__CTOR_OFFSET UNITYSDK_OFFSET(0x8A430A0)

inline static constexpr unsigned int Class_1_29BBD019F6E58D37_Class_1_3FAB92F67B4AF3DD_TypeDefinitionIndex = 69572;

class Class_1_29BBD019F6E58D37_Class_1_3FAB92F67B4AF3DD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_B3810BE455E7DF21*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29BBD019F6E58D37_CLASS_1_3FAB92F67B4AF3DD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A870D910378065FD(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_1_29BBD019F6E58D37_CLASS_1_3FAB92F67B4AF3DD_METHOD_1_A870D910378065FD_OFFSET))(this, a1);
	}
};
