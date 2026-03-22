#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAnimationStateLevel.h"
#include "unitysdk/MoleMole/MonoEffectPluginStateAnimationData.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_STATEPLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0x67B36B0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ISTRANSITIONALLOWED_OFFSET UNITYSDK_OFFSET(0x67B3D90)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x67B4010)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_6E6F865C6BBBA8DD_OFFSET UNITYSDK_OFFSET(0x67B3860)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_8DB98345F9A815B2_OFFSET UNITYSDK_OFFSET(0x67B42C0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x67B36F0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONSTATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x67B3760)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_PLAYANIMATIONBYSTATE_OFFSET UNITYSDK_OFFSET(0x67B3A80)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x67B41A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginStateAnimation_TypeDefinitionIndex = 67470;

	class MonoEffectPluginStateAnimation : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Boolean EnableTransitionCheck; // 0x58
		::System::String* DefaultState; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginStateAnimationData>* animationDataList; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginAnimationStateLevel>* animationLevelDataList; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* animationStateMap; // 0x78
		::System::UInt32 Field_7_5; // 0x80
		::System::String* Field_7_6; // 0x88
		::UnityEngine::Animation* Field_7_7; // 0x90
		::System::Boolean Field_7_8; // 0x98
		::UnityEngine::Coroutine* Field_7_9; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION__CTOR_OFFSET))(this);
		}

		::System::String* get_StatePlayMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_STATEPLAYMESSAGE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnStateMessage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONSTATEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTransitionAllowed(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ISTRANSITIONALLOWED_OFFSET))(this, a1, a2);
		}

		::System::Boolean PlayAnimationByState(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_PLAYANIMATIONBYSTATE_OFFSET))(this, a1);
		}

		::System::Void Method_7_6E6F865C6BBBA8DD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_6E6F865C6BBBA8DD_OFFSET))(this, a1);
		}

		::System::Int32 Method_7_8DB98345F9A815B2(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_8DB98345F9A815B2_OFFSET))(this, a1);
		}

		::System::Void Method_7_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_METHOD_7_4307B2A4B4A12C1A_OFFSET))(this);
		}
	};
}
