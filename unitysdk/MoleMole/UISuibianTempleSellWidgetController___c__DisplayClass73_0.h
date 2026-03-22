#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_235;
namespace MoleMole { class UISuibianTempleSellWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC4420)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__0_OFFSET UNITYSDK_OFFSET(0xBEC4430)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__1_OFFSET UNITYSDK_OFFSET(0xBEC4570)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController___c__DisplayClass73_0_TypeDefinitionIndex = 40478;

	class UISuibianTempleSellWidgetController___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianTempleSellWidgetController* __4__this; // 0x10
		::System::Action_1<::Class_3_025FF4981524A424_235*>* __9__1; // 0x18
		::System::UInt32 buddyUid; // 0x20
		::System::UInt32 benchUid; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectBuddy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__0_OFFSET))(this);
		}

		::System::Void _OnSelectBuddy_b__1(::Class_3_025FF4981524A424_235* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_235*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__1_OFFSET))(this, ret);
		}
	};
}
