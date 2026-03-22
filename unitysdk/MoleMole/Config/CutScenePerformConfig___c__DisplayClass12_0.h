#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_326;
class Class_1_2C434B932ED0B61F;
namespace MoleMole::Config { class CutScenePerformConfig; }

#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9711ED0)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET UNITYSDK_OFFSET(0x9711EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutScenePerformConfig___c__DisplayClass12_0_TypeDefinitionIndex = 64639;

	class CutScenePerformConfig___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::CutScenePerformConfig* __4__this; // 0x10
		::Class_0_16E4307DCC419505_326* node; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__0(::Class_1_2C434B932ED0B61F* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C434B932ED0B61F*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET))(this, task);
		}
	};
}
