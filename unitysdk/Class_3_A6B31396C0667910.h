#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_A6B31396C0667910_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xA88C710)
#define CLASS_3_A6B31396C0667910_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA88D440)
#define CLASS_3_A6B31396C0667910_METHOD_3_FB81EBE81ABB70A0_OFFSET UNITYSDK_OFFSET(0xA88CC10)
#define CLASS_3_A6B31396C0667910__CTOR_OFFSET UNITYSDK_OFFSET(0xA88D070)

inline static constexpr unsigned int Class_3_A6B31396C0667910_TypeDefinitionIndex = 68000;

class Class_3_A6B31396C0667910 : public ::Class_2_52F82E04F7FEE529
{
public:
	// static const ::System::String* Field_3_9; // 0x0
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_4; // 0x20
	::Class_3_CF43FA1E89397A1C* Field_3_8; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_3_7; // 0x30
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_3; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_3_6; // 0x40
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x48
	::Class_3_B537A0AA78803363* Field_3_5; // 0x50
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910_METHOD_3_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_3_FB81EBE81ABB70A0(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910_METHOD_3_FB81EBE81ABB70A0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
