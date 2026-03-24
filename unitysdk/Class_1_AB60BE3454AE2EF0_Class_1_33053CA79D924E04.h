#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_AF65C3A968E836D2;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB60BE3454AE2EF0_CLASS_1_33053CA79D924E04_METHOD_1_7440AF7CB1A6626E_OFFSET UNITYSDK_OFFSET(0xA0F5FB0)
#define CLASS_1_AB60BE3454AE2EF0_CLASS_1_33053CA79D924E04__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F5FA0)

inline static constexpr unsigned int Class_1_AB60BE3454AE2EF0_Class_1_33053CA79D924E04_TypeDefinitionIndex = 46869;

class Class_1_AB60BE3454AE2EF0_Class_1_33053CA79D924E04 : public ::System::Object
{
public:
	::System::Action_1<::Class_5_AF65C3A968E836D2*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_5_AF65C3A968E836D2*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB60BE3454AE2EF0_CLASS_1_33053CA79D924E04__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7440AF7CB1A6626E(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_AB60BE3454AE2EF0_CLASS_1_33053CA79D924E04_METHOD_1_7440AF7CB1A6626E_OFFSET))(this, a1);
	}
};
