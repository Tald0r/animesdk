#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FE835C8461DC4CA2;
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB6AE880)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0xB6AE890)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass114_0_TypeDefinitionIndex = 70856;

	class UIMissionTipsRowWidgetController___c__DisplayClass114_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowWidgetController* __4__this; // 0x10
		::UnityEngine::Animation* tipAni; // 0x18
		::Class_1_FE835C8461DC4CA2* animResetHelper; // 0x20
		::System::Action* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET))(this);
		}
	};
}
