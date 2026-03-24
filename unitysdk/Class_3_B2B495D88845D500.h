#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_2_0206DD479BB5C906;
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_B2B495D88845D500_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x87867A0)
#define CLASS_3_B2B495D88845D500_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8786E00)
#define CLASS_3_B2B495D88845D500_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x8786D60)
#define CLASS_3_B2B495D88845D500_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x8786070)
#define CLASS_3_B2B495D88845D500__CCTOR_OFFSET UNITYSDK_OFFSET(0x8786800)
#define CLASS_3_B2B495D88845D500__CTOR_OFFSET UNITYSDK_OFFSET(0x8786880)

inline static constexpr unsigned int Class_3_B2B495D88845D500_TypeDefinitionIndex = 55055;

class Class_3_B2B495D88845D500 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_18 = 0x39; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0206DD479BB5C906*>* Field_3_4; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_3_13; // 0x58
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* Field_3_16; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0206DD479BB5C906*>* Field_3_5; // 0x68
	::UnityEngine::Collider* Field_3_2; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_14; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*>* Field_3_8; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_15; // 0x88
	::UnityEngine::Collider* Field_3_1; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* Field_3_9; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Collider*>* Field_3_12; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_3; // 0xA8
	::MoleMole::MonoEntityColliderManager* Field_3_0; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Bounds>* Field_3_17; // 0xB8
	::System::Boolean Field_3_11; // 0xC0
	::System::Boolean Field_3_10; // 0xC1
	::System::Int32 Field_3_7; // 0xC4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B2B495D88845D500__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2B495D88845D500__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2B495D88845D500_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2B495D88845D500_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_B2B495D88845D500* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_B2B495D88845D500*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B2B495D88845D500_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2B495D88845D500_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
