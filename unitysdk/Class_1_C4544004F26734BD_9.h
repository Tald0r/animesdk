#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_22.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16AF2D20)
#define CLASS_1_C4544004F26734BD_9_METHOD_1_CCC44210DEA28483_OFFSET UNITYSDK_OFFSET(0x16AF2A40)
#define CLASS_1_C4544004F26734BD_9_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16AF2950)
#define CLASS_1_C4544004F26734BD_9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16AF2D10)
#define CLASS_1_C4544004F26734BD_9__CTOR_OFFSET UNITYSDK_OFFSET(0x16AF2940)

inline static constexpr unsigned int Class_1_C4544004F26734BD_9_TypeDefinitionIndex = 9843;

class Class_1_C4544004F26734BD_9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x18
	::Struct_2_58DF5669875F2C66_22 Field_1_0; // 0x20
	::System::Byte Field_1_3; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Byte Field_1_4; // 0x32
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_22 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_22, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_9_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CCC44210DEA28483()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_9_METHOD_1_CCC44210DEA28483_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
