#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOENTITYGAMEOBJECT_EMPTY_OFFSET UNITYSDK_OFFSET(0xB99F100)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0xB99F200)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xB99F0F0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xB99F680)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0xB99F600)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB99EDF0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB99EB80)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xB99EEB0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0xB99EC40)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xB99F0E0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0xB99F320)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB99F580)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB99F560)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityGameObject_TypeDefinitionIndex = 38812;

	class MonoEntityGameObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityGameObject_TypeDefinitionIndex)->GetStaticField(0x42FD0);
		}
		::MoleMole::Battle::Entity* Field_5_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void set_ownerEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::MoleMole::Battle::Entity* get_ownerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_GET_OWNERENTITY_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoEntityGameObject* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoEntityGameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		static ::System::Boolean TryGetComponentSafely(::System::Int32 a1, ::MoleMole::EntityHandle& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETCOMPONENTSAFELY_OFFSET))(a1, a2);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_2340068C22DFE332()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_2340068C22DFE332_OFFSET))(this);
		}

		::System::Void Method_5_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_078D85152011B919_OFFSET))(this);
		}
	};
}
