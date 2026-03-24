#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_7E0B1AB93DE8093B__CCTOR_OFFSET UNITYSDK_OFFSET(0x9994330)

inline static constexpr unsigned int Struct_2_7E0B1AB93DE8093B_TypeDefinitionIndex = 51725;

struct alignas(4) Struct_2_7E0B1AB93DE8093B
{
	static ::Struct_2_7E0B1AB93DE8093B* StaticGet_Field_2_2()
	{
		return (::Struct_2_7E0B1AB93DE8093B*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_7E0B1AB93DE8093B_TypeDefinitionIndex)->GetStaticField(0xDC70);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7E0B1AB93DE8093B__CCTOR_OFFSET))();
	}
};
