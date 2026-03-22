#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIARCADEACHIEVEMENTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC2621E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementDialogContext_TypeDefinitionIndex = 63521;

	class UIArcadeAchievementDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ArcadeGameID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
