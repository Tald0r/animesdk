#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;

#define CLASS_3_DA02E6BABB5F027E_CLASS_1_703FE6C784279818__CTOR_OFFSET UNITYSDK_OFFSET(0xD6078D0)

inline static constexpr unsigned int Class_3_DA02E6BABB5F027E_Class_1_703FE6C784279818_TypeDefinitionIndex = 52523;

class Class_3_DA02E6BABB5F027E_Class_1_703FE6C784279818 : public ::System::Object
{
public:
	::Class_1_D4CCA64101A9C471<::System::UInt32, ::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E_CLASS_1_703FE6C784279818__CTOR_OFFSET))(this);
	}
};
