#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_TAGFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAEC6A0)

namespace Cinemachine
{
	inline static constexpr unsigned int TagFieldAttribute_TypeDefinitionIndex = 31091;

	class TagFieldAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TAGFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
