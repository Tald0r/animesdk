#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2465FE796254C062.h"
#include "unitysdk/System/Object.h"

class Class_1_2203E1F22CACEF25;
namespace System { class String; }

#define CLASS_1_59E69BDAEE19603F__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D7350)

inline static constexpr unsigned int Class_1_59E69BDAEE19603F_TypeDefinitionIndex = 68026;

class Class_1_59E69BDAEE19603F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::Struct_2_2465FE796254C062>* Field_1_2; // 0x18
	::Class_1_2203E1F22CACEF25* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E69BDAEE19603F__CTOR_OFFSET))(this);
	}
};
