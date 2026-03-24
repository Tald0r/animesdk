#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_DOFPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A4270)

namespace MoleMole
{
	inline static constexpr unsigned int DOFProfileContext_TypeDefinitionIndex = 44978;

	class DOFProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Boolean enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOFPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
