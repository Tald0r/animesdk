#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_84CEDCEF739506C1_2;
namespace MoleMole { class UIMonsterCardInfoPopWindowController_MonsterInfoExt; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOOVERALL__CTOR_OFFSET UNITYSDK_OFFSET(0x68CFF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_MonsterInfoOverAll_TypeDefinitionIndex = 36908;

	class UIMonsterCardInfoPopWindowController_MonsterInfoOverAll : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterCardInfoPopWindowController_MonsterInfoExt* m_extInfo; // 0x10
		::Class_2_84CEDCEF739506C1_2* m_cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOOVERALL__CTOR_OFFSET))(this);
		}
	};
}
