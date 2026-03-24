#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_1A58F01F41846A1D_Struct_2_25260034BAAB7C7C.h"
#include "unitysdk/Enum_3_38416882F63DED4D.h"
#include "unitysdk/Enum_3_80F71F279FEF1A16.h"
#include "unitysdk/Enum_3_EE55B142EAFB18C0.h"
#include "unitysdk/MoleMole/Battle/BuddyMoveStatus.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D6F12365BC4A10D;
class Class_3_3A6272A02DE7F4E0;
class Class_3_F97B015544BE936B;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_1A58F01F41846A1D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x70D4130)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x70D4460)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x70D4580)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x70D44E0)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x70D4770)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x70D46A0)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_1_OFFSET UNITYSDK_OFFSET(0x70D46B0)
#define CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x70D45E0)
#define CLASS_3_1A58F01F41846A1D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x70D3E30)
#define CLASS_3_1A58F01F41846A1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x70D4190)
#define CLASS_3_1A58F01F41846A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x70D4290)

inline static constexpr unsigned int Class_3_1A58F01F41846A1D_TypeDefinitionIndex = 69885;

class Class_3_1A58F01F41846A1D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_Field_3_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0x412B0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_3_3()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0x412B8);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0x412C0);
	}
	static ::System::Boolean* StaticGet_Field_3_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A58F01F41846A1D_TypeDefinitionIndex)->GetStaticField(0xFC00);
	}
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_1 = 0x20; // 0x0
	// static const ::System::Int32 Field_3_48 = 0x2C; // 0x0
	::System::Action* Field_3_43; // 0x48
	::System::Collections::Generic::Dictionary_2<::Enum_3_EE55B142EAFB18C0, ::Class_1_4D6F12365BC4A10D*>* Field_3_15; // 0x50
	::System::Action* Field_3_44; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>*>* Field_3_10; // 0x60
	::Class_3_3A6272A02DE7F4E0* Field_3_38; // 0x68
	::System::Action* Field_3_47; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_11; // 0x78
	::Class_3_F97B015544BE936B* Field_3_39; // 0x80
	::System::String* Field_3_6; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_9; // 0x90
	::System::Action* Field_3_46; // 0x98
	::System::Action* Field_3_42; // 0xA0
	::System::Action* Field_3_45; // 0xA8
	::System::UInt32 Field_3_23; // 0xB0
	::Enum_3_38416882F63DED4D Field_3_22; // 0xB4
	::MoleMole::Battle::BuddyMoveStatus Field_3_19; // 0xB8
	::System::Int32 Field_3_40; // 0xBC
	::MoleMole::Battle::BuddyMoveStatus Field_3_17; // 0xC0
	::System::Boolean Field_3_31; // 0xC4
	::System::Boolean Field_3_32; // 0xC5
	::System::Boolean Field_3_27; // 0xC6
	::System::Boolean Field_3_30; // 0xC7
	::UnityEngine::Vector3 Field_3_25; // 0xC8
	::System::Int32 Field_3_7; // 0xD4
	::UnityEngine::RaycastHit Field_3_37; // 0xD8
	::Enum_3_38416882F63DED4D Field_3_21; // 0x10C
	::System::Int32 Field_3_24; // 0x110
	::System::Single Field_3_26; // 0x114
	::System::Boolean Field_3_28; // 0x118
	::System::Boolean Field_3_13; // 0x119
	::System::Boolean Field_3_41; // 0x11A
	::MoleMole::Battle::BuddyMoveStatus Field_3_18; // 0x11C
	::Enum_3_80F71F279FEF1A16 Field_3_34; // 0x120
	::System::Boolean Field_3_16; // 0x124
	::System::Boolean Field_3_35; // 0x125
	::System::Boolean Field_3_33; // 0x126
	::System::Boolean Field_3_14; // 0x127
	::Class_3_1A58F01F41846A1D_Struct_2_25260034BAAB7C7C Field_3_12; // 0x128
	::UnityEngine::Vector3 Field_3_36; // 0x130
	::System::UInt32 Field_3_20; // 0x13C
	::System::Boolean Field_3_8; // 0x140
	::System::Boolean Field_3_29; // 0x141

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_3_1A58F01F41846A1D* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_1A58F01F41846A1D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_FDE09C8D62639E3E_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_FDE09C8D62639E3E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A58F01F41846A1D_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
