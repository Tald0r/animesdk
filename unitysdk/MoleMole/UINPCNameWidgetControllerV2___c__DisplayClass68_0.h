#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINPCNameWidgetControllerV2; }
namespace System { class String; }

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC81D500)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS68_0__PLAYARROWANIM_B__0_OFFSET UNITYSDK_OFFSET(0xC81D510)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2___c__DisplayClass68_0_TypeDefinitionIndex = 44440;

	class UINPCNameWidgetControllerV2___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::String* clipName; // 0x10
		::MoleMole::UINPCNameWidgetControllerV2* __4__this; // 0x18
		::System::Boolean isShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArrowAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS68_0__PLAYARROWANIM_B__0_OFFSET))(this);
		}
	};
}
