#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x8C86FB0)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x8C87080)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x8C87380)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8C87700)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8C875D0)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x8C87970)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x8C87C70)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8C87830)
#define MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x8C87EC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneColliderWithAvatar_TypeDefinitionIndex = 79482;

	class MonoSceneColliderWithAvatar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* selfCollider; // 0x18
		::System::Boolean Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_AWAKE_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONCOLLISIONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHAVATAR_ONTRIGGEREXIT_OFFSET))(this, a1);
		}
	};
}
