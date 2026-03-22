#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ASSETSONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB07C70)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AssetsOnlyAttribute_TypeDefinitionIndex = 7126;

	class AssetsOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
