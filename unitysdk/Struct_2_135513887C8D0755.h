#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_173;

#define STRUCT_2_135513887C8D0755_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A5ED0)
#define STRUCT_2_135513887C8D0755_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3A6040)
#define STRUCT_2_135513887C8D0755_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x3A5FD0)
#define STRUCT_2_135513887C8D0755_METHOD_2_A1F5DCDA099A81E7_OFFSET UNITYSDK_OFFSET(0x3A5F40)
#define STRUCT_2_135513887C8D0755__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5065D0)
#define STRUCT_2_135513887C8D0755__CTOR_OFFSET UNITYSDK_OFFSET(0x3A5E40)

inline static constexpr unsigned int Struct_2_135513887C8D0755_TypeDefinitionIndex = 76048;

struct alignas(8) Struct_2_135513887C8D0755
{
	static ::System::UInt32* StaticGet_Field_2_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_135513887C8D0755_TypeDefinitionIndex)->GetStaticField(0xB160);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::Class_0_16E4307DCC419505_173* Field_2_3; // 0x18
	::System::Int32 Field_2_4; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::Class_0_16E4307DCC419505_173* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_173*))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755__CCTOR_OFFSET))();
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_A1F5DCDA099A81E7(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_METHOD_2_A1F5DCDA099A81E7_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_135513887C8D0755_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
