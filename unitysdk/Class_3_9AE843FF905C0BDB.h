#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_41A27529628F742C_Enum_3_0CE05235997D5408.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_25797252421662EF.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1BD43ABDBFFA2E1E;
class Class_1_F081267A1EDA8B0F;
class Class_2_0206DD479BB5C906;
class Class_2_D0A1765C72A19057;
class Class_2_E7B5A02ED2B31407;
class NapRenderEntity;
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class NapCBWrapper; }

#define CLASS_3_9AE843FF905C0BDB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x96923B0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x96932D0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_35D0A57EE17CF6B0_OFFSET UNITYSDK_OFFSET(0x9693170)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_395CBEE9E73BB1F1_OFFSET UNITYSDK_OFFSET(0x9692FB0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_3B814BB3FE3B27A9_OFFSET UNITYSDK_OFFSET(0x9692110)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_413472096512A213_OFFSET UNITYSDK_OFFSET(0x9692FA0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x9692AC0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x9692AD0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_76068FD3D504270D_OFFSET UNITYSDK_OFFSET(0x9692870)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_828791371FF7B03E_OFFSET UNITYSDK_OFFSET(0x935F1D0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x9692FD0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x9692940)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_1_OFFSET UNITYSDK_OFFSET(0x9692E80)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x9692D60)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9692810)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x9693200)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9693050)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0x96929C0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x9693180)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_DEE12CBAADD56669_OFFSET UNITYSDK_OFFSET(0x96926C0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x9692FC0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x935F5B0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_FE2E5A71E98F7A12_OFFSET UNITYSDK_OFFSET(0x96930F0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x9692790)
#define CLASS_3_9AE843FF905C0BDB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9691660)
#define CLASS_3_9AE843FF905C0BDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x9692410)
#define CLASS_3_9AE843FF905C0BDB__CTOR_OFFSET UNITYSDK_OFFSET(0x96924C0)

inline static constexpr unsigned int Class_3_9AE843FF905C0BDB_TypeDefinitionIndex = 65626;

