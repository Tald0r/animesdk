#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBase_DelegateWrapper.h"
#include "unitysdk/SGF/SEvent/SignalBase_SCustomDebugName.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SGF_SEVENT_SIGNALBASE_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x19A5A210)
#define SGF_SEVENT_SIGNALBASE_GETLISTENERCOUNT_OFFSET UNITYSDK_OFFSET(0x19A5B9B0)
#define SGF_SEVENT_SIGNALBASE_GET_CUSTOMDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x19A5A020)
#define SGF_SEVENT_SIGNALBASE_GET__METHODDIC_OFFSET UNITYSDK_OFFSET(0x19A5A0F0)
#define SGF_SEVENT_SIGNALBASE_GET__METHODS_OFFSET UNITYSDK_OFFSET(0x19A5A040)
#define SGF_SEVENT_SIGNALBASE_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x19A5B690)
#define SGF_SEVENT_SIGNALBASE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x19A5AF00)
#define SGF_SEVENT_SIGNALBASE_SET_CUSTOMDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x19A5A030)
#define SGF_SEVENT_SIGNALBASE_SET__METHODS_OFFSET UNITYSDK_OFFSET(0x19A5A0E0)
#define SGF_SEVENT_SIGNALBASE_TRYCLEAN_OFFSET UNITYSDK_OFFSET(0x19A5B950)
#define SGF_SEVENT_SIGNALBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A5A200)
#define SGF_SEVENT_SIGNALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5A1F0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalBase_TypeDefinitionIndex = 7911;

	class SignalBase : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableDetailDebugName_ForInvoke()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SignalBase_TypeDefinitionIndex)->GetStaticField(0x11D00);
		}
		::Il2CppArray<::SGF::SEvent::SignalBase_DelegateWrapper>* __methods; // 0x10
		::SGF::SEvent::SignalBase_SCustomDebugName _customDebugName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Delegate*, ::System::Int32>* __methodDic; // 0x28
		::System::Int32 _methodCount; // 0x30
		::System::Int32 _capacity; // 0x34
		::System::Boolean _needClean; // 0x38

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE__CTOR_OFFSET))(this, capacity);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE__CTOR_1_OFFSET))(this);
		}

		::SGF::SEvent::SignalBase_SCustomDebugName get_CustomDebugName()
		{
			return ((::SGF::SEvent::SignalBase_SCustomDebugName(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_GET_CUSTOMDEBUGNAME_OFFSET))(this);
		}

		::System::Void set_CustomDebugName(::SGF::SEvent::SignalBase_SCustomDebugName value)
		{
			return ((::System::Void(*)(::PVOID, ::SGF::SEvent::SignalBase_SCustomDebugName))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_SET_CUSTOMDEBUGNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::SGF::SEvent::SignalBase_DelegateWrapper>* get__methods()
		{
			return ((::Il2CppArray<::SGF::SEvent::SignalBase_DelegateWrapper>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_GET__METHODS_OFFSET))(this);
		}

		::System::Void set__methods(::Il2CppArray<::SGF::SEvent::SignalBase_DelegateWrapper>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::SGF::SEvent::SignalBase_DelegateWrapper>*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_SET__METHODS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Delegate*, ::System::Int32>* get__methodDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Delegate*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_GET__METHODDIC_OFFSET))(this);
		}

		::System::Void AddListener(::System::Delegate* del, ::System::Boolean bInsertAtFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_ADDLISTENER_OFFSET))(this, del, bInsertAtFirst);
		}

		::System::Void RemoveListener(::System::Delegate* del)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_REMOVELISTENER_OFFSET))(this, del);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Void TryClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_TRYCLEAN_OFFSET))(this);
		}

		::System::Int32 GetListenerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_GETLISTENERCOUNT_OFFSET))(this);
		}
	};
}
