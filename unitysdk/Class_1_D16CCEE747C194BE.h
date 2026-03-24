#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Coroutine/Segment.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D16CCEE747C194BE_METHOD_1_0045767346D1C255_OFFSET UNITYSDK_OFFSET(0x8039740)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8039490)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_8146171CFC418DFC_OFFSET UNITYSDK_OFFSET(0x8039FE0)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x80397E0)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8039C60)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_A7FFC3F344999C0B_OFFSET UNITYSDK_OFFSET(0x8039520)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_B97AD46BDF8DF4C8_OFFSET UNITYSDK_OFFSET(0x8039A20)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_DC13DCFA502E580F_OFFSET UNITYSDK_OFFSET(0x8039660)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_E2A0873F55AEF36C_OFFSET UNITYSDK_OFFSET(0x8039340)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_EA566673A7F8329E_OFFSET UNITYSDK_OFFSET(0x8039CF0)
#define CLASS_1_D16CCEE747C194BE_METHOD_1_FB042E51A2A312BC_OFFSET UNITYSDK_OFFSET(0x8039990)
#define CLASS_1_D16CCEE747C194BE__CTOR_OFFSET UNITYSDK_OFFSET(0x8039330)

inline static constexpr unsigned int Class_1_D16CCEE747C194BE_TypeDefinitionIndex = 77289;

class Class_1_D16CCEE747C194BE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>* Field_1_2; // 0x18
	::Foundation::Coroutine::CoroutineHandle Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE__CTOR_OFFSET))(this);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_E2A0873F55AEF36C(::System::Collections::Generic::IEnumerator_1<::System::Single>* a1)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_E2A0873F55AEF36C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>* Method_1_A7FFC3F344999C0B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_A7FFC3F344999C0B_OFFSET))(this);
	}

	::System::Void Method_1_DC13DCFA502E580F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_DC13DCFA502E580F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_FB042E51A2A312BC(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_FB042E51A2A312BC_OFFSET))(this, a1, a2);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_B97AD46BDF8DF4C8(::System::Single a1, ::System::Action* a2, ::Foundation::Coroutine::Segment a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_B97AD46BDF8DF4C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_EA566673A7F8329E(::Foundation::Coroutine::CoroutineHandle a1, ::System::Single a2, ::System::Action* a3, ::Foundation::Coroutine::Segment a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_EA566673A7F8329E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0045767346D1C255(::Foundation::Coroutine::CoroutineHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_0045767346D1C255_OFFSET))(this, a1);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_8146171CFC418DFC(::System::Nullable_1<::System::Int32> a1, ::System::Single a2, ::System::Action* a3, ::Foundation::Coroutine::Segment a4, ::System::Boolean a5)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D16CCEE747C194BE_METHOD_1_8146171CFC418DFC_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
