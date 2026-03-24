#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCOPYFLAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B3EB70)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MatCopyFlag_TypeDefinitionIndex = 29886;

	class MatCopyFlag : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_CopyOnSubThread()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatCopyFlag_TypeDefinitionIndex)->GetStaticField(0x6970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATCOPYFLAG__CCTOR_OFFSET))();
		}
	};
}
