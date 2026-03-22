#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5897CA91FEB65CA5;
namespace System { class String; }

#define MOLEMOLE_UIACHIEVEMENTITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB30F0)
#define MOLEMOLE_UIACHIEVEMENTITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x8AB3100)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementItemWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 74518;

	class UIAchievementItemWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_5897CA91FEB65CA5* achievementData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::String* _OnScrollItemUpdate_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
