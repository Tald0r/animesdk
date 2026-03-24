#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_43BD383C98B4C0C5_18;

#define MOLEMOLE_UIPERFORMPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB413D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageContext_TypeDefinitionIndex = 58154;

	class UIPerformPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_43BD383C98B4C0C5_18* performParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
