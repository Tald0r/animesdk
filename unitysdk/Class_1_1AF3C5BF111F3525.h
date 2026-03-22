#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_571902F418F29BB4;
namespace System { class String; }

#define CLASS_1_1AF3C5BF111F3525__CTOR_OFFSET UNITYSDK_OFFSET(0xB6920C0)

inline static constexpr unsigned int Class_1_1AF3C5BF111F3525_TypeDefinitionIndex = 50051;

class Class_1_1AF3C5BF111F3525 : public ::System::Object
{
public:
	::Class_1_571902F418F29BB4* Field_1_0; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Single Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AF3C5BF111F3525__CTOR_OFFSET))(this);
	}
};
