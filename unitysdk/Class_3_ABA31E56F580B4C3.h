#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_1CDA382D823F8E80;
class Class_1_560B23058CA4940C;
class Class_1_8289F2785D9AA990;
class Class_3_ABA31E56F580B4C3_Class_1_B4B92788DDB121E1;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_ABA31E56F580B4C3_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x86EB0F0)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_11300DE644F14DFC_OFFSET UNITYSDK_OFFSET(0x86EB540)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x86EB430)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x86EB4A0)
#define CLASS_3_ABA31E56F580B4C3_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x86EB490)
#define CLASS_3_ABA31E56F580B4C3_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x86EAD20)
#define CLASS_3_ABA31E56F580B4C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x86EB150)
#define CLASS_3_ABA31E56F580B4C3__CTOR_OFFSET UNITYSDK_OFFSET(0x86EB250)

inline static constexpr unsigned int Class_3_ABA31E56F580B4C3_TypeDefinitionIndex = 47049;

class Class_3_ABA31E56F580B4C3 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_ABA31E56F580B4C3*>*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_ABA31E56F580B4C3*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ABA31E56F580B4C3_TypeDefinitionIndex)->GetStaticField(0x3CB60);
	}
	// static const ::System::Int32 Field_3_32 = 0x76; // 0x0
	::System::String* Field_3_7; // 0x48
	::Class_3_F33F9DC5F4112336* Field_3_18; // 0x50
	::System::Action_2<::System::Boolean, ::MoleMole::Battle::Entity*>* Field_3_24; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_3_11; // 0x60
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_3_31; // 0x68
	::System::Action_1<::System::Int32>* Field_3_19; // 0x70
	::Class_1_1CDA382D823F8E80* Field_3_3; // 0x78
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_27; // 0x80
	::Class_1_8289F2785D9AA990* Field_3_9; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_ABA31E56F580B4C3_Class_1_B4B92788DDB121E1*>* Field_3_14; // 0x90
	::Class_3_F35B080B137ECC46* Field_3_17; // 0x98
	::MoleMole::Battle::Entity* Field_3_2; // 0xA0
	::System::Action* Field_3_20; // 0xA8
	::System::Collections::Generic::List_1<::System::Tuple_3<::System::Int32, ::System::Int32, ::MoleMole::Config::AttackPatternBindAnimatorState*>*>* Field_3_12; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_13; // 0xB8
	::MoleMole::Config::ContinueAttackDetect* Field_3_1; // 0xC0
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* Field_3_23; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*>* Field_3_28; // 0xD0
	::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Field_3_25; // 0xD8
	::System::Action* Field_3_22; // 0xE0
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_21; // 0xE8
	::System::Int32 Field_3_10; // 0xF0
	::System::Int32 Field_3_15; // 0xF4
	::System::UInt32 Field_3_26; // 0xF8
	::UnityEngine::LayerMask Field_3_4; // 0xFC
	::UnityEngine::Bounds Field_3_29; // 0x100
	::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E Field_3_5; // 0x118
	::System::Int32 Field_3_16; // 0x11C
	::System::Boolean Field_3_30; // 0x120
	::System::Boolean Field_3_6; // 0x121
	::System::Boolean Field_3_8; // 0x122

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_3_ABA31E56F580B4C3* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_ABA31E56F580B4C3*(*)())((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_11300DE644F14DFC(::MoleMole::Battle::Entity* a1, ::Class_1_1CDA382D823F8E80* a2, ::MoleMole::Config::ContinueAttackDetect* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ContinueAttackDetect*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_METHOD_3_11300DE644F14DFC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
