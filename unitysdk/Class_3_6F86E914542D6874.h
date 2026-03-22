#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0913CDAD1E2CC7E0.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_3_6F86E914542D6874_METHOD_3_0424E32F4BC49824_OFFSET UNITYSDK_OFFSET(0x9F67C90)
#define CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_1_OFFSET UNITYSDK_OFFSET(0x8316420)
#define CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_OFFSET UNITYSDK_OFFSET(0x8316400)
#define CLASS_3_6F86E914542D6874_METHOD_3_2DA39DA2D33421B6_OFFSET UNITYSDK_OFFSET(0x8315A90)
#define CLASS_3_6F86E914542D6874_METHOD_3_4F63E3D866C5D538_OFFSET UNITYSDK_OFFSET(0x9F64040)
#define CLASS_3_6F86E914542D6874_METHOD_3_5444750A6160D013_OFFSET UNITYSDK_OFFSET(0x9F62B60)
#define CLASS_3_6F86E914542D6874_METHOD_3_9DD306056C0FE8C6_OFFSET UNITYSDK_OFFSET(0x8313DB0)
#define CLASS_3_6F86E914542D6874_METHOD_3_A5499049D750A403_OFFSET UNITYSDK_OFFSET(0x9F604A0)
#define CLASS_3_6F86E914542D6874_METHOD_3_C97B6CD6CD92EE28_OFFSET UNITYSDK_OFFSET(0x9F65AE0)
#define CLASS_3_6F86E914542D6874_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x8316450)
#define CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_1_OFFSET UNITYSDK_OFFSET(0x8316410)
#define CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_2_OFFSET UNITYSDK_OFFSET(0x8316430)
#define CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_OFFSET UNITYSDK_OFFSET(0x83163F0)
#define CLASS_3_6F86E914542D6874_METHOD_3_E0AC040DE2AA8272_OFFSET UNITYSDK_OFFSET(0x8316440)
#define CLASS_3_6F86E914542D6874_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8314DA0)
#define CLASS_3_6F86E914542D6874__CTOR_OFFSET UNITYSDK_OFFSET(0x9F60230)

inline static constexpr unsigned int Class_3_6F86E914542D6874_TypeDefinitionIndex = 43179;

class Class_3_6F86E914542D6874 : public ::Class_2_0913CDAD1E2CC7E0<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DofDebugMode>* Field_3_2; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0xF0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_18; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode>* Field_3_0; // 0x100
	::System::Int32 Field_3_19; // 0x108
	::System::Single Field_3_13; // 0x10C
	::System::Boolean Field_3_11; // 0x110
	::System::Single Field_3_9; // 0x114
	::System::Single Field_3_7; // 0x118
	::System::Single Field_3_23; // 0x11C
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_3_1; // 0x120
	::UnityEngine::Rendering::Universal::DofDebugMode Field_3_3; // 0x124
	::System::Single Field_3_17; // 0x128
	::System::Single Field_3_21; // 0x12C
	::System::Single Field_3_15; // 0x130
	::System::Single Field_3_5; // 0x134

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_3_9DD306056C0FE8C6(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_9DD306056C0FE8C6_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2DA39DA2D33421B6(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_2DA39DA2D33421B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_26C448A2DB8D647D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F_1(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_26C448A2DB8D647D_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_26C448A2DB8D647D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6D8F6A14B0AA23F_2(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_D6D8F6A14B0AA23F_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E0AC040DE2AA8272(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_E0AC040DE2AA8272_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F86E914542D6874_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}
};
