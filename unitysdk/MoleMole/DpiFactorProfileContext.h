#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"

#define MOLEMOLE_DPIFACTORPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB0AFA90)

namespace MoleMole
{
	inline static constexpr unsigned int DpiFactorProfileContext_TypeDefinitionIndex = 59269;

	class DpiFactorProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::System::Single DpiFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
