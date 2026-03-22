#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8916990)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS71_0__SETKEY_B__0_OFFSET UNITYSDK_OFFSET(0x89169A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass71_0_TypeDefinitionIndex = 60655;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::System::String* strParam; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x18
		::System::String* key; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::String* _SetKey_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS71_0__SETKEY_B__0_OFFSET))(this);
		}
	};
}
