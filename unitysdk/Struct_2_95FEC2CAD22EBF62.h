#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7E5B401C3D677259_1;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_95FEC2CAD22EBF62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x35A180)
#define STRUCT_2_95FEC2CAD22EBF62_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x35A1A0)
#define STRUCT_2_95FEC2CAD22EBF62_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x35A1A0)
#define STRUCT_2_95FEC2CAD22EBF62_METHOD_2_575FFA12A88A72B1_OFFSET UNITYSDK_OFFSET(0x35A230)
#define STRUCT_2_95FEC2CAD22EBF62_METHOD_2_6D9928F240CC3649_OFFSET UNITYSDK_OFFSET(0x35A190)
#define STRUCT_2_95FEC2CAD22EBF62_METHOD_2_A4CE25CAB21BF6CE_OFFSET UNITYSDK_OFFSET(0x35A250)
#define STRUCT_2_95FEC2CAD22EBF62_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x35A220)
#define STRUCT_2_95FEC2CAD22EBF62_METHOD_2_CF5575E64CF03508_OFFSET UNITYSDK_OFFSET(0x35A240)
#define STRUCT_2_95FEC2CAD22EBF62__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D2EA40)

inline static constexpr unsigned int Struct_2_95FEC2CAD22EBF62_TypeDefinitionIndex = 69140;

struct alignas(8) Struct_2_95FEC2CAD22EBF62
{
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_95FEC2CAD22EBF62_TypeDefinitionIndex)->GetStaticField(0x96F0);
	}
	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_3>* Field_2_1; // 0x10
	::System::Action_1<::System::Boolean>* Field_2_2; // 0x18
	::Class_1_7E5B401C3D677259_1* Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_2_6D9928F240CC3649()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_METHOD_2_6D9928F240CC3649_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_575FFA12A88A72B1(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_METHOD_2_575FFA12A88A72B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CF5575E64CF03508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_METHOD_2_CF5575E64CF03508_OFFSET))(this);
	}

	::System::Boolean Method_2_A4CE25CAB21BF6CE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_METHOD_2_A4CE25CAB21BF6CE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FEC2CAD22EBF62_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}
};
