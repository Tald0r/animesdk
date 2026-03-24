#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_43.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0567DB5E50160838_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x172757B0)
#define CLASS_1_0567DB5E50160838_METHOD_1_CCC44210DEA28483_OFFSET UNITYSDK_OFFSET(0x172754E0)
#define CLASS_1_0567DB5E50160838_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x172757C0)
#define CLASS_1_0567DB5E50160838_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x172754D0)

inline static constexpr unsigned int Class_1_0567DB5E50160838_TypeDefinitionIndex = 10039;

class Class_1_0567DB5E50160838 : public ::System::Object
{
public:
	::Struct_2_58DF5669875F2C66_43 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Byte Field_1_4; // 0x30
	::System::Byte Field_1_3; // 0x31
	::System::Boolean Field_1_2; // 0x32

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0567DB5E50160838_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CCC44210DEA28483()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0567DB5E50160838_METHOD_1_CCC44210DEA28483_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0567DB5E50160838_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0567DB5E50160838_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
