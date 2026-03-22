#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace StateTreeGameplay { class StateTreeComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STATETREEGAMEPLAY_STATETREESYSTEM_ADDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A8A3340)
#define STATETREEGAMEPLAY_STATETREESYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0x1A8A30F0)
#define STATETREEGAMEPLAY_STATETREESYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x1A8A3580)
#define STATETREEGAMEPLAY_STATETREESYSTEM_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A8A3890)
#define STATETREEGAMEPLAY_STATETREESYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A8A3B20)
#define STATETREEGAMEPLAY_STATETREESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A3E70)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeSystem_TypeDefinitionIndex = 62287;

	class StateTreeSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::StateTreeGameplay::StateTreeComponent*>* _stateTreesComponents; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnEntityAdd(::System::Object* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM_ONENTITYADD_OFFSET))(this, entity);
		}

		::System::Void OnEntityRemove(::System::Object* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM_ONENTITYREMOVE_OFFSET))(this, entity);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		::StateTreeGameplay::StateTreeComponent* AddInstance(::System::Int32 id)
		{
			return ((::StateTreeGameplay::StateTreeComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM_ADDINSTANCE_OFFSET))(this, id);
		}

		::System::Void RemoveInstance(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESYSTEM_REMOVEINSTANCE_OFFSET))(this, id);
		}
	};
}
