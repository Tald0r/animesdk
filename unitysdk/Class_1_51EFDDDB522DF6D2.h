#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5705F9A0494086E6.h"
#include "unitysdk/Enum_3_57F26608A9064232.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_51EFDDDB522DF6D2_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x88673E0)
#define CLASS_1_51EFDDDB522DF6D2_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x8867130)
#define CLASS_1_51EFDDDB522DF6D2_METHOD_1_4D1D8822041671F9_OFFSET UNITYSDK_OFFSET(0x88672B0)
#define CLASS_1_51EFDDDB522DF6D2_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x8867560)
#define CLASS_1_51EFDDDB522DF6D2__CTOR_OFFSET UNITYSDK_OFFSET(0x8867620)

inline static constexpr unsigned int Class_1_51EFDDDB522DF6D2_TypeDefinitionIndex = 72601;

class Class_1_51EFDDDB522DF6D2 : public ::System::Object
{
public:
	::Enum_3_57F26608A9064232 Field_1_0; // 0x10
	::Enum_3_5705F9A0494086E6 Field_1_1; // 0x14
	::System::UInt64 Field_1_3; // 0x18
	::System::UInt64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EFDDDB522DF6D2__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EFDDDB522DF6D2_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_4D1D8822041671F9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EFDDDB522DF6D2_METHOD_1_4D1D8822041671F9_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EFDDDB522DF6D2_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51EFDDDB522DF6D2_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
