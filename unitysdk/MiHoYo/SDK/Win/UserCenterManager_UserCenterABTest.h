#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WIN_USERCENTERMANAGER_USERCENTERABTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1847A0C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserCenterManager_UserCenterABTest_TypeDefinitionIndex = 19099;

	class UserCenterManager_UserCenterABTest : public ::System::Object
	{
	public:
		::System::Boolean m_isEnableNewUserCenter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER_USERCENTERABTEST__CTOR_OFFSET))(this);
		}
	};
}
