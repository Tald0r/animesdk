#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B87FDFC0522339DA__CTOR_OFFSET UNITYSDK_OFFSET(0x701B6B0)

inline static constexpr unsigned int Class_1_B87FDFC0522339DA_TypeDefinitionIndex = 73763;

class Class_1_B87FDFC0522339DA : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_4; // 0x18
	::Foundation::AssetPath Field_1_3; // 0x20
	::System::String* Field_1_2; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::System::Int32 Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87FDFC0522339DA__CTOR_OFFSET))(this);
	}
};
