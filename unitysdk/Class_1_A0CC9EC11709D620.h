#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2465FE796254C062.h"
#include "unitysdk/System/Object.h"

class Class_1_BB7873D919742DF3;
namespace System { class String; }

#define CLASS_1_A0CC9EC11709D620__CTOR_OFFSET UNITYSDK_OFFSET(0x7371A10)

inline static constexpr unsigned int Class_1_A0CC9EC11709D620_TypeDefinitionIndex = 65364;

class Class_1_A0CC9EC11709D620 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_2465FE796254C062>* Field_1_2; // 0x10
	::Class_1_BB7873D919742DF3* Field_1_1; // 0x18
	::System::String* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0CC9EC11709D620__CTOR_OFFSET))(this);
	}
};
