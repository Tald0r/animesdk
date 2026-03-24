#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_6124F7AF16B30AB1_Enum_3_11C5849841D27642.h"
#include "unitysdk/Enum_3_1B39CAF32BBB5989.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_37A5C83AFE47FFAE.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8FA987B34A9AFBEA;
class Class_2_542A6E5DEC62E95F;
class Class_2_6C64768E8149F94E;
class Class_3_1CF0AE513797DBD3;
class Class_3_4845C6520B34C725;
class Class_3_734E705B111DCC0C;
class Class_3_9AE843FF905C0BDB;
class Class_3_D902FC5F64432838;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class FloatRendererFader; }
namespace MoleMole { class LightFader; }
namespace MoleMole { class MatKeyPropValueFaderByIndex; }
namespace MoleMole { class MatKeyWordFaderByIndex; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_3_6124F7AF16B30AB1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x80B5870)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x80B71D0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_0352744742F7C457_OFFSET UNITYSDK_OFFSET(0x80B6BB0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_413472096512A213_OFFSET UNITYSDK_OFFSET(0x80B6140)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_4D71BCFB74C16073_1_OFFSET UNITYSDK_OFFSET(0x80B6160)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x80B6150)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x80B7490)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_560D9D4A997B6E32_OFFSET UNITYSDK_OFFSET(0x80B6170)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_57405606C6F829D2_OFFSET UNITYSDK_OFFSET(0x80B74A0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_65585810E2458BA4_OFFSET UNITYSDK_OFFSET(0x80B5A90)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_67092B198ADCB2A8_OFFSET UNITYSDK_OFFSET(0x80B55E0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x80B7350)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_783C2CD65D662168_OFFSET UNITYSDK_OFFSET(0x80B6CE0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x80B72D0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_9522E2EA1972A448_OFFSET UNITYSDK_OFFSET(0x80B6CC0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x80B59B0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x80B6080)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_AA18443F042C7418_OFFSET UNITYSDK_OFFSET(0x80B7340)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_AF67B652549A697D_OFFSET UNITYSDK_OFFSET(0x80B6B30)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x80B72C0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x80B7480)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_CBD3175F635B613A_OFFSET UNITYSDK_OFFSET(0x80B6650)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x80B71E0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_DFEA80256A97C1C4_OFFSET UNITYSDK_OFFSET(0x80B5AB0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x80B59A0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x80B5AA0)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_FC1C0807F99BD816_OFFSET UNITYSDK_OFFSET(0x80B7360)
#define CLASS_3_6124F7AF16B30AB1_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x80B5A10)
#define CLASS_3_6124F7AF16B30AB1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x80B4EB0)
#define CLASS_3_6124F7AF16B30AB1__CCTOR_OFFSET UNITYSDK_OFFSET(0x80B58D0)
#define CLASS_3_6124F7AF16B30AB1__CTOR_OFFSET UNITYSDK_OFFSET(0x80B5950)

inline static constexpr unsigned int Class_3_6124F7AF16B30AB1_TypeDefinitionIndex = 38287;

class Class_3_6124F7AF16B30AB1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_87 = 0x62; // 0x0
	::Il2CppArray<::MoleMole::FloatRendererFader*>* Field_3_59; // 0x48
	::MoleMole::EntityHandle Field_3_10; // 0x50
	::UnityEngine::MaterialPropertyBlock* Field_3_52; // 0x60
	::MoleMole::Battle::Entity* Field_3_8; // 0x68
	::Il2CppArray<::System::Single>* Field_3_58; // 0x70
	::Class_1_8FA987B34A9AFBEA* Field_3_76; // 0x78
	::Class_3_734E705B111DCC0C* Field_3_12; // 0x80
	::System::Collections::Generic::List_1<::Class_2_542A6E5DEC62E95F*>* Field_3_56; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_6C64768E8149F94E*>*>* Field_3_73; // 0x90
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_66; // 0x98
	::Class_3_F35B080B137ECC46* Field_3_14; // 0xA0
	::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* Field_3_63; // 0xA8
	::UnityEngine::AnimationCurve* Field_3_82; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_6C64768E8149F94E*>*>* Field_3_75; // 0xB8
	::System::String* Field_3_3; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_70; // 0xC8
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_46; // 0xD0
	::Foundation::Variable_1<::System::Single> Field_3_30; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_71; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_74; // 0xF8
	::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* Field_3_5; // 0x100
	::Class_3_1CF0AE513797DBD3* Field_3_13; // 0x108
	::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* Field_3_64; // 0x110
	::Struct_2_37A5C83AFE47FFAE Field_3_86; // 0x118
	::Il2CppArray<::System::Single>* Field_3_61; // 0x130
	::System::Collections::Generic::List_1<::MoleMole::LightFader*>* Field_3_77; // 0x138
	::System::String* Field_3_45; // 0x140
	::System::Collections::Generic::List_1<::Class_2_6C64768E8149F94E*>* Field_3_55; // 0x148
	::UnityEngine::Transform* Field_3_25; // 0x150
	::MoleMole::Config::ConfigPosRot* Field_3_37; // 0x158
	::Class_3_4845C6520B34C725* Field_3_15; // 0x160
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_68; // 0x168
	::MoleMole::EntityHandle Field_3_6; // 0x170
	::Il2CppArray<::Il2CppArray<::System::Single>*>* Field_3_50; // 0x180
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* Field_3_42; // 0x188
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_2_6C64768E8149F94E*>*>* Field_3_69; // 0x190
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_47; // 0x198
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_72; // 0x1A0
	::System::Collections::Generic::List_1<::Class_2_6C64768E8149F94E*>* Field_3_54; // 0x1A8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* Field_3_67; // 0x1B0
	::Il2CppArray<::MoleMole::MatKeyPropValueFaderByIndex*>* Field_3_65; // 0x1B8
	::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>* Field_3_51; // 0x1C0
	::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>* Field_3_53; // 0x1C8
	::Il2CppArray<::MoleMole::FloatRendererFader*>* Field_3_62; // 0x1D0
	::Il2CppArray<::MoleMole::LightFader*>* Field_3_57; // 0x1D8
	::Class_3_9AE843FF905C0BDB* Field_3_16; // 0x1E0
	::System::String* Field_3_4; // 0x1E8
	::UnityEngine::Transform* Field_3_7; // 0x1F0
	::Il2CppArray<::MoleMole::FloatRendererFader*>* Field_3_60; // 0x1F8
	::Il2CppArray<::Il2CppArray<::System::Single>*>* Field_3_41; // 0x200
	::UnityEngine::Vector3 Field_3_19; // 0x208
	::System::Boolean Field_3_26; // 0x214
	::System::Boolean Field_3_38; // 0x215
	::System::Int32 Field_3_2; // 0x218
	::UnityEngine::Vector3 Field_3_20; // 0x21C
	::System::Single Field_3_27; // 0x228
	::System::Single Field_3_35; // 0x22C
	::System::UInt32 Field_3_9; // 0x230
	::System::Single Field_3_84; // 0x234
	::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel Field_3_0; // 0x238
	::System::Single Field_3_29; // 0x23C
	::System::Single Field_3_28; // 0x240
	::System::Boolean Field_3_40; // 0x244
	::System::Boolean Field_3_33; // 0x245
	::System::Boolean Field_3_80; // 0x246
	::System::Boolean Field_3_21; // 0x247
	::System::Boolean Field_3_23; // 0x248
	::System::Boolean Field_3_39; // 0x249
	::System::Boolean Field_3_11; // 0x24A
	::System::Boolean Field_3_79; // 0x24B
	::Enum_3_1B39CAF32BBB5989 Field_3_31; // 0x24C
	::System::Single Field_3_83; // 0x250
	::System::Boolean Field_3_17; // 0x254
	::System::Boolean Field_3_24; // 0x255
	::System::Boolean Field_3_43; // 0x256
	::System::Boolean Field_3_44; // 0x257
	::System::Single Field_3_36; // 0x258
	::System::Boolean Field_3_78; // 0x25C
	::System::Boolean Field_3_32; // 0x25D
	::System::Boolean Field_3_1; // 0x25E
	::System::Boolean Field_3_49; // 0x25F
	::Class_3_6124F7AF16B30AB1_Enum_3_11C5849841D27642 Field_3_18; // 0x260
	::System::Boolean Field_3_22; // 0x264
	::System::Boolean Field_3_34; // 0x265
	::System::Boolean Field_3_85; // 0x266
	::System::Boolean Field_3_81; // 0x267
	::System::Single Field_3_48; // 0x268

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_67092B198ADCB2A8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_67092B198ADCB2A8_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_3_65585810E2458BA4(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_65585810E2458BA4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_DFEA80256A97C1C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_DFEA80256A97C1C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_413472096512A213_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_4D71BCFB74C16073_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_4D71BCFB74C16073_1_OFFSET))(this);
	}

	::System::Void Method_3_560D9D4A997B6E32(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::Transform* a4, ::System::String* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::MoleMole::EntityHandle a8, ::System::String* a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_560D9D4A997B6E32_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* Method_3_AF67B652549A697D()
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_AF67B652549A697D_OFFSET))(this);
	}

	::System::Void Method_3_CBD3175F635B613A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_CBD3175F635B613A_OFFSET))(this, a1);
	}

	::System::Void Method_3_9522E2EA1972A448(::Foundation::Variable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_9522E2EA1972A448_OFFSET))(this, a1);
	}

	::System::Void Method_3_783C2CD65D662168(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Config::ConfigPosRot* a4, ::MoleMole::EntityHandle a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_783C2CD65D662168_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	static ::Class_3_6124F7AF16B30AB1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_6124F7AF16B30AB1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_3_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_3_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA18443F042C7418(::Class_3_6124F7AF16B30AB1_Enum_3_11C5849841D27642 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6124F7AF16B30AB1_Enum_3_11C5849841D27642))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_AA18443F042C7418_OFFSET))(this, a1);
	}

	::System::Void Method_3_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0352744742F7C457()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_0352744742F7C457_OFFSET))(this);
	}

	::Class_3_D902FC5F64432838* Method_3_FC1C0807F99BD816()
	{
		return ((::Class_3_D902FC5F64432838*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_FC1C0807F99BD816_OFFSET))(this);
	}

	::System::Void Method_3_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::Class_3_6124F7AF16B30AB1_Enum_3_11C5849841D27642 Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_6124F7AF16B30AB1_Enum_3_11C5849841D27642(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Single Method_3_57405606C6F829D2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6124F7AF16B30AB1_METHOD_3_57405606C6F829D2_OFFSET))(this);
	}
};
