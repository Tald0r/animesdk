#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }

#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18829350)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NAP_NAPECS_ECSENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18829470)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x188294D0)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18829480)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18829340)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511__CTOR_OFFSET UNITYSDK_OFFSET(0x18828C80)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilter__GetEnumerator_d__511_TypeDefinitionIndex = 34129;

	class EcsFilter__GetEnumerator_d__511 : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsFilter* __4__this; // 0x10
		::Nap::NapECS::EcsEntity* __2__current; // 0x18
		::Nap::NapECS::EcsArchetype* _archetype_5__4; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 _jEnd_5__5; // 0x2C
		::System::Int32 _i_5__2; // 0x30
		::System::Int32 _j_5__6; // 0x34
		::System::Int32 _iCount_5__3; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_MOVENEXT_OFFSET))(this);
		}

		::Nap::NapECS::EcsEntity* System_Collections_Generic_IEnumerator_Nap_NapECS_EcsEntity__get_Current()
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NAP_NAPECS_ECSENTITY__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__511_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
