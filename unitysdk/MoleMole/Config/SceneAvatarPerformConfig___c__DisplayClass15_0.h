#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_326;
class Class_1_2C434B932ED0B61F;
namespace MoleMole::Config { class SceneAvatarPerformConfig; }

#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCCAA7E0)
#define MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET UNITYSDK_OFFSET(0xCCAA800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneAvatarPerformConfig___c__DisplayClass15_0_TypeDefinitionIndex = 73435;

	class SceneAvatarPerformConfig___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::SceneAvatarPerformConfig* __4__this; // 0x10
		::Class_0_16E4307DCC419505_326* node; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__0(::Class_1_2C434B932ED0B61F* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C434B932ED0B61F*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARPERFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET))(this, task);
		}
	};
}
