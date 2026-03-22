#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_66BE267322CE07F6_METHOD_1_A7DA7E520D3F52A3_OFFSET UNITYSDK_OFFSET(0x8CF7C00)
#define CLASS_1_66BE267322CE07F6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CF7DC0)
#define CLASS_1_66BE267322CE07F6__CTOR_OFFSET UNITYSDK_OFFSET(0x8CF7BF0)

inline static constexpr unsigned int Class_1_66BE267322CE07F6_TypeDefinitionIndex = 52503;

class Class_1_66BE267322CE07F6 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66BE267322CE07F6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A7DA7E520D3F52A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66BE267322CE07F6_METHOD_1_A7DA7E520D3F52A3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66BE267322CE07F6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
