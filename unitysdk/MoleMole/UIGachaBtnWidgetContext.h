#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1DB8237DEAE11F14;

#define MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA9110A0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA911090)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaBtnWidgetContext_TypeDefinitionIndex = 54208;

	class UIGachaBtnWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_1DB8237DEAE11F14* LoopTimer; // 0x28
		::Il2CppArray<::MoleMole::UIGachaBtnWidgetContext*>* UIGroup; // 0x30
		::System::Int32 GachaID; // 0x38
		::System::Int32 GachaScheduleID; // 0x3C
		::System::Int32 UIID; // 0x40
		::System::Boolean IsUIGroup; // 0x44
		::System::Int32 UIGroupID; // 0x48

		::System::Void _ctor(::System::Int32 gachaID, ::System::Int32 gachaScheduleID, ::System::Int32 uiID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_OFFSET))(this, gachaID, gachaScheduleID, uiID);
		}

		::System::Void _ctor_1(::System::Int32 uiGroupID, ::Il2CppArray<::MoleMole::UIGachaBtnWidgetContext*>* uiGroup, ::Class_1_1DB8237DEAE11F14* loopTimer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MoleMole::UIGachaBtnWidgetContext*>*, ::Class_1_1DB8237DEAE11F14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_1_OFFSET))(this, uiGroupID, uiGroup, loopTimer);
		}
	};
}
