#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D47D0)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int SerializeObjectRegister_TypeDefinitionIndex = 31906;

	class SerializeObjectRegister : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREGISTER__CTOR_OFFSET))(this);
		}
	};
}
