#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBF0F130)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPlayerInfoPageController_Context_TypeDefinitionIndex = 71777;

	class UIFriendSystemPlayerInfoPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 InitTabIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
