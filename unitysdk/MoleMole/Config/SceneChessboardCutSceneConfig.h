#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Config/SceneChessboardCutSceneConfig_BodySize.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePeformAnimatorParam; }

#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9198330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneChessboardCutSceneConfig_TypeDefinitionIndex = 45141;

	class SceneChessboardCutSceneConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>* AnimParams; // 0x10
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x18
		::MoleMole::Config::SceneChessboardCutSceneConfig_BodySize bodySize; // 0x1C
		::System::Single cutSceneAjustX; // 0x20
		::System::Single FlowCanvasDelayTime; // 0x24
		::System::Single cutSceneAjustHeight; // 0x28
		::System::Single ShowUIDelayTime; // 0x2C
		::System::Single cutSceneAjustZ; // 0x30
		::System::Single InputMuteDelayTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG__CTOR_OFFSET))(this);
		}
	};
}
