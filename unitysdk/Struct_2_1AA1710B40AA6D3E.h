#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_1AA1710B40AA6D3E_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x38DCE0)
#define STRUCT_2_1AA1710B40AA6D3E__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA422C0)

inline static constexpr unsigned int Struct_2_1AA1710B40AA6D3E_TypeDefinitionIndex = 60358;

struct alignas(4) Struct_2_1AA1710B40AA6D3E
{
	static ::Struct_2_1AA1710B40AA6D3E* StaticGet_Field_2_3()
	{
		return (::Struct_2_1AA1710B40AA6D3E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_1AA1710B40AA6D3E_TypeDefinitionIndex)->GetStaticField(0xB1F0);
	}
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_1AA1710B40AA6D3E__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1AA1710B40AA6D3E_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}
};
