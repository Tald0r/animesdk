#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIAVATARSPECIALAWAKENDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F8080)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenDialogPopWindowControllerContext_TypeDefinitionIndex = 38981;

	class UIAvatarSpecialAwakenDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D89CCC627A66D0AD* AvatarData; // 0x28
		::System::Int32 AvatarAwakenID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
