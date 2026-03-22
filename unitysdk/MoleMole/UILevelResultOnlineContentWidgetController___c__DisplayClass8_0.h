#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AA67334306B34AB0.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
namespace System { class String; }

#define MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x6CAE550)
#define MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__0_OFFSET UNITYSDK_OFFSET(0x6CAE560)
#define MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__1_OFFSET UNITYSDK_OFFSET(0x6CAE5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultOnlineContentWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 41633;

	class UILevelResultOnlineContentWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_BE6BF7909AD9D940* friendBrief; // 0x10
		::System::Int32 contributionRatio; // 0x18
		::Enum_3_AA67334306B34AB0 teamInfoType; // 0x1C
		::System::Boolean isFakePlayer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshInfo_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__0_OFFSET))(this);
		}

		::System::Void _RefreshInfo_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__1_OFFSET))(this);
		}
	};
}
