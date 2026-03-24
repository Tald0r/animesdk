#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_50C9EB011AF67869.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationTeleportRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95A7360)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__0_OFFSET UNITYSDK_OFFSET(0x95A7370)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__1_OFFSET UNITYSDK_OFFSET(0x95A73D0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__2_OFFSET UNITYSDK_OFFSET(0x95A74C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 73336;

	class UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::Struct_2_50C9EB011AF67869 baseParam; // 0x18
		::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController* __4__this; // 0x48
		::System::String* teleportAudioKey; // 0x50
		::System::Int32 teleportID; // 0x58
		::System::Boolean dialogReady; // 0x5C
		::System::Boolean menusReady; // 0x5D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__0_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__1_OFFSET))(this);
		}

		::System::Void _DoTeleportBigScene_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__DOTELEPORTBIGSCENE_B__2_OFFSET))(this);
		}
	};
}
