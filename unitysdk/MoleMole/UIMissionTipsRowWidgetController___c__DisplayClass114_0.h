#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_68541BF67D60A62B;
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E86090)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x9E860A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass114_0_TypeDefinitionIndex = 58131;

	class UIMissionTipsRowWidgetController___c__DisplayClass114_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* __4__this; // 0x18
		::Class_1_68541BF67D60A62B* animResetHelper; // 0x20
		::UnityEngine::Animation* tipAni; // 0x28

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
