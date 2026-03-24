#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_CAMERAROTATETOGGLESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3802D0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraRotateToggleSettingContext_TypeDefinitionIndex = 45174;

	class CameraRotateToggleSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Boolean IsToggle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAROTATETOGGLESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
