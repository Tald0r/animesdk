#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_EFB6B11689B6B7AF__CCTOR_OFFSET UNITYSDK_OFFSET(0xA93EB00)

inline static constexpr unsigned int Struct_2_EFB6B11689B6B7AF_TypeDefinitionIndex = 66183;

struct alignas(4) Struct_2_EFB6B11689B6B7AF
{
	static ::Struct_2_EFB6B11689B6B7AF* StaticGet_Field_2_3()
	{
		return (::Struct_2_EFB6B11689B6B7AF*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_EFB6B11689B6B7AF_TypeDefinitionIndex)->GetStaticField(0xFBE0);
	}
	::UnityEngine::Vector2 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x18
	::UnityEngine::Vector2 Field_2_2; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_EFB6B11689B6B7AF__CCTOR_OFFSET))();
	}
};
