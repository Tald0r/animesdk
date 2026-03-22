#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace StateTreeGameplay { class StateTreeStartProcessor; }
namespace StateTreeGameplay { class StateTreeStopProcessor; }
namespace StateTreeGameplay { class StateTreeTickProcessor; }

#define STATETREEGAMEPLAY_STATETREEMANAGER_ADDINSTANCE_OFFSET UNITYSDK_OFFSET(0x16C5B650)
#define STATETREEGAMEPLAY_STATETREEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x16C5B170)
#define STATETREEGAMEPLAY_STATETREEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16C5B4D0)
#define STATETREEGAMEPLAY_STATETREEMANAGER_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16C5B790)
#define STATETREEGAMEPLAY_STATETREEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C5B380)
#define STATETREEGAMEPLAY_STATETREEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C5B890)
#define STATETREEGAMEPLAY_STATETREEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5B880)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeManager_TypeDefinitionIndex = 46602;

	class StateTreeManager : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MaxInstanceCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StateTreeManager_TypeDefinitionIndex)->GetStaticField(0xC630);
		}
		::StateTreeGameplay::StateTreeStartProcessor* _startProcessor; // 0x10
		::StateTreeGameplay::StateTreeStopProcessor* _stopProcessor; // 0x18
		::StateTreeGameplay::StateTreeTickProcessor* _tickProcessor; // 0x20
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTree> StateTrees; // 0x28
		::Unity::Collections::NativeArray_1<::System::Int32> EntityTags; // 0x38
		::System::Int32 StateTreeCount; // 0x48
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> StateTreeInstances; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void AddInstance(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEMANAGER_ADDINSTANCE_OFFSET))(this, id);
		}

		::System::Void RemoveInstance(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEMANAGER_REMOVEINSTANCE_OFFSET))(this, id);
		}
	};
}
