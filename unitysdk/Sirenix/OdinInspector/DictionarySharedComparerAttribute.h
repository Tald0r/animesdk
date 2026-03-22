#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DICTIONARYSHAREDCOMPARERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB08210)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DictionarySharedComparerAttribute_TypeDefinitionIndex = 7140;

	class DictionarySharedComparerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DICTIONARYSHAREDCOMPARERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
