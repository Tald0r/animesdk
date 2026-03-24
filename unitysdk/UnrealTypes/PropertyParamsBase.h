#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/PropertyFlags.h"

namespace System { class String; }

#define UNREALTYPES_PROPERTYPARAMSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A202920)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyParamsBase_TypeDefinitionIndex = 24728;

	class PropertyParamsBase : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt16 Offset; // 0x18
		::System::UInt16 ArrayDim; // 0x1A
		::UnrealTypes::PropertyFlags PropertyFlags; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYPARAMSBASE__CTOR_OFFSET))(this);
		}
	};
}
