#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_168.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_38_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x16FB2620)
#define CLASS_1_C4544004F26734BD_38_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16FB2240)
#define CLASS_1_C4544004F26734BD_38_METHOD_1_CCC44210DEA28483_1_OFFSET UNITYSDK_OFFSET(0x16FB2770)
#define CLASS_1_C4544004F26734BD_38_METHOD_1_CCC44210DEA28483_OFFSET UNITYSDK_OFFSET(0x16FB2340)
#define CLASS_1_C4544004F26734BD_38_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16FB2250)
#define CLASS_1_C4544004F26734BD_38_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16FB2610)
#define CLASS_1_C4544004F26734BD_38__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB2230)

inline static constexpr unsigned int Class_1_C4544004F26734BD_38_TypeDefinitionIndex = 12877;

class Class_1_C4544004F26734BD_38 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_168 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x28
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Boolean Field_1_2; // 0x3C
	::System::Byte Field_1_3; // 0x3D
	::System::Byte Field_1_4; // 0x3E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_168 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_168, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_38__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_38_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_38_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CCC44210DEA28483()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_38_METHOD_1_CCC44210DEA28483_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_38_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_38_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CCC44210DEA28483_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_38_METHOD_1_CCC44210DEA28483_1_OFFSET))(this);
	}
};
