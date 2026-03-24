#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_196342A2DDDAE3C8_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x6603BF0)
#define CLASS_3_196342A2DDDAE3C8_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x6603800)
#define CLASS_3_196342A2DDDAE3C8_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x6603C80)
#define CLASS_3_196342A2DDDAE3C8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6604220)
#define CLASS_3_196342A2DDDAE3C8__CTOR_OFFSET UNITYSDK_OFFSET(0x6604000)

inline static constexpr unsigned int Class_3_196342A2DDDAE3C8_TypeDefinitionIndex = 55373;

class Class_3_196342A2DDDAE3C8 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_4; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_5; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_2; // 0x38
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_3; // 0x40
	::Class_3_B537A0AA78803363* Field_3_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}
};
