#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraChangeType.h"

#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x89E0210)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Instance_TypeDefinitionIndex = 58403;

	class CameraChangeType_Instance : public ::MoleMole::CameraChangeType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE__CTOR_OFFSET))(this);
		}
	};
}
