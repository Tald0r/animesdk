#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_5A89114937DE56DA_METHOD_2_9D455FE4693966A8_1_OFFSET UNITYSDK_OFFSET(0xD27F700)
#define CLASS_2_5A89114937DE56DA_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xD27F600)
#define CLASS_2_5A89114937DE56DA__CTOR_OFFSET UNITYSDK_OFFSET(0xD27F6C0)

inline static constexpr unsigned int Class_2_5A89114937DE56DA_TypeDefinitionIndex = 74726;

class Class_2_5A89114937DE56DA : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x80
	::System::Single Field_2_1; // 0x88
	::System::Boolean Field_2_2; // 0x8C
	::System::Int32 Field_2_3; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A89114937DE56DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A89114937DE56DA_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A89114937DE56DA_METHOD_2_9D455FE4693966A8_1_OFFSET))(this);
	}
};
