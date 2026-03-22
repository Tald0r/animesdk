#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8A3A4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmEntrancePageController_Context_TypeDefinitionIndex = 54794;

	class UIHouseRhythmEntrancePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsMain; // 0x28
		::System::Boolean OpenBySettlement; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
