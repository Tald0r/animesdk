#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERPARAMS_METHOD_1_959C32CB8485C4B1_OFFSET UNITYSDK_OFFSET(0xD1AD480)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AD470)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int UnitCompManagerParams_TypeDefinitionIndex = 45676;

	class UnitCompManagerParams : public ::System::Object
	{
	public:
		::System::Boolean IsCloseMDB; // 0x10
		::System::Boolean IsCloseCapsule; // 0x11
		::System::Boolean IsCloseOceanFloatObject; // 0x12
		::System::Boolean IsCloseRigidBody; // 0x13
		::System::Boolean IsCloseAnImage; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_959C32CB8485C4B1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERPARAMS_METHOD_1_959C32CB8485C4B1_OFFSET))(this, a1);
		}
	};
}
