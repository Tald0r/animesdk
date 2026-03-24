#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_51B64C25E9BF275A_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x7739220)
#define CLASS_4_51B64C25E9BF275A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x77398D0)
#define CLASS_4_51B64C25E9BF275A_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x77395A0)
#define CLASS_4_51B64C25E9BF275A__CTOR_OFFSET UNITYSDK_OFFSET(0x7739610)

inline static constexpr unsigned int Class_4_51B64C25E9BF275A_TypeDefinitionIndex = 71979;

class Class_4_51B64C25E9BF275A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_2; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x30
	::Class_3_B537A0AA78803363* Field_4_3; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_4_4; // 0x40
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x48
	::Class_3_DCB7F8B839F0C44B_4* Field_4_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
