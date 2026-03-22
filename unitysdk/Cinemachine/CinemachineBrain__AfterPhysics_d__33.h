#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }

#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AB96040)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AB96110)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AB96170)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AB96120)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB96030)
#define CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB96020)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain__AfterPhysics_d__33_TypeDefinitionIndex = 30981;

	class CinemachineBrain__AfterPhysics_d__33 : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineBrain* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN__AFTERPHYSICS_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
