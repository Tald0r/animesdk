#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace UnityEngine { class Transform; }

#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATEFROMGO_OFFSET UNITYSDK_OFFSET(0x6B3E470)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x6B3E980)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DEFAULT_OFFSET UNITYSDK_OFFSET(0x6B3E5C0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x30BDE0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETROTATION_OFFSET UNITYSDK_OFFSET(0x30BE70)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x30BD30)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x30C090)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x30C030)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6B3E7E0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETROTATION_OFFSET UNITYSDK_OFFSET(0x30BE90)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETTRANSLATION_OFFSET UNITYSDK_OFFSET(0x30BF20)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x30BDC0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x30BFC0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B3EAD0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FTransformFragment_TypeDefinitionIndex = 56430;

	struct alignas(4) FTransformFragment
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FTransformFragment_TypeDefinitionIndex)->GetStaticField(0xEF30);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FTransformFragment_TypeDefinitionIndex)->GetStaticField(0xEF34);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Quaternion _rotation; // 0x20
		::System::Boolean rotationInitialized; // 0x30
		::UnityEngine::Vector3 scale; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT__CCTOR_OFFSET))();
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETLOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETROTATION_OFFSET))(this);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion r)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETROTATION_OFFSET))(this, r);
		}

		::System::Void SetTranslation(::UnityEngine::Vector3 newLocation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETTRANSLATION_OFFSET))(this, newLocation);
		}

		static ::NPCCrowd::Ability::FTransformFragment CreateFromGo(::UnityEngine::Transform* trans)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATEFROMGO_OFFSET))(trans);
		}

		static ::NPCCrowd::Ability::FTransformFragment Default()
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DEFAULT_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FTransformFragment Create()
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATE_OFFSET))();
		}
	};
}
