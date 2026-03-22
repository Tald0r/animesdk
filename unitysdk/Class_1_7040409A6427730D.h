#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7040409A6427730D__CTOR_OFFSET UNITYSDK_OFFSET(0xBC90070)

inline static constexpr unsigned int Class_1_7040409A6427730D_TypeDefinitionIndex = 43081;

class Class_1_7040409A6427730D : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7040409A6427730D__CTOR_OFFSET))(this);
	}
};
