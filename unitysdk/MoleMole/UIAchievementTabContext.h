#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_825;

#define MOLEMOLE_UIACHIEVEMENTTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB71E720)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementTabContext_TypeDefinitionIndex = 53948;

	class UIAchievementTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_825* Config; // 0x28
		::System::Boolean Selected; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
