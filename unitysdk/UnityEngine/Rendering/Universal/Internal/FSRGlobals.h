#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEMASK_OFFSET UNITYSDK_OFFSET(0x1865DB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEVALUE_OFFSET UNITYSDK_OFFSET(0x1865DC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1865DCC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1865DCB0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FSRGlobals_TypeDefinitionIndex = 30008;

	class FSRGlobals : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_ForceReactiveMaskPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FSRGlobals_TypeDefinitionIndex)->GetStaticField(0x23EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_ReactiveMask()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEMASK_OFFSET))();
		}

		static ::System::Single get_ReactiveValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEVALUE_OFFSET))();
		}
	};
}
