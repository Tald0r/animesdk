#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER_TODOQUESTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x98F3030)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListPageController_TodoQuestItem_TypeDefinitionIndex = 43421;

	class UIOverlordFeastTodoListPageController_TodoQuestItem : public ::System::Object
	{
	public:
		::System::Int32 QuestID; // 0x10
		::System::Boolean ForceUninteractable; // 0x14
		::System::Boolean IsMainQuest; // 0x15
		::System::Int32 TabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER_TODOQUESTITEM__CTOR_OFFSET))(this);
		}
	};
}
