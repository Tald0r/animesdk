#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PREINTERPRETATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19932520)

namespace IFix
{
	inline static constexpr unsigned int PreInterpretAttribute_TypeDefinitionIndex = 6776;

	class PreInterpretAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PREINTERPRETATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
