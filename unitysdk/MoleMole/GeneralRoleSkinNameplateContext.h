#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_GENERALROLESKINNAMEPLATECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA025B00)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralRoleSkinNameplateContext_TypeDefinitionIndex = 51070;

	class GeneralRoleSkinNameplateContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Name; // 0x28
		::System::String* SubName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALROLESKINNAMEPLATECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
