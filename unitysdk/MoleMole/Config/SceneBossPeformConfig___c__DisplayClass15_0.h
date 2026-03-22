#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_326;
class Class_1_2C434B932ED0B61F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneBossPeformConfig; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E2090)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__1_OFFSET UNITYSDK_OFFSET(0xC1E21E0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__2_OFFSET UNITYSDK_OFFSET(0xC1E23F0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_G__HANDLEENTITYANIMATOR_0_OFFSET UNITYSDK_OFFSET(0xC1E20A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneBossPeformConfig___c__DisplayClass15_0_TypeDefinitionIndex = 48620;

	class SceneBossPeformConfig___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_326* node; // 0x10
		::System::Action_1<::MoleMole::Battle::Entity*>* __9__2; // 0x18
		::MoleMole::Config::SceneBossPeformConfig* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_g__HandleEntityAnimator_0(::Class_0_16E4307DCC419505_326* performNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_326*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_G__HANDLEENTITYANIMATOR_0_OFFSET))(this, performNode);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__1(::Class_1_2C434B932ED0B61F* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C434B932ED0B61F*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__1_OFFSET))(this, task);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__2(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__2_OFFSET))(this, entity);
		}
	};
}
