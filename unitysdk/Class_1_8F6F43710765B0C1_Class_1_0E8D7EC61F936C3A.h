#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_019870FE224FBE5A;
class Class_1_8F6F43710765B0C1;
class Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7;
class Class_1_AA2FAB933F36B228;
class Class_2_CD42631606067E6B;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8F6F43710765B0C1_CLASS_1_0E8D7EC61F936C3A_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x8EBD1E0)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_0E8D7EC61F936C3A_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x8EBCDE0)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_0E8D7EC61F936C3A__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBCDD0)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1_Class_1_0E8D7EC61F936C3A_TypeDefinitionIndex = 54047;

class Class_1_8F6F43710765B0C1_Class_1_0E8D7EC61F936C3A : public ::System::Object
{
public:
	::Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7* Field_1_2; // 0x10
	::Class_1_019870FE224FBE5A* Field_1_1; // 0x18
	::Class_1_AA2FAB933F36B228* Field_1_3; // 0x20
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_1_5; // 0x28
	::Class_1_8F6F43710765B0C1* Field_1_0; // 0x30
	::Class_2_CD42631606067E6B* Field_1_4; // 0x38
	::System::Action* Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_0E8D7EC61F936C3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_0E8D7EC61F936C3A_METHOD_1_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_0E8D7EC61F936C3A_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}
};
