#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_3_6F86E914542D6874_METHOD_3_0424E32F4BC49824_OFFSET UNITYSDK_OFFSET(0xC575AA0)
#define CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_1_OFFSET UNITYSDK_OFFSET(0xC579A90)
#define CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_OFFSET UNITYSDK_OFFSET(0xC579A10)
#define CLASS_3_6F86E914542D6874_METHOD_3_2DA39DA2D33421B6_OFFSET UNITYSDK_OFFSET(0xC5790A0)
#define CLASS_3_6F86E914542D6874_METHOD_3_4F63E3D866C5D538_OFFSET UNITYSDK_OFFSET(0xC571E20)
#define CLASS_3_6F86E914542D6874_METHOD_3_5444750A6160D013_OFFSET UNITYSDK_OFFSET(0xC570940)
#define CLASS_3_6F86E914542D6874_METHOD_3_A5499049D750A403_OFFSET UNITYSDK_OFFSET(0xC56E1B0)
#define CLASS_3_6F86E914542D6874_METHOD_3_C97B6CD6CD92EE28_OFFSET UNITYSDK_OFFSET(0xC5738C0)
#define CLASS_3_6F86E914542D6874_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xC579A40)
#define CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_1_OFFSET UNITYSDK_OFFSET(0xC579A30)
#define CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_2_OFFSET UNITYSDK_OFFSET(0xC579A80)
#define CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_OFFSET UNITYSDK_OFFSET(0xC579A20)
#define CLASS_3_6F86E914542D6874_METHOD_3_E0AC040DE2AA8272_OFFSET UNITYSDK_OFFSET(0xC579A00)
#define CLASS_3_6F86E914542D6874_METHOD_3_E35CCBB870BDF57C_OFFSET UNITYSDK_OFFSET(0xC577390)
#define CLASS_3_6F86E914542D6874_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC5783B0)
#define CLASS_3_6F86E914542D6874__CTOR_OFFSET UNITYSDK_OFFSET(0xC56DF40)

inline static constexpr unsigned int Class_3_6F86E914542D6874_TypeDefinitionIndex = 68268;

class Class_3_6F86E914542D6874 : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xA8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_18; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode>* Field_3_0; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DofDebugMode>* Field_3_2; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0x100
	::System::Single Field_3_17; // 0x108
	::System::Single Field_3_7; // 0x10C
	::UnityEngine::Rendering::Universal::DofDebugMode Field_3_3; // 0x110
	::System::Int32 Field_3_19; // 0x114
	::System::Single Field_3_5; // 0x118
	::System::Single Field_3_15; // 0x11C
	::System::Boolean Field_3_11; // 0x120
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_3_1; // 0x124
	::System::Single Field_3_13; // 0x128
	::System::Single Field_3_23; // 0x12C
	::System::Single Field_3_21; // 0x130
	::System::Single Field_3_9; // 0x134

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A5499049D750A403(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_A5499049D750A403_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5444750A6160D013(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_5444750A6160D013_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4F63E3D866C5D538(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_4F63E3D866C5D538_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C97B6CD6CD92EE28(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_C97B6CD6CD92EE28_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0424E32F4BC49824(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_0424E32F4BC49824_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E35CCBB870BDF57C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_E35CCBB870BDF57C_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2DA39DA2D33421B6(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_2DA39DA2D33421B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E0AC040DE2AA8272(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_E0AC040DE2AA8272_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_26C448A2DB8D647D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F_1(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F_2(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_26C448A2DB8D647D_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_1_OFFSET))(this, a1, a2);
	}
};
