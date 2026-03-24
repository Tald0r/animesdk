#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D06919D0930604DE_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ACTIVITYCOMBATPAUSESTAGEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x94D9E00)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPauseStageWidgetContext_TypeDefinitionIndex = 66372;

	class ActivityCombatPauseStageWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onSelectQuest; // 0x28
		::System::Int32 targetQuestID; // 0x30
		::System::Int32 activityID; // 0x34
		::Class_4_D06919D0930604DE_Enum_3_05BF65C41833FF20 activityBattleType; // 0x38
		::System::Boolean scrollToUnlockQuest; // 0x3C
		::System::Boolean scrollToQuest; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSESTAGEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
