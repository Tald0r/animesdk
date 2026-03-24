#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL_METHOD_1_0063D12C321FE92D_OFFSET UNITYSDK_OFFSET(0xACDF880)
#define MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL__CTOR_OFFSET UNITYSDK_OFFSET(0xACDF720)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigOutlineObjectRenderer_Local_TypeDefinitionIndex = 49305;

	class ConfigOutlineObjectRenderer_Local : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* OutlineColorGradient; // 0x10
		::System::Single OutlineColorIntensity; // 0x18
		::System::Single OutlineAnimLifetime; // 0x1C
		::System::Boolean OccludedByDepth; // 0x20
		::System::Boolean OccludedByCharacters; // 0x21
		::System::Boolean enableAvatarUI; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_0063D12C321FE92D(::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL_METHOD_1_0063D12C321FE92D_OFFSET))(this, a1);
		}
	};
}
