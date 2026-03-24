#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_303;
class Class_1_2C434B932ED0B61F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneBossPeformConfig; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x81F88E0)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__1_OFFSET UNITYSDK_OFFSET(0x81F8A30)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__2_OFFSET UNITYSDK_OFFSET(0x81F8C50)
#define MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_G__HANDLEENTITYANIMATOR_0_OFFSET UNITYSDK_OFFSET(0x81F88F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneBossPeformConfig___c__DisplayClass15_0_TypeDefinitionIndex = 46906;

	class SceneBossPeformConfig___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_303* node; // 0x10
		::System::Action_1<::MoleMole::Battle::Entity*>* __9__2; // 0x18
		::MoleMole::Config::SceneBossPeformConfig* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_g__HandleEntityAnimator_0(::Class_0_16E4307DCC419505_303* performNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_303*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEBOSSPEFORMCONFIG___C__DISPLAYCLASS15_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_G__HANDLEENTITYANIMATOR_0_OFFSET))(this, performNode);
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
