#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5E0F47F5C3BFCC4E;
namespace System { class Action; }

#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_CANCELTWEEN_OFFSET UNITYSDK_OFFSET(0x86B6320)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYINSERT_OFFSET UNITYSDK_OFFSET(0x86B5EE0)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYREMOVE_OFFSET UNITYSDK_OFFSET(0x86B5F60)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONSETROOTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x86B5FE0)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86B6430)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYINSERT_OFFSET UNITYSDK_OFFSET(0x86B6220)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYREMOVE_OFFSET UNITYSDK_OFFSET(0x86B62A0)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_SETTWEENDURATION_OFFSET UNITYSDK_OFFSET(0x86B63A0)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x86B6500)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONSETROOTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x86B65B0)
#define MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86B6530)

namespace MoleMole
{
	inline static constexpr unsigned int UITweenSlotWidgetController_TypeDefinitionIndex = 71133;

	class UITweenSlotWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_5E0F47F5C3BFCC4E* _tweenSlotContainer; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayInsert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYINSERT_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_GET_NEEDPLAYREMOVE_OFFSET))(this);
		}

		::System::Void OnSetRootController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONSETROOTCONTROLLER_OFFSET))(this);
		}

		::System::Void PlayInsert(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYINSERT_OFFSET))(this, action);
		}

		::System::Void PlayRemove(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_PLAYREMOVE_OFFSET))(this, action);
		}

		::System::Void CancelTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_CANCELTWEEN_OFFSET))(this);
		}

		::System::Void SetTweenDuration(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_SETTWEENDURATION_OFFSET))(this, duration);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnSetRootController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWEENSLOTWIDGETCONTROLLER___BASE_ONSETROOTCONTROLLER_OFFSET))(this);
		}
	};
}
