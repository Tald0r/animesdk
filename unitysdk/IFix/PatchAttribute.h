#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PATCHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19932510)

namespace IFix
{
	inline static constexpr unsigned int PatchAttribute_TypeDefinitionIndex = 6773;

	class PatchAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PATCHATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
