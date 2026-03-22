#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_A95E1742B5A455A4_CLASS_1_AEEEF65BA0CA06D5__CTOR_OFFSET UNITYSDK_OFFSET(0x8D23320)

inline static constexpr unsigned int Class_2_A95E1742B5A455A4_Class_1_AEEEF65BA0CA06D5_TypeDefinitionIndex = 41403;

class Class_2_A95E1742B5A455A4_Class_1_AEEEF65BA0CA06D5 : public ::System::Object
{
public:
	static ::System::Int64* StaticGet_Field_1_0()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A95E1742B5A455A4_Class_1_AEEEF65BA0CA06D5_TypeDefinitionIndex)->GetStaticField(0x96E0);
	}
	::System::Action* Field_1_3; // 0x10
	::System::Int64 Field_1_1; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A95E1742B5A455A4_CLASS_1_AEEEF65BA0CA06D5__CTOR_OFFSET))(this);
	}
};
