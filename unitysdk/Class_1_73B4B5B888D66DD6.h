#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Coroutine/Segment.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_73B4B5B888D66DD6_METHOD_1_0045767346D1C255_OFFSET UNITYSDK_OFFSET(0x7143220)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_0246BC581D675C3E_OFFSET UNITYSDK_OFFSET(0x7143A10)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x71434A0)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_6CAA7A4328C9EF2F_OFFSET UNITYSDK_OFFSET(0x7143ED0)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_6E60B1A7CFAAD2E2_OFFSET UNITYSDK_OFFSET(0x7143530)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x7144030)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x71432C0)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_B97AD46BDF8DF4C8_OFFSET UNITYSDK_OFFSET(0x71437E0)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_E2A0873F55AEF36C_OFFSET UNITYSDK_OFFSET(0x7143350)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_EA566673A7F8329E_OFFSET UNITYSDK_OFFSET(0x7143BE0)
#define CLASS_1_73B4B5B888D66DD6_METHOD_1_FB042E51A2A312BC_OFFSET UNITYSDK_OFFSET(0x7143B50)
#define CLASS_1_73B4B5B888D66DD6__CTOR_OFFSET UNITYSDK_OFFSET(0x7143210)

inline static constexpr unsigned int Class_1_73B4B5B888D66DD6_TypeDefinitionIndex = 79021;

class Class_1_73B4B5B888D66DD6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Coroutine::CoroutineHandle>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_1_1; // 0x18
	::Foundation::Coroutine::CoroutineHandle Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0045767346D1C255(::Foundation::Coroutine::CoroutineHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_0045767346D1C255_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_E2A0873F55AEF36C(::System::Collections::Generic::IEnumerator_1<::System::Single>* a1)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_E2A0873F55AEF36C_OFFSET))(this, a1);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_6E60B1A7CFAAD2E2(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::Foundation::Coroutine::Segment a4, ::System::Boolean a5)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_6E60B1A7CFAAD2E2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_FB042E51A2A312BC(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_FB042E51A2A312BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EA566673A7F8329E(::Foundation::Coroutine::CoroutineHandle a1, ::System::Single a2, ::System::Action* a3, ::Foundation::Coroutine::Segment a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_EA566673A7F8329E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Coroutine::CoroutineHandle>* Method_1_0246BC581D675C3E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Coroutine::CoroutineHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_0246BC581D675C3E_OFFSET))(this);
	}

	::Foundation::Coroutine::CoroutineHandle Method_1_B97AD46BDF8DF4C8(::System::Single a1, ::System::Action* a2, ::Foundation::Coroutine::Segment a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_B97AD46BDF8DF4C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6CAA7A4328C9EF2F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_6CAA7A4328C9EF2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73B4B5B888D66DD6_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}
};
