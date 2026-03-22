#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_DEVZONETAGATTACHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16BBD3B0)

namespace MoleMole
{
	inline static constexpr unsigned int DevZoneTagAttachData_TypeDefinitionIndex = 79232;

	class DevZoneTagAttachData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVZONETAGATTACHDATA__CTOR_OFFSET))(this);
		}
	};
}
