#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_171.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_9.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_109.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_208CC9941471731A_46_METHOD_2_0BF60C2D93C141EA_OFFSET UNITYSDK_OFFSET(0x117E3E80)
#define CLASS_2_208CC9941471731A_46__CTOR_OFFSET UNITYSDK_OFFSET(0x117E3E70)

inline static constexpr unsigned int Class_2_208CC9941471731A_46_TypeDefinitionIndex = 12007;

class Class_2_208CC9941471731A_46 : public ::Class_1_5DA2E7556103D5A3_171
{
public:
	::System::Void _ctor(::Struct_2_58DF5669875F2C66_109 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_109, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_9> Method_2_0BF60C2D93C141EA(::Share::EPropertyType a1)
	{
		return ((::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_9>(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_46_METHOD_2_0BF60C2D93C141EA_OFFSET))(this, a1);
	}
};
