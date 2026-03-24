#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_Group_Enum_3_2AC037E3263F934D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_148;
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB477860)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB477C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Group_TypeDefinitionIndex = 80275;

	class ConfigSoundActionTriggerCondition_Group : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundActionTriggerCondition_Group_Enum_3_2AC037E3263F934D combineOp; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ISoundActionTriggerCondition*>* conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_148* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GROUP_EVALUATE_OFFSET))(this, a1);
		}
	};
}
