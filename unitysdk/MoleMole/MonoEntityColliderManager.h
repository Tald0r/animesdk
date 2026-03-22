#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ADDHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AC920)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_CLEARHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AC890)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_EMPTY_OFFSET UNITYSDK_OFFSET(0xB3AD940)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_HASHULLCOLLIDERWITHNOCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AE310)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3AC210)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB3ABFD0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB3ABD90)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3ACA60)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3ACEB0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTEROTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AD610)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AD340)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_SETDEFAULTHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AC9F0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYCOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xB3ADF40)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0xB3ADE30)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3ADBF0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYWALLCOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xB3AE200)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHITCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AC370)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AC480)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTEROTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AC6B0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB3AC590)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3AE4D0)
#define MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AE400)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityColliderManager_TypeDefinitionIndex = 45083;

	class MonoEntityColliderManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_3()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x3D4D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x3D4D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_1()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x3D4E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>** StaticGet_Field_5_2()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x3D4E8);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_5_4()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityColliderManager_TypeDefinitionIndex)->GetStaticField(0x3D4F0);
		}
		::UnityEngine::Collider* defaultHitCollider; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* triggerColliderList; // 0x20
		::UnityEngine::Collider* defaultHullCollider; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* hullColliderList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* wallColliderList; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* hullColliderInitEntityNoCollider; // 0x40
		::Il2CppArray<::UnityEngine::Collider*>* hullColliderWithEntityNoCollider; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* otherColliderList; // 0x50
		::System::Boolean Field_5_13; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_14; // 0x60
		::System::Boolean Field_5_15; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_16; // 0x70
		::System::Boolean Field_5_17; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_18; // 0x80
		::System::Boolean Field_5_19; // 0x88
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_20; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearHitCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_CLEARHITCOLLIDER_OFFSET))(this);
		}

		::System::Void AddHitCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_ADDHITCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void SetDefaultHitCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_SETDEFAULTHITCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void RegisterHitCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHITCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterHitCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHITCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterHullCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERHULLCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterHullCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERHULLCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterWallCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTERWALLCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterWallCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTERWALLCOLLIDER_OFFSET))(this);
		}

		::System::Void RegisterOtherCollider(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_REGISTEROTHERCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterOtherCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_UNREGISTEROTHERCOLLIDER_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_EMPTY_OFFSET))();
		}

		static ::System::Boolean TryGetRegisterEntityByHitCollider(::UnityEngine::Collider* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetRegisterEntityByHitCollider_1(::System::Int32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYHITCOLLIDER_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetRegisterEntityByColliderInstanceId(::System::Int32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYCOLLIDERINSTANCEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetRegisterEntityByWallColliderInstanceId(::System::Int32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_TRYGETREGISTERENTITYBYWALLCOLLIDERINSTANCEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasHullColliderWithNoCollider(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDERMANAGER_HASHULLCOLLIDERWITHNOCOLLIDER_OFFSET))(a1);
		}
	};
}
