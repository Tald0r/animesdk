#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_97930A1AD5393EA2.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_QUITOVAPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x6E57290)
#define MOLEMOLE_QUITOVAPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x6E572E0)
#define MOLEMOLE_QUITOVAPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x6E572A0)

namespace MoleMole
{
	inline static constexpr unsigned int QuitOVAPopShow_TypeDefinitionIndex = 46545;

	class QuitOVAPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _ovaContextID; // 0x28
		::Enum_3_97930A1AD5393EA2 jumpSrc; // 0x2C

		::System::Void _ctor(::System::Int32 ovaContextID, ::Enum_3_97930A1AD5393EA2 jumpSrc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_97930A1AD5393EA2))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW__CTOR_OFFSET))(this, ovaContextID, jumpSrc);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
