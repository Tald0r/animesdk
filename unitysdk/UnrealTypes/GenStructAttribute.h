#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNREALTYPES_GENSTRUCTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5930)

namespace UnrealTypes
{
	inline static constexpr unsigned int GenStructAttribute_TypeDefinitionIndex = 23981;

	class GenStructAttribute : public ::System::Attribute
	{
	public:
		::System::Type* VirtualProxyType; // 0x10
		::System::Type* BaseType; // 0x18

		::System::Void _ctor(::System::Type* baseType, ::System::Type* proxyType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + UNREALTYPES_GENSTRUCTATTRIBUTE__CTOR_OFFSET))(this, baseType, proxyType);
		}
	};
}
