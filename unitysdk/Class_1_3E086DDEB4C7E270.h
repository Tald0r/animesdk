#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73D51F1A281E07E6.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E086DDEB4C7E270_METHOD_1_A31149E186F97019_OFFSET UNITYSDK_OFFSET(0x73C8240)
#define CLASS_1_3E086DDEB4C7E270_METHOD_1_FBF96257B45B12EC_OFFSET UNITYSDK_OFFSET(0x73C83D0)
#define CLASS_1_3E086DDEB4C7E270__CTOR_OFFSET UNITYSDK_OFFSET(0x73C81B0)

inline static constexpr unsigned int Class_1_3E086DDEB4C7E270_TypeDefinitionIndex = 70867;

class Class_1_3E086DDEB4C7E270 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_73D51F1A281E07E6, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E086DDEB4C7E270__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A31149E186F97019(::Enum_3_73D51F1A281E07E6 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_73D51F1A281E07E6, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E086DDEB4C7E270_METHOD_1_A31149E186F97019_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FBF96257B45B12EC(::Enum_3_73D51F1A281E07E6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_73D51F1A281E07E6))((::PBYTE)hIl2Cpp + CLASS_1_3E086DDEB4C7E270_METHOD_1_FBF96257B45B12EC_OFFSET))(this, a1);
	}
};
