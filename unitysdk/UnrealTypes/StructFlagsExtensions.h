#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/StructFlags.h"

#define UNREALTYPES_STRUCTFLAGSEXTENSIONS_HASANYFLAGS_OFFSET UNITYSDK_OFFSET(0x1A211370)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructFlagsExtensions_TypeDefinitionIndex = 24709;

	class StructFlagsExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean HasAnyFlags(::UnrealTypes::StructFlags value, ::UnrealTypes::StructFlags flag)
		{
			return ((::System::Boolean(*)(::UnrealTypes::StructFlags, ::UnrealTypes::StructFlags))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTFLAGSEXTENSIONS_HASANYFLAGS_OFFSET))(value, flag);
		}
	};
}
