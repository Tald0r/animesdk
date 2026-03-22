#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_335;
class Class_3_AE02BC8285203464_14;
namespace MoleMole { class UIRoleBreakThroughController; }

#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EF2F0)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xA3EF300)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleBreakThroughController___c__DisplayClass36_0_TypeDefinitionIndex = 40031;

	class UIRoleBreakThroughController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleBreakThroughController* __4__this; // 0x10
		::Class_2_208CC9941471731A_335* advNextLvTemplate; // 0x18
		::Class_3_AE02BC8285203464_14* serverInfo; // 0x20
		::Class_2_208CC9941471731A_335* advCurLvTempalte; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___C__DISPLAYCLASS36_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
