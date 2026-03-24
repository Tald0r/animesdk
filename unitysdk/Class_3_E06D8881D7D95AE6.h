#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFilmGrain; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define CLASS_3_E06D8881D7D95AE6_METHOD_3_013D7FE6D4B7FCB3_OFFSET UNITYSDK_OFFSET(0x61EA230)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_1CEA419600ACB59E_OFFSET UNITYSDK_OFFSET(0x61EC470)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_488170956B69CC51_OFFSET UNITYSDK_OFFSET(0x61EADD0)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_6408DFAA26F274F8_1_OFFSET UNITYSDK_OFFSET(0x61ED840)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_6408DFAA26F274F8_OFFSET UNITYSDK_OFFSET(0x61ED830)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_741FF3C672AFB332_OFFSET UNITYSDK_OFFSET(0x61ECC70)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_8D22218D774C7A05_OFFSET UNITYSDK_OFFSET(0x61ED850)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_9570F4E4EDB97B64_1_OFFSET UNITYSDK_OFFSET(0x61ED8B0)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_9570F4E4EDB97B64_OFFSET UNITYSDK_OFFSET(0x61ED860)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x61ED870)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_DB2EAF6C1F5BF69A_OFFSET UNITYSDK_OFFSET(0x61EB340)
#define CLASS_3_E06D8881D7D95AE6_METHOD_3_F0100A8B91DFE2FB_OFFSET UNITYSDK_OFFSET(0x61EB9A0)
#define CLASS_3_E06D8881D7D95AE6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x61ED1D0)
#define CLASS_3_E06D8881D7D95AE6__CTOR_OFFSET UNITYSDK_OFFSET(0x61EA120)

inline static constexpr unsigned int Class_3_E06D8881D7D95AE6_TypeDefinitionIndex = 73797;

class Class_3_E06D8881D7D95AE6 : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::FilmGrain*, ::MoleMole::Config::ConfigEntityFilmGrain*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::FilmGrainLookup>* Field_3_0; // 0xB8
	::UnityEngine::Rendering::Universal::FilmGrainLookup Field_3_1; // 0xC0
	::System::Single Field_3_3; // 0xC4
	::System::Single Field_3_5; // 0xC8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityFilmGrain* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_013D7FE6D4B7FCB3(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_013D7FE6D4B7FCB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_488170956B69CC51(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_488170956B69CC51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DB2EAF6C1F5BF69A(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_DB2EAF6C1F5BF69A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F0100A8B91DFE2FB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_F0100A8B91DFE2FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1CEA419600ACB59E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_1CEA419600ACB59E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_741FF3C672AFB332(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_741FF3C672AFB332_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_6408DFAA26F274F8(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_6408DFAA26F274F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6408DFAA26F274F8_1(::UnityEngine::Rendering::Universal::FilmGrain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_6408DFAA26F274F8_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8D22218D774C7A05(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_8D22218D774C7A05_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_9570F4E4EDB97B64(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_9570F4E4EDB97B64_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_9570F4E4EDB97B64_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FilmGrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FilmGrain*))((::PBYTE)hIl2Cpp + CLASS_3_E06D8881D7D95AE6_METHOD_3_9570F4E4EDB97B64_1_OFFSET))(this, a1, a2);
	}
};
