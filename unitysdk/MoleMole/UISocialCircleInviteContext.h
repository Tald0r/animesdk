#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;

#define MOLEMOLE_UISOCIALCIRCLEINVITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB8510)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInviteContext_TypeDefinitionIndex = 46766;

	class UISocialCircleInviteContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINVITECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
