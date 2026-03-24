#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F5B8D6A28B626E8E.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"

class Class_1_4805505D38D7910B;
class Class_1_8A50BFB20D9D2482_1;
class Class_1_F2DDD4E340F5351D;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ForwardRenderer; }

#define CLASS_3_8C7146E26E2D1C06_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3657C0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_02B4A7AC57AB5850_OFFSET UNITYSDK_OFFSET(0xF37D100)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_050AA223E05C2B0E_OFFSET UNITYSDK_OFFSET(0xF370CF0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_091DF3033F55990A_OFFSET UNITYSDK_OFFSET(0xF37E7F0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0xF365830)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xF36F690)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_1592A471DBA38FF5_OFFSET UNITYSDK_OFFSET(0xF369D10)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_15F0BA9E79A867BB_OFFSET UNITYSDK_OFFSET(0xF36FF50)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_161470F52EE109C0_OFFSET UNITYSDK_OFFSET(0xF36BA20)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_25BDE921D645888D_OFFSET UNITYSDK_OFFSET(0xF36F4C0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_289E522D6A576DC5_OFFSET UNITYSDK_OFFSET(0xF36D070)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_30B84D11D6E8A895_OFFSET UNITYSDK_OFFSET(0xF3669E0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_314CB383333C08EE_OFFSET UNITYSDK_OFFSET(0xF37E640)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_3617F51E36984770_1_OFFSET UNITYSDK_OFFSET(0xF37DD40)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_3617F51E36984770_OFFSET UNITYSDK_OFFSET(0xF36BB90)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xF36FE90)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_46C6AD3AA3219549_OFFSET UNITYSDK_OFFSET(0xF36E5D0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_48C605977C5CD58D_OFFSET UNITYSDK_OFFSET(0xF36F8C0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xF37E6E0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5594F6075170B32E_OFFSET UNITYSDK_OFFSET(0xF37E0F0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_10_OFFSET UNITYSDK_OFFSET(0xF377CC0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_11_OFFSET UNITYSDK_OFFSET(0xF377320)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_12_OFFSET UNITYSDK_OFFSET(0xF373890)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_13_OFFSET UNITYSDK_OFFSET(0xF3799A0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_14_OFFSET UNITYSDK_OFFSET(0xF374230)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_15_OFFSET UNITYSDK_OFFSET(0xF37ACE0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_16_OFFSET UNITYSDK_OFFSET(0xF374BD0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_17_OFFSET UNITYSDK_OFFSET(0xF375FE0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_18_OFFSET UNITYSDK_OFFSET(0xF378660)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_19_OFFSET UNITYSDK_OFFSET(0xF376980)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_1_OFFSET UNITYSDK_OFFSET(0xF3686B0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_20_OFFSET UNITYSDK_OFFSET(0xF379000)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_21_OFFSET UNITYSDK_OFFSET(0xF37A340)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_2_OFFSET UNITYSDK_OFFSET(0xF36B080)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_3_OFFSET UNITYSDK_OFFSET(0xF36C490)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_4_OFFSET UNITYSDK_OFFSET(0xF36D280)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_5_OFFSET UNITYSDK_OFFSET(0xF36DC30)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_6_OFFSET UNITYSDK_OFFSET(0xF36EB20)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_7_OFFSET UNITYSDK_OFFSET(0xF370350)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_8_OFFSET UNITYSDK_OFFSET(0xF370FE0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_9_OFFSET UNITYSDK_OFFSET(0xF3723B0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_OFFSET UNITYSDK_OFFSET(0xF366B70)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF365DF0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_58E147DC610BB6B7_OFFSET UNITYSDK_OFFSET(0xF36BAC0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_5912D221AB8A4DE7_OFFSET UNITYSDK_OFFSET(0xF37E8B0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_59DE1507BA485F46_OFFSET UNITYSDK_OFFSET(0xF367B30)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_6A6C8C6B2239A604_OFFSET UNITYSDK_OFFSET(0xF36A360)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xF37C750)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xF367510)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_83E1EAF9F7D26EA8_OFFSET UNITYSDK_OFFSET(0xF37CD20)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_86EEF580F7E039B3_OFFSET UNITYSDK_OFFSET(0xF366820)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xF368370)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_8D626121790AEAD7_OFFSET UNITYSDK_OFFSET(0xF36BD10)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_8DFCD553B678FC73_OFFSET UNITYSDK_OFFSET(0xF36D1E0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0xF36BED0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xF37E020)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_97B0367EA2ED2ED7_OFFSET UNITYSDK_OFFSET(0xF367D70)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_A0EFDC02874C650B_OFFSET UNITYSDK_OFFSET(0xF37BB60)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_A128D0556C6CF784_OFFSET UNITYSDK_OFFSET(0xF369050)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_A4BEABC751DB0FF6_OFFSET UNITYSDK_OFFSET(0xF37E500)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_A576F328C56C105D_OFFSET UNITYSDK_OFFSET(0xF37B680)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_B060C644BFD512E7_OFFSET UNITYSDK_OFFSET(0xF37E570)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0xF3682A0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_B8672E4A0976DF65_OFFSET UNITYSDK_OFFSET(0xF37DEC0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_BF3A80B1A9A815E3_OFFSET UNITYSDK_OFFSET(0xF37D300)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_C0BEC2AC889B653C_OFFSET UNITYSDK_OFFSET(0xF372D50)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xF36DC20)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_C905625E207F23E1_OFFSET UNITYSDK_OFFSET(0xF369FA0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF37E510)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xF365140)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_D4767F35E35FBB79_OFFSET UNITYSDK_OFFSET(0xF37C6A0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_D4935E81B6693BA7_1_OFFSET UNITYSDK_OFFSET(0xF371980)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_D4935E81B6693BA7_2_OFFSET UNITYSDK_OFFSET(0xF375570)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_D4935E81B6693BA7_OFFSET UNITYSDK_OFFSET(0xF365E50)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xF37C4A0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_DEF7ECF4948CD47B_OFFSET UNITYSDK_OFFSET(0xF36CE30)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_E26C99C52BC1E654_1_OFFSET UNITYSDK_OFFSET(0xF36C0D0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xF367770)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0xF37D860)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_E703029C2C81747C_OFFSET UNITYSDK_OFFSET(0xF37DB60)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xF364DE0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xF37E8A0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xF37F320)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF37E6D0)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0xF37C510)
#define CLASS_3_8C7146E26E2D1C06_METHOD_3_F87D73EA06BA6997_OFFSET UNITYSDK_OFFSET(0xF37E6F0)
#define CLASS_3_8C7146E26E2D1C06_ONCREATE_OFFSET UNITYSDK_OFFSET(0xF364C70)
#define CLASS_3_8C7146E26E2D1C06_ONSTART_OFFSET UNITYSDK_OFFSET(0xF364FC0)
#define CLASS_3_8C7146E26E2D1C06__CCTOR_OFFSET UNITYSDK_OFFSET(0xF365B50)
#define CLASS_3_8C7146E26E2D1C06__CTOR_OFFSET UNITYSDK_OFFSET(0xF364920)

