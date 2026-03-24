#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOCOLLIDERSMODIFIABLECONTACTS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA39F760)
#define MOLEMOLE_MONOCOLLIDERSMODIFIABLECONTACTS_START_OFFSET UNITYSDK_OFFSET(0xA39F640)
#define MOLEMOLE_MONOCOLLIDERSMODIFIABLECONTACTS__CTOR_OFFSET UNITYSDK_OFFSET(0xA39F880)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCollidersModifiableContacts_TypeDefinitionIndex = 38583;

	class MonoCollidersModifiableContacts : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Collider*>* colliders; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERSMODIFIABLECONTACTS__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERSMODIFIABLECONTACTS_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERSMODIFIABLECONTACTS_ONDESTROY_OFFSET))(this);
		}
	};
}
