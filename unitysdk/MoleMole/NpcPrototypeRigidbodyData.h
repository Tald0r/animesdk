#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONX_OFFSET UNITYSDK_OFFSET(0xA656690)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONY_OFFSET UNITYSDK_OFFSET(0xA656780)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONZ_OFFSET UNITYSDK_OFFSET(0xA656870)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONX_OFFSET UNITYSDK_OFFSET(0xA656960)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONY_OFFSET UNITYSDK_OFFSET(0xA656A50)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONZ_OFFSET UNITYSDK_OFFSET(0xA656B40)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_METHOD_1_025C10A50003DFAB_OFFSET UNITYSDK_OFFSET(0xA656C40)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONX_OFFSET UNITYSDK_OFFSET(0xA656700)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONY_OFFSET UNITYSDK_OFFSET(0xA6567F0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONZ_OFFSET UNITYSDK_OFFSET(0xA6568E0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONX_OFFSET UNITYSDK_OFFSET(0xA6569D0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONY_OFFSET UNITYSDK_OFFSET(0xA656AC0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONZ_OFFSET UNITYSDK_OFFSET(0xA656BB0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA656C30)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeRigidbodyData_TypeDefinitionIndex = 63269;

	class NpcPrototypeRigidbodyData : public ::System::Object
	{
	public:
		::System::Single Mass; // 0x10
		::System::Boolean IsKinematic; // 0x14
		::UnityEngine::RigidbodyConstraints _rigidbodyConstraints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_FreezePositionX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONX_OFFSET))(this);
		}

		::System::Void set_FreezePositionX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONX_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezePositionY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONY_OFFSET))(this);
		}

		::System::Void set_FreezePositionY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONY_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezePositionZ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONZ_OFFSET))(this);
		}

		::System::Void set_FreezePositionZ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONZ_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezeRotationX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONX_OFFSET))(this);
		}

		::System::Void set_FreezeRotationX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONX_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezeRotationY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONY_OFFSET))(this);
		}

		::System::Void set_FreezeRotationY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONY_OFFSET))(this, a1);
		}

		::System::Boolean get_FreezeRotationZ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONZ_OFFSET))(this);
		}

		::System::Void set_FreezeRotationZ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONZ_OFFSET))(this, a1);
		}

		::System::Void Method_1_025C10A50003DFAB(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_METHOD_1_025C10A50003DFAB_OFFSET))(this, a1);
		}
	};
}