class Class_3_9AE843FF905C0BDB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Single* StaticGet_Field_3_46()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9AE843FF905C0BDB_TypeDefinitionIndex)->GetStaticField(0xCA40);
	}
	static ::System::Int32* StaticGet_Field_3_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9AE843FF905C0BDB_TypeDefinitionIndex)->GetStaticField(0xCA44);
	}
	static ::System::Int32* StaticGet_Field_3_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9AE843FF905C0BDB_TypeDefinitionIndex)->GetStaticField(0xCA48);
	}
	// static const ::System::Single Field_3_10; // 0x0
	// static const ::System::String* Field_3_11; // 0x0
	// static const ::System::String* Field_3_13; // 0x0
	// static const ::System::String* Field_3_14; // 0x0
	// static const ::System::String* Field_3_15; // 0x0
	// static const ::System::String* Field_3_44; // 0x0
	// static const ::System::String* Field_3_45; // 0x0
	// static const ::System::String* Field_3_47; // 0x0
	// static const ::System::Int32 Field_3_68 = 0x1C; // 0x0
	::Class_2_0206DD479BB5C906* Field_3_29; // 0x48
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_0; // 0x50
	::Class_1_1BD43ABDBFFA2E1E* Field_3_8; // 0x58
	::System::String* Field_3_36; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_D0A1765C72A19057*>* Field_3_54; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0206DD479BB5C906*>* Field_3_53; // 0x70
	::MoleMole::CharacterCameraDitheringData Field_3_24; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_58; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_59; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_55; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_64; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0206DD479BB5C906*>* Field_3_52; // 0xE0
	::MoleMole::MonoRenderHandlerForAvatar* Field_3_40; // 0xE8
	::System::Collections::Generic::HashSet_1<::System::Type*>* Field_3_42; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_51; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* Field_3_60; // 0x100
	::System::Collections::Generic::List_1<::Struct_2_25797252421662EF>* Field_3_43; // 0x108
	::Class_2_0206DD479BB5C906* Field_3_50; // 0x110
	::UnityEngine::Transform* Field_3_37; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_31; // 0x120
	::MoleMole::DitherConfig* Field_3_9; // 0x128
	::Il2CppArray<::UnityEngine::Material*>* Field_3_4; // 0x130
	::NapRenderEntity* Field_3_1; // 0x138
	::System::Action_2<::UnityEngine::Renderer*, ::System::Boolean>* Field_3_6; // 0x140
	::Class_2_0206DD479BB5C906* Field_3_49; // 0x148
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_57; // 0x150
	::MoleMole::EntityHandle Field_3_67; // 0x158
	::Class_2_0206DD479BB5C906* Field_3_25; // 0x168
	::Class_1_F081267A1EDA8B0F* Field_3_41; // 0x170
	::Class_2_E7B5A02ED2B31407* Field_3_38; // 0x178
	::System::Single Field_3_20; // 0x180
	::System::Boolean Field_3_2; // 0x184
	::System::Boolean Field_3_27; // 0x185
	::System::Boolean Field_3_65; // 0x186
	::System::Boolean Field_3_26; // 0x187
	::System::Boolean Field_3_62; // 0x188
	::System::Boolean Field_3_28; // 0x189
	::System::Boolean Field_3_66; // 0x18A
	::System::Boolean Field_3_21; // 0x18B
	::System::Boolean Field_3_63; // 0x18C
	::System::Boolean Field_3_16; // 0x18D
	::System::Boolean Field_3_39; // 0x18E
	::UnityEngine::Vector2 Field_3_34; // 0x190
	::System::Single Field_3_35; // 0x198
	::Class_3_41A27529628F742C_Enum_3_0CE05235997D5408 Field_3_3; // 0x19C
	::System::Int32 Field_3_17; // 0x1A0
	::System::Single Field_3_19; // 0x1A4
	::System::Single Field_3_18; // 0x1A8
	::System::Boolean Field_3_7; // 0x1AC
	::System::Boolean Field_3_56; // 0x1AD
	::System::Boolean Field_3_23; // 0x1AE
	::System::Boolean Field_3_33; // 0x1AF
	::System::Int32 Field_3_32; // 0x1B0
	::System::Boolean Field_3_61; // 0x1B4
	::System::Boolean Field_3_30; // 0x1B5
	::System::Boolean Field_3_22; // 0x1B6
	::System::Boolean Field_3_5; // 0x1B7

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_DEE12CBAADD56669(::MoleMole::DitherConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_DEE12CBAADD56669_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_3_76068FD3D504270D()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_76068FD3D504270D_OFFSET))(this);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_3_CD5C08A2521794A0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_CD5C08A2521794A0_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_3_66193B8782064F5D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_66193B8782064F5D_OFFSET))(this);
	}

	::System::Boolean Method_3_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_413472096512A213_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Renderer*>* Method_3_395CBEE9E73BB1F1()
	{
		return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_395CBEE9E73BB1F1_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::String* Method_3_88B60F3B95FAA4F1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_1_OFFSET))(this);
	}

	static ::Class_3_9AE843FF905C0BDB* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_9AE843FF905C0BDB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Rendering::Universal::NapCBWrapper* Method_3_FE2E5A71E98F7A12()
	{
		return ((::UnityEngine::Rendering::Universal::NapCBWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_FE2E5A71E98F7A12_OFFSET))(this);
	}

	::System::Boolean Method_3_8A76897D6A693475_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_1_OFFSET))(this);
	}

	::System::Void Method_3_35D0A57EE17CF6B0(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_35D0A57EE17CF6B0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_CF8BA38996D09531_OFFSET))(this);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_3B814BB3FE3B27A9(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_3B814BB3FE3B27A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_828791371FF7B03E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_828791371FF7B03E_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
