#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessoryBoneData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9143B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessoryData_TypeDefinitionIndex = 76564;

	class ConfigDynamicAccessoryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ChildParentsInfo; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicAccessoryBoneData*>* BonesInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYDATA__CTOR_OFFSET))(this);
		}
	};
}
