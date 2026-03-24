#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SYSTEMSETTINGLOCALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB703190)

namespace MoleMole
{
	inline static constexpr unsigned int SystemSettingLocalData_TypeDefinitionIndex = 62115;

	class SystemSettingLocalData : public ::System::Object
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Object* Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGLOCALDATA__CTOR_OFFSET))(this);
		}
	};
}
