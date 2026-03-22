#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_215.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4544004F26734BD_50_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16B03F10)
#define CLASS_1_C4544004F26734BD_50_METHOD_1_CCC44210DEA28483_OFFSET UNITYSDK_OFFSET(0x16B03F20)
#define CLASS_1_C4544004F26734BD_50_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16B03E20)
#define CLASS_1_C4544004F26734BD_50_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16B042C0)
#define CLASS_1_C4544004F26734BD_50__CTOR_OFFSET UNITYSDK_OFFSET(0x16B03E10)

inline static constexpr unsigned int Class_1_C4544004F26734BD_50_TypeDefinitionIndex = 12123;

class Class_1_C4544004F26734BD_50 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::Struct_2_58DF5669875F2C66_215 Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x28
	::System::Byte Field_1_4; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Byte Field_1_3; // 0x32
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_215 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_215, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_50_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_50_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CCC44210DEA28483()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_50_METHOD_1_CCC44210DEA28483_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4544004F26734BD_50_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
