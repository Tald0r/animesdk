#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;

#define MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D6550)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompGotoMissionContext_TypeDefinitionIndex = 41671;

	class UIActivityCompGotoMissionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPGOTOMISSIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
