#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class RagdollUtility; }

#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AAB3E40)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AAB4190)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AAB41F0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AAB41A0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAB3E30)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB3E20)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RagdollUtility__DisableRagdollSmooth_d__21_TypeDefinitionIndex = 35130;

	class RagdollUtility__DisableRagdollSmooth_d__21 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RootMotion::FinalIK::RagdollUtility* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY__DISABLERAGDOLLSMOOTH_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
