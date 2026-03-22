#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_D23741BC79EFF5BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T1, typename T2> class Class_1_57D808FBDC3F6D5A;

#define CLASS_2_BC0F156725ADF64F_METHOD_2_1EA89006E3394750_OFFSET UNITYSDK_OFFSET(0x664BED0)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_284AF9FC95C99488_OFFSET UNITYSDK_OFFSET(0x664BB50)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x664BE00)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_71B77F3DEAE2DF25_OFFSET UNITYSDK_OFFSET(0x664B750)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_7F479C51A6BB116C_OFFSET UNITYSDK_OFFSET(0x664BEE0)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x664B720)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x664B730)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x664C450)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x664C460)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x664B710)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_B74D8C49B6C1B1A6_OFFSET UNITYSDK_OFFSET(0x664BA10)
#define CLASS_2_BC0F156725ADF64F_METHOD_2_F605FAF52BE6572F_OFFSET UNITYSDK_OFFSET(0x664B740)
#define CLASS_2_BC0F156725ADF64F_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x664ADF0)
#define CLASS_2_BC0F156725ADF64F_ONDETACH_OFFSET UNITYSDK_OFFSET(0x664AF70)
#define CLASS_2_BC0F156725ADF64F_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x664B320)
#define CLASS_2_BC0F156725ADF64F_ONREADY_OFFSET UNITYSDK_OFFSET(0x664AFE0)
#define CLASS_2_BC0F156725ADF64F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x664ACC0)
#define CLASS_2_BC0F156725ADF64F__CTOR_OFFSET UNITYSDK_OFFSET(0x664B700)

inline static constexpr unsigned int Class_2_BC0F156725ADF64F_TypeDefinitionIndex = 77804;

class Class_2_BC0F156725ADF64F : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_BC0F156725ADF64F*>
{
public:
	::Class_1_57D808FBDC3F6D5A<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_D23741BC79EFF5BF*>* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_3_D23741BC79EFF5BF*>* Field_2_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::Class_3_D23741BC79EFF5BF*, ::System::Threading::CancellationTokenSource*>>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_ONDETACH_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_ONREADY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_3_D23741BC79EFF5BF*>* Method_2_F605FAF52BE6572F()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_3_D23741BC79EFF5BF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_F605FAF52BE6572F_OFFSET))(this);
	}

	::System::Void Method_2_71B77F3DEAE2DF25(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::Collections::Generic::HashSet_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_71B77F3DEAE2DF25_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_284AF9FC95C99488(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_284AF9FC95C99488_OFFSET))(this, a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_2_B74D8C49B6C1B1A6(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* a3, ::System::UInt32 a4, ::System::Collections::Generic::HashSet_1<::System::Int32>* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_B74D8C49B6C1B1A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::ValueTuple_2<::Class_3_D23741BC79EFF5BF*, ::System::Threading::CancellationTokenSource*>>* Method_2_1EA89006E3394750()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::ValueTuple_2<::Class_3_D23741BC79EFF5BF*, ::System::Threading::CancellationTokenSource*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_1EA89006E3394750_OFFSET))(this);
	}

	::System::Void Method_2_7F479C51A6BB116C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_7F479C51A6BB116C_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_METHOD_2_832295EC279E5994_4_OFFSET))(this);
	}
};
