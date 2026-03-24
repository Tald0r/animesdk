#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDATAFIXGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x90F72A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixGameContext_TypeDefinitionIndex = 56684;

	class UIDataFixGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsReal; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
