#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/MonoEffectPluginAnimationStateLevel.h"
#include "unitysdk/MoleMole/MonoEffectPluginSyncEntityPosAnimationData.h"
#include "unitysdk/MoleMole/MonoEffectPluginSyncEntityPos_Enum_3_FFD78EB9E7BB2492.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapWarningLine;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_NAPWARNINGLINE_OFFSET UNITYSDK_OFFSET(0xA5FF300)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_STATEPLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0xA5FF500)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ISTRANSITIONALLOWED_OFFSET UNITYSDK_OFFSET(0xA5FFB10)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA5FFDA0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_6E6F865C6BBBA8DD_OFFSET UNITYSDK_OFFSET(0xA5FF640)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_8DB98345F9A815B2_OFFSET UNITYSDK_OFFSET(0xA600070)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA5FF490)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0xA5FF1C0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONSTATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA5FF540)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_PLAYANIMATIONBYSTATE_OFFSET UNITYSDK_OFFSET(0xA5FF860)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FFF30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginSyncEntityPos_TypeDefinitionIndex = 77474;

	class MonoEffectPluginSyncEntityPos : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Boolean IsAvatarEnttiy; // 0x58
		::System::Boolean EnableTransitionCheck; // 0x59
		::MoleMole::GameplayTag entityTag; // 0x60
		::MoleMole::MonoEffectPluginSyncEntityPos_Enum_3_FFD78EB9E7BB2492 syncType; // 0x70
		::System::String* DefaultState; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginSyncEntityPosAnimationData>* animationDataList; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginAnimationStateLevel>* animationLevelDataList; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* animationStateMap; // 0x90
		::System::UInt32 Field_7_8; // 0x98
		::NapWarningLine* Field_7_9; // 0xA0
		::System::String* Field_7_10; // 0xA8
		::UnityEngine::Animation* Field_7_11; // 0xB0
		::System::Boolean Field_7_12; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS__CTOR_OFFSET))(this);
		}

		::System::Void OnInputPosition(::MoleMole::EntityHandle a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONINPUTPOSITION_OFFSET))(this, a1, a2);
		}

		::NapWarningLine* get_napWarningLine()
		{
			return ((::NapWarningLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_NAPWARNINGLINE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONENABLE_OFFSET))(this);
		}

		::System::String* get_StatePlayMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_STATEPLAYMESSAGE_OFFSET))(this);
		}

		::System::Void OnStateMessage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONSTATEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTransitionAllowed(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ISTRANSITIONALLOWED_OFFSET))(this, a1, a2);
		}

		::System::Boolean PlayAnimationByState(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_PLAYANIMATIONBYSTATE_OFFSET))(this, a1);
		}

		::System::Int32 Method_7_8DB98345F9A815B2(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_8DB98345F9A815B2_OFFSET))(this, a1);
		}

		::System::Void Method_7_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_7_6E6F865C6BBBA8DD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_METHOD_7_6E6F865C6BBBA8DD_OFFSET))(this, a1);
		}
	};
}
