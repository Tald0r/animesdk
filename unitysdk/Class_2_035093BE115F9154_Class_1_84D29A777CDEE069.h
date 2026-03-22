#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_035093BE115F9154_Enum_3_C81EECEE92663449.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_035093BE115F9154_CLASS_1_84D29A777CDEE069__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C2EF0)

inline static constexpr unsigned int Class_2_035093BE115F9154_Class_1_84D29A777CDEE069_TypeDefinitionIndex = 60301;

class Class_2_035093BE115F9154_Class_1_84D29A777CDEE069 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_1_6; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::String* Field_1_5; // 0x30
	::System::String* Field_1_2; // 0x38
	::System::String* Field_1_3; // 0x40
	::System::Boolean Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::Class_2_035093BE115F9154_Enum_3_C81EECEE92663449 Field_1_9; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_035093BE115F9154_CLASS_1_84D29A777CDEE069__CTOR_OFFSET))(this);
	}
};
