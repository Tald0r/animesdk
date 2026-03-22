#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Windows::OS { class AgeGateManager; }

#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECD2C0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS34_0__TRYLOADTICKET_B__3_OFFSET UNITYSDK_OFFSET(0x17ECD2D0)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass34_0_TypeDefinitionIndex = 18354;

	class AgeGateManager___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Windows::OS::AgeGateManager* __4__this; // 0x10
		::System::Int64 ts; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryLoadTicket_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS34_0__TRYLOADTICKET_B__3_OFFSET))(this);
		}
	};
}
