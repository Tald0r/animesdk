#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/BangbooDefenseDataTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_717.h"

class Class_0_16E4307DCC419505_13;

#define MOLEMOLE_PROJECT_CONFIG_BANGBOODEFENSEDATATEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD5530)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int BangbooDefenseDataTemplateExt_TypeDefinitionIndex = 13188;

	class BangbooDefenseDataTemplateExt : public ::MoleMole::FlatBuffers::Config::BangbooDefenseDataTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_717 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_717, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BANGBOODEFENSEDATATEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
