#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_C9173DEF57C38F23_Enum_3_3119526234CAAED0.h"
#include "unitysdk/Class_3_C9173DEF57C38F23_Enum_3_E999981806F69BE8.h"
#include "unitysdk/Struct_2_315B161BC0C52EFD.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_208CC9941471731A_214;
class Class_2_208CC9941471731A_542;
class Class_2_293B23618CFCC726_Class_1_04A718CFB2B0DB18_11;
class Class_2_9E8CD0C1037EB98E_63;
class Class_2_AAB5566438F6F9C2_1;
class Class_2_C162E620AE258C19;
class Class_3_F61F3C9E55A83BDE;
class StaticGrid2D;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class HotpotPhysicsInfo; }
namespace MoleMole::Battle { class HotpotRenderInfo; }
namespace MoleMole::Config { class ConfigHotPotFoodAssets; }
namespace System { class Random; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class EdgeCollider2D; }

#define CLASS_3_C9173DEF57C38F23_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x98EAFA0)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x98EB3D0)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x98EAD30)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_3E6B2EC3119464F0_OFFSET UNITYSDK_OFFSET(0x98EB0A0)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_531B361C81A63E57_OFFSET UNITYSDK_OFFSET(0x98EB3B0)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x98EB470)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x98EB400)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_ABBFAD35057D3430_1_OFFSET UNITYSDK_OFFSET(0x98EB2C0)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_ABBFAD35057D3430_OFFSET UNITYSDK_OFFSET(0x98EB2E0)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_BFFD298D632A84BA_OFFSET UNITYSDK_OFFSET(0x98EB270)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x98EAED0)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x98EAC40)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x98EAE60)
#define CLASS_3_C9173DEF57C38F23_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x98EB300)
#define CLASS_3_C9173DEF57C38F23_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x98EA7C0)
#define CLASS_3_C9173DEF57C38F23__CCTOR_OFFSET UNITYSDK_OFFSET(0x98EB000)
#define CLASS_3_C9173DEF57C38F23__CTOR_OFFSET UNITYSDK_OFFSET(0x98EB080)

inline static constexpr unsigned int Class_3_C9173DEF57C38F23_TypeDefinitionIndex = 55406;

class Class_3_C9173DEF57C38F23 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::Int32 Field_3_19 = 0x3E8; // 0x0
	// static const ::System::Int32 Field_3_43 = 0x32; // 0x0
	// static const ::System::Int32 Field_3_44 = 0x9C4; // 0x0
	// static const ::System::Int32 Field_3_67 = 0xB5; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_28; // 0x48
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_3_48; // 0x50
	::MoleMole::Config::ConfigHotPotFoodAssets* Field_3_34; // 0x58
	::System::Action_2<::System::Single, ::System::Single>* Field_3_50; // 0x60
	::StaticGrid2D* Field_3_40; // 0x68
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2>* Field_3_42; // 0x70
	::Class_2_C162E620AE258C19* Field_3_1; // 0x78
	::System::Action_1<::System::Boolean>* Field_3_52; // 0x80
	::System::Collections::Generic::Dictionary_2<::Class_3_F61F3C9E55A83BDE*, ::System::Single>* Field_3_33; // 0x88
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_3_49; // 0x90
	::System::Action_2<::MoleMole::Battle::Entity*, ::System::Single>* Field_3_51; // 0x98
	::UnityEngine::CircleCollider2D* Field_3_39; // 0xA0
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Single, ::System::Boolean>* Field_3_53; // 0xA8
	::MoleMole::Battle::HotpotPhysicsInfo* Field_3_9; // 0xB0
	::System::Random* Field_3_7; // 0xB8
	::Class_2_208CC9941471731A_542* Field_3_60; // 0xC0
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_37; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_293B23618CFCC726_Class_1_04A718CFB2B0DB18_11*>* Field_3_66; // 0xD0
	::Class_2_9E8CD0C1037EB98E_63* Field_3_2; // 0xD8
	::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>* Field_3_47; // 0xE0
	::MoleMole::Battle::HotpotRenderInfo* Field_3_10; // 0xE8
	::UnityEngine::AnimationCurve* Field_3_3; // 0xF0
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_3_41; // 0xF8
	::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* Field_3_35; // 0x100
	::Class_2_208CC9941471731A_214* Field_3_65; // 0x108
	::System::Random* Field_3_12; // 0x110
	::Class_2_AAB5566438F6F9C2_1* Field_3_0; // 0x118
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider2D*>* Field_3_13; // 0x120
	::System::Int32 Field_3_22; // 0x128
	::System::Single Field_3_45; // 0x12C
	::System::Int32 Field_3_29; // 0x130
	::System::Single Field_3_58; // 0x134
	::System::Int32 Field_3_5; // 0x138
	::System::Int32 Field_3_18; // 0x13C
	::System::Int32 Field_3_61; // 0x140
	::System::Int32 Field_3_31; // 0x144
	::System::Int32 Field_3_32; // 0x148
	::System::Single Field_3_57; // 0x14C
	::System::Int32 Field_3_25; // 0x150
	::System::Single Field_3_4; // 0x154
	::System::Boolean Field_3_21; // 0x158
	::System::Boolean Field_3_24; // 0x159
	::System::Boolean Field_3_54; // 0x15A
	::System::Boolean Field_3_64; // 0x15B
	::System::Int32 Field_3_27; // 0x15C
	::System::Int32 Field_3_17; // 0x160
	::System::Boolean Field_3_36; // 0x164
	::System::Boolean Field_3_16; // 0x165
	::System::Boolean Field_3_30; // 0x166
	::System::Boolean Field_3_56; // 0x167
	::System::Int32 Field_3_6; // 0x168
	::System::Single Field_3_59; // 0x16C
	::Class_3_C9173DEF57C38F23_Enum_3_E999981806F69BE8 Field_3_15; // 0x170
	::System::Int32 Field_3_62; // 0x174
	::Struct_2_315B161BC0C52EFD Field_3_14; // 0x178
	::System::Int32 Field_3_23; // 0x200
	::System::Int32 Field_3_20; // 0x204
	::Class_3_C9173DEF57C38F23_Enum_3_3119526234CAAED0 Field_3_38; // 0x208
	::System::Single Field_3_46; // 0x20C
	::System::Int32 Field_3_63; // 0x210
	::System::Int32 Field_3_11; // 0x214
	::System::Int32 Field_3_26; // 0x218
	::System::Single Field_3_55; // 0x21C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_GETCLASSID_OFFSET))(this);
	}

	::System::Single Method_3_3E6B2EC3119464F0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_3E6B2EC3119464F0_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_3_BFFD298D632A84BA()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_BFFD298D632A84BA_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::CircleCollider2D* Method_3_ABBFAD35057D3430()
	{
		return ((::UnityEngine::CircleCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_ABBFAD35057D3430_OFFSET))(this);
	}

	static ::Class_3_C9173DEF57C38F23* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_C9173DEF57C38F23*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::CircleCollider2D* Method_3_ABBFAD35057D3430_1()
	{
		return ((::UnityEngine::CircleCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_ABBFAD35057D3430_1_OFFSET))(this);
	}

	::UnityEngine::EdgeCollider2D* Method_3_531B361C81A63E57()
	{
		return ((::UnityEngine::EdgeCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_531B361C81A63E57_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Single Method_3_3150507749BCEAEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_3150507749BCEAEC_OFFSET))(this);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
