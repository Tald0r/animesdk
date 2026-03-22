#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass97_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9E85DF0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_1__PLAYHDDHANGTIP_B__2_OFFSET UNITYSDK_OFFSET(0x9E85E00)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_1__PLAYHDDHANGTIP_B__3_OFFSET UNITYSDK_OFFSET(0x9E85E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass97_1_TypeDefinitionIndex = 75714;

	class UIMissionTipsContainerWidgetController___c__DisplayClass97_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass97_0* CS___8__locals1; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x18
		::System::Action* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_1__PLAYHDDHANGTIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_1__PLAYHDDHANGTIP_B__3_OFFSET))(this);
		}
	};
}
