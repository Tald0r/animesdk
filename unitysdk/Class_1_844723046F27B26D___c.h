#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_844723046F27B26D___C_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x8183CC0)
#define CLASS_1_844723046F27B26D___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x8183C50)
#define CLASS_1_844723046F27B26D___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8183C40)
#define CLASS_1_844723046F27B26D___C_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x8183C60)
#define CLASS_1_844723046F27B26D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8183BF0)
#define CLASS_1_844723046F27B26D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8183C30)

inline static constexpr unsigned int Class_1_844723046F27B26D___c_TypeDefinitionIndex = 70121;

class Class_1_844723046F27B26D___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__3_14()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_844723046F27B26D___c_TypeDefinitionIndex)->GetStaticField(0x3B3F0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_15()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_844723046F27B26D___c_TypeDefinitionIndex)->GetStaticField(0x3B3F8);
	}
	static ::System::Action** StaticGet___9__3_10()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_844723046F27B26D___c_TypeDefinitionIndex)->GetStaticField(0x3B400);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__3_13()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_844723046F27B26D___c_TypeDefinitionIndex)->GetStaticField(0x3B408);
	}
	static ::Class_1_844723046F27B26D___c** StaticGet___9()
	{
		return (::Class_1_844723046F27B26D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_844723046F27B26D___c_TypeDefinitionIndex)->GetStaticField(0x3B410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D___C_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}
};
