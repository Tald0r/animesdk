#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x315EF0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExternalDataHandle_TypeDefinitionIndex = 26943;

	struct alignas(4) StateTreeExternalDataHandle
	{
		::StateTreeCore::StateTreeDataHandle DataHandle; // 0x10

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATAHANDLE_GET_ISVALID_OFFSET))(this);
		}
	};
}
