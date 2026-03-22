#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_688;

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBECC8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastTabWidgetControllerContext_TypeDefinitionIndex = 50325;

	class UIAvatarSpecialAwakenContrastTabWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_688* Cfg; // 0x28
		::System::Int32 AvatarId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
