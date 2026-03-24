#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_EXISTFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA144F0)

namespace Foundation
{
	inline static constexpr unsigned int ExistFlag_TypeDefinitionIndex = 8006;

	class ExistFlag : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* bytes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXISTFLAG__CTOR_OFFSET))(this);
		}
	};
}
