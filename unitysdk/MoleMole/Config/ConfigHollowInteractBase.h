#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BindSendMsgType.h"
#include "unitysdk/MoleMole/Config/HollowInteractType.h"
#include "unitysdk/MoleMole/Config/InteractPosType.h"
#include "unitysdk/MoleMole/Config/InteractTargetType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_3E7861A5123BFC05;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractEffect; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x8054E00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractBase_TypeDefinitionIndex = 77710;

	class ConfigHollowInteractBase : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowInteractEffect* Effect; // 0x10
		::MoleMole::Config::ConfigHollowInteractEffect* FailureEffect; // 0x18
		::MoleMole::Config::ConfigHollowInteractCondition* Condition; // 0x20
		::System::Boolean IsInteractFailure; // 0x28
		::System::Boolean BreakSleep; // 0x29
		::System::Boolean DestroyAfterInteract; // 0x2A
		::System::Boolean EnableDefault; // 0x2B
		::System::Int32 Group; // 0x2C
		::System::Int32 Priority; // 0x30
		::System::Boolean ForbidMove; // 0x34
		::System::Boolean TryMoveToTarget; // 0x35
		::MoleMole::Config::HollowInteractType InteractType; // 0x38
		::MoleMole::Config::InteractPosType PosType; // 0x3C
		::MoleMole::InputLogicEventType ConsoleOrKeyboardEvent; // 0x40
		::MoleMole::Config::BindSendMsgType BindMove; // 0x44
		::MoleMole::Config::InteractTargetType Type; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET))(this);
		}
	};
}
