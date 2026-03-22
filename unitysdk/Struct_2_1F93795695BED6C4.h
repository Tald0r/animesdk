#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_1F93795695BED6C4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x5F5B20)
#define STRUCT_2_1F93795695BED6C4_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x5F5AA0)
#define STRUCT_2_1F93795695BED6C4_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x101512C0)
#define STRUCT_2_1F93795695BED6C4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x5F5A90)
#define STRUCT_2_1F93795695BED6C4__CTOR_OFFSET UNITYSDK_OFFSET(0x5F5A80)

inline static constexpr unsigned int Struct_2_1F93795695BED6C4_TypeDefinitionIndex = 46532;

struct alignas(8) Struct_2_1F93795695BED6C4
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1F93795695BED6C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1F93795695BED6C4_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1F93795695BED6C4_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::Struct_2_1F93795695BED6C4 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_1F93795695BED6C4(*)())((::PBYTE)hIl2Cpp + STRUCT_2_1F93795695BED6C4_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1F93795695BED6C4_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
