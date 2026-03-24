#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_2_FF98DBE640782344_CLASS_1_C9C95A01AAB21DAD_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0xAAA04E0)
#define CLASS_2_FF98DBE640782344_CLASS_1_C9C95A01AAB21DAD_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0xAAA0470)
#define CLASS_2_FF98DBE640782344_CLASS_1_C9C95A01AAB21DAD__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA0460)

inline static constexpr unsigned int Class_2_FF98DBE640782344_Class_1_C9C95A01AAB21DAD_TypeDefinitionIndex = 77689;

class Class_2_FF98DBE640782344_Class_1_C9C95A01AAB21DAD : public ::System::Object
{
public:
	::System::Action_1<::Class_1_4109B64C3CE1B638<::System::UInt64>*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_C9C95A01AAB21DAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_C9C95A01AAB21DAD_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_C9C95A01AAB21DAD_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}
};
