#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CLASS_3_937140C1761B338F_METHOD_3_32BB63B2E1BDF28C_1_OFFSET UNITYSDK_OFFSET(0x8330370)
#define CLASS_3_937140C1761B338F_METHOD_3_32BB63B2E1BDF28C_OFFSET UNITYSDK_OFFSET(0x8330300)
#define CLASS_3_937140C1761B338F_METHOD_3_49D527C7D8B6A540_OFFSET UNITYSDK_OFFSET(0x832F720)
#define CLASS_3_937140C1761B338F_METHOD_3_59399C961A184A70_OFFSET UNITYSDK_OFFSET(0x832E340)
#define CLASS_3_937140C1761B338F_METHOD_3_6EBA5840A23BAD94_OFFSET UNITYSDK_OFFSET(0x832C8B0)
#define CLASS_3_937140C1761B338F_METHOD_3_9445E12A57B7833D_OFFSET UNITYSDK_OFFSET(0x8330380)
#define CLASS_3_937140C1761B338F_METHOD_3_B1F7660C7875F0B4_OFFSET UNITYSDK_OFFSET(0x832DAC0)
#define CLASS_3_937140C1761B338F_METHOD_3_C26EE78234A2F166_OFFSET UNITYSDK_OFFSET(0x832D420)
#define CLASS_3_937140C1761B338F_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x8330310)
#define CLASS_3_937140C1761B338F_METHOD_3_DF68ADAB3E6F43C4_1_OFFSET UNITYSDK_OFFSET(0x8330360)
#define CLASS_3_937140C1761B338F_METHOD_3_DF68ADAB3E6F43C4_OFFSET UNITYSDK_OFFSET(0x8330350)
#define CLASS_3_937140C1761B338F_METHOD_3_F28875E84A4A32EE_OFFSET UNITYSDK_OFFSET(0x832ED30)
#define CLASS_3_937140C1761B338F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x832FCA0)
#define CLASS_3_937140C1761B338F__CTOR_OFFSET UNITYSDK_OFFSET(0x832C7A0)

inline static constexpr unsigned int Class_3_937140C1761B338F_TypeDefinitionIndex = 59224;

class Class_3_937140C1761B338F : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Config::ConfigChromaticAberration*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xB8
	::UnityEngine::Vector2 Field_3_3; // 0xC0
	::System::Single Field_3_5; // 0xC8
	::System::Single Field_3_1; // 0xCC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigChromaticAberration* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigChromaticAberration*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_6EBA5840A23BAD94(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_6EBA5840A23BAD94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C26EE78234A2F166(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_C26EE78234A2F166_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1F7660C7875F0B4(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_B1F7660C7875F0B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_59399C961A184A70(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_59399C961A184A70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F28875E84A4A32EE(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_F28875E84A4A32EE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_49D527C7D8B6A540(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_49D527C7D8B6A540_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_32BB63B2E1BDF28C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_32BB63B2E1BDF28C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_DF68ADAB3E6F43C4(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_DF68ADAB3E6F43C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DF68ADAB3E6F43C4_1(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_DF68ADAB3E6F43C4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_32BB63B2E1BDF28C_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_32BB63B2E1BDF28C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9445E12A57B7833D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_937140C1761B338F_METHOD_3_9445E12A57B7833D_OFFSET))(this, a1, a2, a3);
	}
};
