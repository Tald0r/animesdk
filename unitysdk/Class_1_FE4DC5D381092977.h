#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EADB70559B2B5513.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define CLASS_1_FE4DC5D381092977_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB7A5480)
#define CLASS_1_FE4DC5D381092977__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A5470)

inline static constexpr unsigned int Class_1_FE4DC5D381092977_TypeDefinitionIndex = 58118;

class Class_1_FE4DC5D381092977 : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_4; // 0x18
	::System::Int32 Field_1_6; // 0x24
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x34
	::System::Single Field_1_8; // 0x40
	::UnityEngine::Vector3 Field_1_3; // 0x44
	::Struct_2_EADB70559B2B5513 Field_1_7; // 0x50
	::UnityEngine::Vector3 Field_1_5; // 0x54
	::System::Boolean Field_1_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4DC5D381092977__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4DC5D381092977_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
