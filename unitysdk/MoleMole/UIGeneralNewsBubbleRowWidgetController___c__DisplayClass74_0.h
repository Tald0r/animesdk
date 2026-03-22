#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0CDD0BEB64607A45.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF4030)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS74_0____SETUPUPDATEMISSIONCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xBFF4040)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass74_0_TypeDefinitionIndex = 60670;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBubbleTips* bubbleTips; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void ___SetupUpdateMissionCallback_b__0(::Struct_2_0CDD0BEB64607A45 data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_0CDD0BEB64607A45))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS74_0____SETUPUPDATEMISSIONCALLBACK_B__0_OFFSET))(this, data);
		}
	};
}
