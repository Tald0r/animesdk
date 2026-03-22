#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0913CDAD1E2CC7E0.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityRadialBlur; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_3_89EF3FD94B06BF28_METHOD_3_0B5B96FA5D3DEF30_OFFSET UNITYSDK_OFFSET(0xC4E1E00)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_0BEB96CA7284FE53_OFFSET UNITYSDK_OFFSET(0xC4DEAD0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_2C93EC83CDB264F7_OFFSET UNITYSDK_OFFSET(0xC4E1450)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_37F7DF079CA9D344_OFFSET UNITYSDK_OFFSET(0xC4E1660)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_54E780A4736AB0D2_OFFSET UNITYSDK_OFFSET(0xC4DCAB0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_709C6ACE480ED0E5_OFFSET UNITYSDK_OFFSET(0xC4E12B0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_760882CE1ECDD26C_OFFSET UNITYSDK_OFFSET(0xC4E1DB0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_7676B72F96990934_OFFSET UNITYSDK_OFFSET(0xC4E11D0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_7B5CC1D2FFCE7B82_OFFSET UNITYSDK_OFFSET(0xC4D3850)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_A29F39D6EDFF36F8_OFFSET UNITYSDK_OFFSET(0xC4E20F0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_B9C14C0C67FF3D42_OFFSET UNITYSDK_OFFSET(0xC4DA510)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_1_OFFSET UNITYSDK_OFFSET(0xC4E22B0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_2_OFFSET UNITYSDK_OFFSET(0xC4E22C0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_3_OFFSET UNITYSDK_OFFSET(0xC4E22D0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_OFFSET UNITYSDK_OFFSET(0xC4E20D0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_C663AF9D558B5CFA_1_OFFSET UNITYSDK_OFFSET(0xC4E1D20)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_C663AF9D558B5CFA_OFFSET UNITYSDK_OFFSET(0xC4E15D0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xC4E1DC0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_DB964DC5493AE064_OFFSET UNITYSDK_OFFSET(0xC4D7FA0)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_DD35C78DFA4BACA4_OFFSET UNITYSDK_OFFSET(0xC4E2110)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_DD664E6A6EFF4CED_OFFSET UNITYSDK_OFFSET(0xC4D6460)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_F364CAA73A0B5973_1_OFFSET UNITYSDK_OFFSET(0xC4E2100)
#define CLASS_3_89EF3FD94B06BF28_METHOD_3_F364CAA73A0B5973_OFFSET UNITYSDK_OFFSET(0xC4E20E0)
#define CLASS_3_89EF3FD94B06BF28_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC4DFF10)
#define CLASS_3_89EF3FD94B06BF28__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC4E0E20)
#define CLASS_3_89EF3FD94B06BF28__CTOR_OFFSET UNITYSDK_OFFSET(0xC4D3560)

inline static constexpr unsigned int Class_3_89EF3FD94B06BF28_TypeDefinitionIndex = 65412;

class Class_3_89EF3FD94B06BF28 : public ::Class_2_0913CDAD1E2CC7E0<::UnityEngine::Rendering::Universal::RadialBlur*, ::MoleMole::Config::ConfigEntityRadialBlur*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::SampleDistanceMode>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DownSampleLevel>* Field_3_0; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_12; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_8; // 0xD8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_18; // 0xE0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_14; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_26; // 0xF0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0xF8
	::MoleMole::Config::ConfigPosRot* Field_3_33; // 0x100
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_4; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_24; // 0x110
	::System::String* Field_3_32; // 0x118
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0x120
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0x128
	::System::Int32 Field_3_5; // 0x130
	::System::Boolean Field_3_17; // 0x134
	::System::Boolean Field_3_29; // 0x135
	::System::Boolean Field_3_19; // 0x136
	::System::Boolean Field_3_31; // 0x137
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_3_3; // 0x138
	::UnityEngine::Vector2 Field_3_35; // 0x13C
	::System::Single Field_3_11; // 0x144
	::UnityEngine::Vector2 Field_3_15; // 0x148
	::System::Boolean Field_3_13; // 0x150
	::System::Boolean Field_3_36; // 0x151
	::System::Boolean Field_3_34; // 0x152
	::System::Single Field_3_25; // 0x154
	::UnityEngine::Vector2 Field_3_9; // 0x158
	::System::Single Field_3_21; // 0x160
	::System::UInt32 Field_3_30; // 0x164
	::System::Single Field_3_23; // 0x168
	::System::Single Field_3_7; // 0x16C
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_3_1; // 0x170
	::System::Single Field_3_27; // 0x174

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityRadialBlur* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::System::String* a1, ::MoleMole::Config::ConfigEntityRadialBlur* a2, ::MoleMole::Battle::Entity* a3, ::System::Boolean a4, ::System::String* a5, ::MoleMole::Config::ConfigPosRot* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_7B5CC1D2FFCE7B82(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_7B5CC1D2FFCE7B82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DD664E6A6EFF4CED(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_DD664E6A6EFF4CED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DB964DC5493AE064(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_DB964DC5493AE064_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B9C14C0C67FF3D42(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_B9C14C0C67FF3D42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_54E780A4736AB0D2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_54E780A4736AB0D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_0BEB96CA7284FE53(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_0BEB96CA7284FE53_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_TOSTRING_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_709C6ACE480ED0E5()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_709C6ACE480ED0E5_OFFSET))(this);
	}

	::System::Void Method_3_2C93EC83CDB264F7(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_2C93EC83CDB264F7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_C663AF9D558B5CFA(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_C663AF9D558B5CFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C663AF9D558B5CFA_1(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_C663AF9D558B5CFA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_760882CE1ECDD26C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_760882CE1ECDD26C_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_37F7DF079CA9D344(::UnityEngine::Rendering::Universal::RadialBlur* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_37F7DF079CA9D344_OFFSET))(this, a1);
	}

	::System::Void Method_3_C3A56AE4DAA29895(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F364CAA73A0B5973(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_F364CAA73A0B5973_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0B5B96FA5D3DEF30(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_0B5B96FA5D3DEF30_OFFSET))(this, a1);
	}

	::System::Void Method_3_A29F39D6EDFF36F8(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_A29F39D6EDFF36F8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_F364CAA73A0B5973_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_F364CAA73A0B5973_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DD35C78DFA4BACA4(::MoleMole::Config::ConfigEntityRadialBlur* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::System::String* a4, ::MoleMole::Config::ConfigPosRot* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRadialBlur*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_DD35C78DFA4BACA4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_C3A56AE4DAA29895_1(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C3A56AE4DAA29895_2(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C3A56AE4DAA29895_3(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_C3A56AE4DAA29895_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7676B72F96990934(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::String* a3, ::MoleMole::Config::ConfigPosRot* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_89EF3FD94B06BF28_METHOD_3_7676B72F96990934_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
