#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BANGBOOMODGARAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8483800)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooModGarageContext_TypeDefinitionIndex = 38256;

	class BangbooModGarageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PreviewBuddyID; // 0x28
		::System::Boolean IsPreview; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOMODGARAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
