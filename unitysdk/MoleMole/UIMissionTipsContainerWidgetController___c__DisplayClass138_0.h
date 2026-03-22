#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__CTOR_OFFSET UNITYSDK_OFFSET(0x92B5090)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__0_OFFSET UNITYSDK_OFFSET(0x92B5290)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__1_OFFSET UNITYSDK_OFFSET(0x92B51F0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__2_OFFSET UNITYSDK_OFFSET(0x92B50A0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__5_OFFSET UNITYSDK_OFFSET(0x92B5130)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass138_0_TypeDefinitionIndex = 75708;

	class UIMissionTipsContainerWidgetController___c__DisplayClass138_0 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x18
		::System::Int32 newQuest; // 0x20
		::System::Boolean fromResume; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__2(::System::Boolean sound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__2_OFFSET))(this, sound);
		}

		::System::Void _PlayFinishAnim_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__5_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__1_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__0_OFFSET))(this);
		}
	};
}
