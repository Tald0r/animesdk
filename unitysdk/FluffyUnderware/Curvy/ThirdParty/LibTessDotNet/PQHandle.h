#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_PQHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A63EF70)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int PQHandle_TypeDefinitionIndex = 24596;

	struct alignas(4) PQHandle
	{
		static ::System::Int32* StaticGet_Invalid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PQHandle_TypeDefinitionIndex)->GetStaticField(0x4840);
		}
		::System::Int32 _handle; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_PQHANDLE__CCTOR_OFFSET))();
		}
	};
}
