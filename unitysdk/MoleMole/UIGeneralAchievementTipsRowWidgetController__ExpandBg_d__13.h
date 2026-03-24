#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralAchievementTipsRowWidgetController; }

#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xADF16F0)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADF1890)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADF18F0)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xADF18A0)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADF16E0)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0xADF16D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAchievementTipsRowWidgetController__ExpandBg_d__13_TypeDefinitionIndex = 56537;

	class UIGeneralAchievementTipsRowWidgetController__ExpandBg_d__13 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralAchievementTipsRowWidgetController* __4__this; // 0x10
		::System::Boolean isFadeIn; // 0x18
		::System::Single from; // 0x1C
		::System::Single _t_5__2; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single length; // 0x28
		::System::Single to; // 0x2C
		::System::Single __2__current; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
