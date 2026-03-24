#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EAFB437D2B2C23EC__CTOR_OFFSET UNITYSDK_OFFSET(0xDA086B0)

inline static constexpr unsigned int Class_1_EAFB437D2B2C23EC_TypeDefinitionIndex = 70837;

class Class_1_EAFB437D2B2C23EC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAFB437D2B2C23EC__CTOR_OFFSET))(this);
	}
};
