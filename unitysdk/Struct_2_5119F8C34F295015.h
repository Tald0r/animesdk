#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_50C9EB011AF67869.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_5119F8C34F295015_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x2C5A90)
#define STRUCT_2_5119F8C34F295015__CCTOR_OFFSET UNITYSDK_OFFSET(0x5E23810)

inline static constexpr unsigned int Struct_2_5119F8C34F295015_TypeDefinitionIndex = 53566;

struct alignas(8) Struct_2_5119F8C34F295015
{
	static ::Struct_2_5119F8C34F295015* StaticGet_Field_2_0()
	{
		return (::Struct_2_5119F8C34F295015*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5119F8C34F295015_TypeDefinitionIndex)->GetStaticField(0x406A0);
	}
	::System::Int32 Field_2_1; // 0x10
	::Struct_2_50C9EB011AF67869 Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x48
	::UnityEngine::Vector3 Field_2_4; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5119F8C34F295015__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5119F8C34F295015_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
