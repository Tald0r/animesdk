#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNREALTYPES_TYPEHASH_HASHCOMBINEFAST_OFFSET UNITYSDK_OFFSET(0x1AFC5D50)

namespace UnrealTypes
{
	inline static constexpr unsigned int TypeHash_TypeDefinitionIndex = 23997;

	class TypeHash : public ::System::Object
	{
	public:
		static ::System::Int32 HashCombineFast(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_TYPEHASH_HASHCOMBINEFAST_OFFSET))(a, b);
		}
	};
}
