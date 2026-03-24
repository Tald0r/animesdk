#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraChangeType.h"

#define MOLEMOLE_CAMERACHANGETYPE_LINER__CTOR_OFFSET UNITYSDK_OFFSET(0x7BB59D0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Liner_TypeDefinitionIndex = 45124;

	class CameraChangeType_Liner : public ::MoleMole::CameraChangeType
	{
	public:
		::System::Single Duration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_LINER__CTOR_OFFSET))(this);
		}
	};
}
