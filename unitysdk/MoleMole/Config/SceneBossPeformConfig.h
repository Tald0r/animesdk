#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_326;
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0xE4460E0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET UNITYSDK_OFFSET(0xE4462B0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET UNITYSDK_OFFSET(0xE446240)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET UNITYSDK_OFFSET(0xE446320)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET UNITYSDK_OFFSET(0xE446390)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE446650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneBossPeformConfig_TypeDefinitionIndex = 48619;

	class SceneBossPeformConfig : public ::System::Object
	{
	public:
		::System::String* CameraShotKey; // 0x10
		::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* AnimParams; // 0x18
		::System::Single InputMuteDelayTime; // 0x20
		::System::Single ShowUIDelayTime; // 0x24
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x28
		::System::Boolean EntityVisible; // 0x29
		::System::Boolean IsGroupShotData; // 0x2A
		::System::Single FlowCanvasDelayTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::Config::SceneEntityCutSceneConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_INIT_OFFSET))(this, config);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_inputMuteDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_flowCanvasDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_showUIDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET))(this);
		}

		::System::Void MoleMole_Config_IScenePerformConfig_Setup(::Class_0_16E4307DCC419505_326* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_326*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET))(this, node);
		}
	};
}
