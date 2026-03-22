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

#define CLASS_3_9AE843FF905C0BDB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA468740)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA468B70)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_35D0A57EE17CF6B0_OFFSET UNITYSDK_OFFSET(0xA469500)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_395CBEE9E73BB1F1_OFFSET UNITYSDK_OFFSET(0xA468D70)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_3B814BB3FE3B27A9_OFFSET UNITYSDK_OFFSET(0xA4684B0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_413472096512A213_OFFSET UNITYSDK_OFFSET(0xA468D80)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xA468D90)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0xA468F70)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_76068FD3D504270D_OFFSET UNITYSDK_OFFSET(0xA422720)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_828791371FF7B03E_OFFSET UNITYSDK_OFFSET(0xA4201B0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xA469520)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA468AF0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_1_OFFSET UNITYSDK_OFFSET(0xA469200)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xA468C50)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA468BF0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA469420)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA468A50)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0xA469320)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0xA420580)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_DEE12CBAADD56669_OFFSET UNITYSDK_OFFSET(0xA468DA0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xA469510)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA4694F0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_FE2E5A71E98F7A12_OFFSET UNITYSDK_OFFSET(0xA468EF0)
#define CLASS_3_9AE843FF905C0BDB_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA468E70)
#define CLASS_3_9AE843FF905C0BDB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA4679D0)
#define CLASS_3_9AE843FF905C0BDB__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4687A0)
#define CLASS_3_9AE843FF905C0BDB__CTOR_OFFSET UNITYSDK_OFFSET(0xA468850)

inline static constexpr unsigned int Class_3_9AE843FF905C0BDB_TypeDefinitionIndex = 37190;

class Class_3_9AE843FF905C0BDB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9AE843FF905C0BDB_TypeDefinitionIndex)->GetStaticField(0x94F0);
	}
	static ::System::Single* StaticGet_Field_3_46()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9AE843FF905C0BDB_TypeDefinitionIndex)->GetStaticField(0x94F4);
	}
	static ::System::Int32* StaticGet_Field_3_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9AE843FF905C0BDB_TypeDefinitionIndex)->GetStaticField(0x94F8);
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
	::UnityEngine::Transform* Field_3_37; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_58; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Type*>* Field_3_42; // 0x60
	::MoleMole::EntityHandle Field_3_67; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_31; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0206DD479BB5C906*>* Field_3_52; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0206DD479BB5C906*>* Field_3_53; // 0x88
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_0; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_59; // 0x98
	::Class_2_0206DD479BB5C906* Field_3_50; // 0xA0
	::MoleMole::DitherConfig* Field_3_9; // 0xA8
	::System::Collections::Generic::List_1<::Struct_2_25797252421662EF>* Field_3_43; // 0xB0
	::Class_1_1BD43ABDBFFA2E1E* Field_3_8; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_57; // 0xC0
	::Class_2_0206DD479BB5C906* Field_3_49; // 0xC8
	::System::Action_2<::UnityEngine::Renderer*, ::System::Boolean>* Field_3_6; // 0xD0
	::NapRenderEntity* Field_3_1; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_51; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_55; // 0xE8
	::MoleMole::MonoRenderHandlerForAvatar* Field_3_40; // 0xF0
	::MoleMole::CharacterCameraDitheringData Field_3_24; // 0xF8
	::Class_1_F081267A1EDA8B0F* Field_3_41; // 0x140
	::Il2CppArray<::UnityEngine::Material*>* Field_3_4; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* Field_3_60; // 0x150
	::System::String* Field_3_36; // 0x158
	::Class_2_E7B5A02ED2B31407* Field_3_38; // 0x160
	::Class_2_0206DD479BB5C906* Field_3_25; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_D0A1765C72A19057*>* Field_3_54; // 0x170
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_64; // 0x178
	::System::Single Field_3_19; // 0x180
	::System::Boolean Field_3_22; // 0x184
	::System::Boolean Field_3_16; // 0x185
	::System::Boolean Field_3_65; // 0x186
	::UnityEngine::Vector2 Field_3_34; // 0x188
	::System::Boolean Field_3_33; // 0x190
	::System::Boolean Field_3_28; // 0x191
	::System::Boolean Field_3_63; // 0x192
	::System::Boolean Field_3_56; // 0x193
	::System::Boolean Field_3_66; // 0x194
	::System::Boolean Field_3_62; // 0x195
	::System::Boolean Field_3_5; // 0x196
	::System::Boolean Field_3_23; // 0x197
	::Class_3_41A27529628F742C_Enum_3_0CE05235997D5408 Field_3_3; // 0x198
	::System::Boolean Field_3_61; // 0x19C
	::System::Boolean Field_3_7; // 0x19D
	::System::Boolean Field_3_2; // 0x19E
	::System::Boolean Field_3_26; // 0x19F
	::System::Boolean Field_3_30; // 0x1A0
	::System::Boolean Field_3_27; // 0x1A1
	::System::Boolean Field_3_21; // 0x1A2
	::System::Boolean Field_3_39; // 0x1A3
	::System::Int32 Field_3_17; // 0x1A4
	::System::Single Field_3_35; // 0x1A8
	::System::Single Field_3_18; // 0x1AC
	::System::Int32 Field_3_32; // 0x1B0
	::System::Single Field_3_20; // 0x1B4

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

	static ::Class_3_9AE843FF905C0BDB* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_9AE843FF905C0BDB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_3B814BB3FE3B27A9(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_3B814BB3FE3B27A9_OFFSET))(this, a1);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Renderer*>* Method_3_395CBEE9E73BB1F1()
	{
		return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_395CBEE9E73BB1F1_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_413472096512A213_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_3_DEE12CBAADD56669(::MoleMole::DitherConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_DEE12CBAADD56669_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_3_76068FD3D504270D()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_76068FD3D504270D_OFFSET))(this);
	}

	::UnityEngine::Rendering::Universal::NapCBWrapper* Method_3_FE2E5A71E98F7A12()
	{
		return ((::UnityEngine::Rendering::Universal::NapCBWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_FE2E5A71E98F7A12_OFFSET))(this);
	}

	::System::Boolean Method_3_66193B8782064F5D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_66193B8782064F5D_OFFSET))(this);
	}

	::System::Boolean Method_3_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_CF8BA38996D09531_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::String* Method_3_CD5C08A2521794A0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_CD5C08A2521794A0_OFFSET))(this);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_35D0A57EE17CF6B0(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_35D0A57EE17CF6B0_OFFSET))(this, a1);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8A76897D6A693475_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_8A76897D6A693475_1_OFFSET))(this);
	}

	::System::Boolean Method_3_828791371FF7B03E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_828791371FF7B03E_OFFSET))(this);
	}

	::System::String* Method_3_88B60F3B95FAA4F1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE843FF905C0BDB_METHOD_3_88B60F3B95FAA4F1_1_OFFSET))(this);
	}
};
