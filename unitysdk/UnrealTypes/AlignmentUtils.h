#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNREALTYPES_ALIGNMENTUTILS_ALIGN_OFFSET UNITYSDK_OFFSET(0x1A202640)
#define UNREALTYPES_ALIGNMENTUTILS_ISALIGNED_OFFSET UNITYSDK_OFFSET(0x1A202650)
#define UNREALTYPES_ALIGNMENTUTILS_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1A202700)

namespace UnrealTypes
{
	inline static constexpr unsigned int AlignmentUtils_TypeDefinitionIndex = 24696;

	class AlignmentUtils : public ::System::Object
	{
	public:
		static ::System::Int32 Align(::System::Int32 value, ::System::Int32 alignment)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ALIGNMENTUTILS_ALIGN_OFFSET))(value, alignment);
		}

		static ::System::Boolean IsAligned(::System::Void* pointer, ::System::Int32 alignment)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ALIGNMENTUTILS_ISALIGNED_OFFSET))(pointer, alignment);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ALIGNMENTUTILS_ISPOWEROFTWO_OFFSET))(value);
		}
	};
}
