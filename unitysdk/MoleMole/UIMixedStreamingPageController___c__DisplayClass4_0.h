#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D180CBB13D9EF395_Enum_3_D1D49B5EF8F4C317_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMixedStreamingPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS4_0__CHANGESTATUS_B__0_OFFSET UNITYSDK_OFFSET(0x9AB7900)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9AB78F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController___c__DisplayClass4_0_TypeDefinitionIndex = 80407;

	class UIMixedStreamingPageController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMixedStreamingPageController* __4__this; // 0x10
		::System::Action* onComplete; // 0x18
		::Class_2_D180CBB13D9EF395_Enum_3_D1D49B5EF8F4C317_1 slotState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeStatus_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS4_0__CHANGESTATUS_B__0_OFFSET))(this);
		}
	};
}
