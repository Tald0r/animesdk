#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_248.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_611.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D59D1598A62EAE69_METHOD_2_E7A7BB776746585A_OFFSET UNITYSDK_OFFSET(0x16A30060)
#define CLASS_2_D59D1598A62EAE69__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2FA60)

inline static constexpr unsigned int Class_2_D59D1598A62EAE69_TypeDefinitionIndex = 13491;

class Class_2_D59D1598A62EAE69 : public ::Class_1_5DA2E7556103D5A3_248
{
public:
	::Il2CppArray<::System::String*>* Field_2_2; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x80
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x88

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_611 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_611, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_D59D1598A62EAE69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_E7A7BB776746585A()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D59D1598A62EAE69_METHOD_2_E7A7BB776746585A_OFFSET))(this);
	}
};
