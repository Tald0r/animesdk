#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREAPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC63D790)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaPrepContext_TypeDefinitionIndex = 41145;

	class UIForbiddenAreaPrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
