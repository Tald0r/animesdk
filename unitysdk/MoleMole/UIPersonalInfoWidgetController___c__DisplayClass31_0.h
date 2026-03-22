#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2F3C7D4EFC74D485;

#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1F370)
#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS31_0__ONUIFADEPLAYFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xAC1F380)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoWidgetController___c__DisplayClass31_0_TypeDefinitionIndex = 39565;

	class UIPersonalInfoWidgetController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::Class_2_2F3C7D4EFC74D485* friendModel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIFadePlayFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS31_0__ONUIFADEPLAYFINISH_B__0_OFFSET))(this);
		}
	};
}
