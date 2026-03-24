#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF7E8B0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__0_OFFSET UNITYSDK_OFFSET(0xAF7EAB0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__1_OFFSET UNITYSDK_OFFSET(0xAF7EA10)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__2_OFFSET UNITYSDK_OFFSET(0xAF7E8C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS138_0__PLAYFINISHANIM_B__5_OFFSET UNITYSDK_OFFSET(0xAF7E950)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass138_0_TypeDefinitionIndex = 70940;

	class UIMissionTipsContainerWidgetController___c__DisplayClass138_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x10
		::System::Action* __9__5; // 0x18
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
