#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICINEMAREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B81F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardContext_TypeDefinitionIndex = 47467;

	class UICinemaRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean showJump; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
