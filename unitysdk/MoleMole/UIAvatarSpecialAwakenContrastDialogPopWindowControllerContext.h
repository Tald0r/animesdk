#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC2A4050)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastDialogPopWindowControllerContext_TypeDefinitionIndex = 66748;

	class UIAvatarSpecialAwakenContrastDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D89CCC627A66D0AD* AvatarData; // 0x28
		::System::Int32 AvatarAwakenID; // 0x30
		::System::Int32 AvatarAwakenDesItemIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
