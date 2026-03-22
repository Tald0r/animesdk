#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E1E510)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int MathfInternal_TypeDefinitionIndex = 5045;

	struct alignas(1) MathfInternal
	{
		static ::System::Boolean* StaticGet_IsFlushToZeroEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x25B0);
		}
		static ::System::Single* StaticGet_FloatMinDenormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x25B4);
		}
		static ::System::Single* StaticGet_FloatMinNormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x25B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET))();
		}
	};
}
