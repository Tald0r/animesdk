#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_502;

#define STRUCT_2_135513887C8D0755_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x30EE70)
#define STRUCT_2_135513887C8D0755_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x30EF50)
#define STRUCT_2_135513887C8D0755_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x30EEE0)
#define STRUCT_2_135513887C8D0755_METHOD_2_A1F5DCDA099A81E7_OFFSET UNITYSDK_OFFSET(0x30EFC0)
#define STRUCT_2_135513887C8D0755__CCTOR_OFFSET UNITYSDK_OFFSET(0x6843C20)
#define STRUCT_2_135513887C8D0755__CTOR_OFFSET UNITYSDK_OFFSET(0x30EDE0)

inline static constexpr unsigned int Struct_2_135513887C8D0755_TypeDefinitionIndex = 80484;

struct alignas(8) Struct_2_135513887C8D0755
{
	static ::System::UInt32* StaticGet_Field_2_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_135513887C8D0755_TypeDefinitionIndex)->GetStaticField(0xFAE0);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::Class_0_16E4307DCC419505_502* Field_2_3; // 0x18
	::System::Int32 Field_2_4; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::Class_0_16E4307DCC419505_502* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755__CCTOR_OFFSET))();
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_A1F5DCDA099A81E7(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_METHOD_2_A1F5DCDA099A81E7_OFFSET))(this, a1);
	}
};