inline static constexpr unsigned int Class_3_8C7146E26E2D1C06_TypeDefinitionIndex = 70204;

class Class_3_8C7146E26E2D1C06 : public ::Foundation::GameManager_1<::Class_3_8C7146E26E2D1C06*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::System::String*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C7146E26E2D1C06_TypeDefinitionIndex)->GetStaticField(0x352D0);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C7146E26E2D1C06_TypeDefinitionIndex)->GetStaticField(0xD270);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C7146E26E2D1C06_TypeDefinitionIndex)->GetStaticField(0xD271);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_6; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F2DDD4E340F5351D*>* Field_3_11; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_3_15; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_4805505D38D7910B*>* Field_3_12; // 0x30
	::System::Action_1<::System::Boolean>* Field_3_13; // 0x38
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_3; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_10; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* Field_3_4; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*>* Field_3_5; // 0x58
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_16; // 0x60
	::System::Boolean Field_3_14; // 0x68
	::System::Boolean Field_3_8; // 0x69
	::System::Boolean Field_3_17; // 0x6A
	::System::Int32 Field_3_9; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	::System::Boolean Method_3_D4935E81B6693BA7(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_D4935E81B6693BA7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_5767E34877A2199E(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}

	::UnityEngine::Rendering::Universal::ForwardRenderer* Method_3_59DE1507BA485F46()
	{
		return ((::UnityEngine::Rendering::Universal::ForwardRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_59DE1507BA485F46_OFFSET))(this);
	}

	static ::System::Void Method_3_97B0367EA2ED2ED7(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_97B0367EA2ED2ED7_OFFSET))(a1);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Boolean Method_3_5767E34877A2199E_1(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_A128D0556C6CF784(::MoleMole::Config::ScreenEffectType a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_A128D0556C6CF784_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1592A471DBA38FF5(::System::Type* a1, ::UnityEngine::Rendering::Volume* a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Rendering::Volume*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_1592A471DBA38FF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C905625E207F23E1(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ShaderCustomType, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_C905625E207F23E1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6A6C8C6B2239A604(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_6A6C8C6B2239A604_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_2(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_161470F52EE109C0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_161470F52EE109C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_30B84D11D6E8A895(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_30B84D11D6E8A895_OFFSET))(this, a1);
	}

	::System::Void Method_3_58E147DC610BB6B7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_58E147DC610BB6B7_OFFSET))(this, a1);
	}

	::System::Void Method_3_3617F51E36984770()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_3617F51E36984770_OFFSET))(this);
	}

	::System::Void Method_3_8D626121790AEAD7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_8D626121790AEAD7_OFFSET))(this, a1);
	}

	::System::Void Method_3_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Boolean Method_3_5767E34877A2199E_3(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_DEF7ECF4948CD47B(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_DEF7ECF4948CD47B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_289E522D6A576DC5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_289E522D6A576DC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8DFCD553B678FC73(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_8DFCD553B678FC73_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_4(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_5(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_46C6AD3AA3219549(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_46C6AD3AA3219549_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_B078C58C2CD24B5E_OFFSET))();
	}

	::System::Boolean Method_3_5767E34877A2199E_6(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_25BDE921D645888D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_25BDE921D645888D_OFFSET))(this, a1);
	}

	::System::Void Method_3_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_E26C99C52BC1E654_OFFSET))(this);
	}

	static ::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_151E25A63D14DDB0_OFFSET))();
	}

	::System::Void Method_3_48C605977C5CD58D(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_48C605977C5CD58D_OFFSET))(this, a1);
	}

	::System::Void Method_3_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_3_15F0BA9E79A867BB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_15F0BA9E79A867BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_7(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_050AA223E05C2B0E(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ShaderCustomType, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_050AA223E05C2B0E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E26C99C52BC1E654_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_E26C99C52BC1E654_1_OFFSET))(this);
	}

	::System::Boolean Method_3_5767E34877A2199E_8(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_1(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_D4935E81B6693BA7_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_5767E34877A2199E_9(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_C0BEC2AC889B653C(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4, ::MoleMole::Battle::Entity* a5, ::System::Boolean a6, ::System::String* a7, ::MoleMole::Config::ConfigPosRot* a8, ::System::Boolean a9, ::UnityEngine::Rendering::Volume* a10, ::Foundation::Variable_1<::System::Single> a11, ::Enum_3_F5B8D6A28B626E8E a12, ::Class_1_8A50BFB20D9D2482_1* a13)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_C0BEC2AC889B653C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	::System::Boolean Method_3_5767E34877A2199E_10(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_10_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_2(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_D4935E81B6693BA7_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_A576F328C56C105D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_A576F328C56C105D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_11(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_11_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_5767E34877A2199E_12(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_12_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_3_F2EEC5E8503D3622(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_F2EEC5E8503D3622_OFFSET))(this, a1);
	}

	::UnityEngine::NAPRenderPipeline0::VolumeComponent* Method_3_D4767F35E35FBB79(::System::Int32 a1)
	{
		return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_D4767F35E35FBB79_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_13(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_13_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_3_83E1EAF9F7D26EA8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_83E1EAF9F7D26EA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_14(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_14_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_02B4A7AC57AB5850(::System::Type* a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_02B4A7AC57AB5850_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BF3A80B1A9A815E3(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4, ::MoleMole::Battle::Entity* a5, ::System::Boolean a6, ::System::String* a7, ::MoleMole::Config::ConfigPosRot* a8, ::System::Boolean a9, ::UnityEngine::Rendering::Volume* a10, ::System::Boolean a11, ::Foundation::Variable_1<::System::Single> a12, ::Enum_3_F5B8D6A28B626E8E a13, ::Class_1_8A50BFB20D9D2482_1* a14)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::System::Boolean, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_BF3A80B1A9A815E3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Void Method_3_E530905EC9C5B4AD(::Class_1_F2DDD4E340F5351D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F2DDD4E340F5351D*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_E530905EC9C5B4AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E703029C2C81747C(::System::Type* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_E703029C2C81747C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_3_3617F51E36984770_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_3617F51E36984770_1_OFFSET))(this);
	}

	::System::Boolean Method_3_5767E34877A2199E_15(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_15_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_B8672E4A0976DF65(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_B8672E4A0976DF65_OFFSET))(this, a1);
	}

	::System::Void Method_3_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_3_5594F6075170B32E(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5594F6075170B32E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5767E34877A2199E_16(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_16_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_5767E34877A2199E_17(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_17_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>* Method_3_A4BEABC751DB0FF6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_A4BEABC751DB0FF6_OFFSET))(this);
	}

	::System::Boolean Method_3_5767E34877A2199E_18(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_18_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B060C644BFD512E7(::MoleMole::Config::ScreenEffectType a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_B060C644BFD512E7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_A0EFDC02874C650B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_A0EFDC02874C650B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_F2DDD4E340F5351D*>* Method_3_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F2DDD4E340F5351D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_3_F87D73EA06BA6997(::UnityEngine::Rendering::Volume* a1, ::MoleMole::Config::ScreenEffectType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_F87D73EA06BA6997_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_314CB383333C08EE(::MoleMole::Config::ScreenEffectType a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_314CB383333C08EE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* Method_3_091DF3033F55990A(::System::Int32 a1)
	{
		return ((::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_091DF3033F55990A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_5912D221AB8A4DE7(::MoleMole::Config::ScreenEffectType a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5912D221AB8A4DE7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_5767E34877A2199E_19(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_19_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Boolean Method_3_86EEF580F7E039B3(::System::Type* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_86EEF580F7E039B3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_5767E34877A2199E_20(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_20_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_5767E34877A2199E_21(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482_1* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_5767E34877A2199E_21_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C7146E26E2D1C06_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}
};
