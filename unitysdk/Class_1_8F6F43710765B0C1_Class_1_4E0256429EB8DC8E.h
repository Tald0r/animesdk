#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_8F6F43710765B0C1;
class Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7;
class Class_3_741584FEDFF5626E;
class Class_3_741A783BB79E5BB9;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8F6F43710765B0C1_CLASS_1_4E0256429EB8DC8E_METHOD_1_2FEA937748A3AB96_OFFSET UNITYSDK_OFFSET(0x99DB470)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_4E0256429EB8DC8E_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x99DB600)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_4E0256429EB8DC8E__CTOR_OFFSET UNITYSDK_OFFSET(0x99DB460)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1_Class_1_4E0256429EB8DC8E_TypeDefinitionIndex = 54032;

class Class_1_8F6F43710765B0C1_Class_1_4E0256429EB8DC8E : public ::System::Object
{
public:
	::Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7* Field_1_4; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_1_3; // 0x18
	::Class_3_741584FEDFF5626E* Field_1_1; // 0x20
	::System::Action* Field_1_5; // 0x28
	::Class_1_8F6F43710765B0C1* Field_1_0; // 0x30
	::Class_3_741A783BB79E5BB9* Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4E0256429EB8DC8E__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Method_1_2FEA937748A3AB96(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4E0256429EB8DC8E_METHOD_1_2FEA937748A3AB96_OFFSET))(this, a1);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4E0256429EB8DC8E_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}
};
