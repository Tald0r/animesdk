#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/MoleMole/SceneQualityLevel.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectQuality.h"

namespace MoleMole { class SceneQualityProfileContext; }

#define MOLEMOLE_COMMANDLINESCENEQUALITY_METHOD_2_C29C8CADB68273FF_OFFSET UNITYSDK_OFFSET(0xE2AEE10)
#define MOLEMOLE_COMMANDLINESCENEQUALITY_METHOD_2_EB9779B12C7F7019_OFFSET UNITYSDK_OFFSET(0xE2AECA0)
#define MOLEMOLE_COMMANDLINESCENEQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0xE2AEDD0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineSceneQuality_TypeDefinitionIndex = 80743;

	class CommandLineSceneQuality : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::SceneQualityProfileContext*, ::MoleMole::CommandLineSceneQuality*>
	{
	public:
		::System::Nullable_1<::MoleMole::SceneQualityLevel> Quality; // 0x18
		::System::Nullable_1<::UnityEngine::Rendering::Universal::SceneEffectQuality> SceneEffectQuality; // 0x20
		::System::Nullable_1<::System::Single> SceneEffectCullingDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineSceneQuality* Method_2_EB9779B12C7F7019(::MoleMole::SceneQualityProfileContext* a1)
		{
			return ((::MoleMole::CommandLineSceneQuality*(*)(::PVOID, ::MoleMole::SceneQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEQUALITY_METHOD_2_EB9779B12C7F7019_OFFSET))(this, a1);
		}

		::MoleMole::SceneQualityProfileContext* Method_2_C29C8CADB68273FF(::MoleMole::SceneQualityProfileContext* a1)
		{
			return ((::MoleMole::SceneQualityProfileContext*(*)(::PVOID, ::MoleMole::SceneQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESCENEQUALITY_METHOD_2_C29C8CADB68273FF_OFFSET))(this, a1);
		}
	};
}
