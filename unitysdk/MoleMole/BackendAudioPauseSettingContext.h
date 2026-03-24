#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_BACKENDAUDIOPAUSESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x81CA950)

namespace MoleMole
{
	inline static constexpr unsigned int BackendAudioPauseSettingContext_TypeDefinitionIndex = 41848;

	class BackendAudioPauseSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Boolean IsEnabled; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKENDAUDIOPAUSESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
