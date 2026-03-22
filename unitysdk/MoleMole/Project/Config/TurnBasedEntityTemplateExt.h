#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/TurnBasedEntityTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_215.h"

class Class_0_16E4307DCC419505_13;

#define MOLEMOLE_PROJECT_CONFIG_TURNBASEDENTITYTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184AD000)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int TurnBasedEntityTemplateExt_TypeDefinitionIndex = 16412;

	class TurnBasedEntityTemplateExt : public ::MoleMole::FlatBuffers::Config::TurnBasedEntityTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_215 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_215, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_TURNBASEDENTITYTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
