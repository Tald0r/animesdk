#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLensDistortion; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define CLASS_3_7961FA4CE4156770_METHOD_3_0D9CFAFCB302C06E_OFFSET UNITYSDK_OFFSET(0xB4A1E50)
#define CLASS_3_7961FA4CE4156770_METHOD_3_3D68727CFA61ECD1_OFFSET UNITYSDK_OFFSET(0xB4A2EF0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_650A205AEACE06D8_OFFSET UNITYSDK_OFFSET(0xB4A0940)
#define CLASS_3_7961FA4CE4156770_METHOD_3_7A8730C99A2DAC3C_OFFSET UNITYSDK_OFFSET(0xB49D5E0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_82399EA7D10EF014_OFFSET UNITYSDK_OFFSET(0xB49FA00)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8947E5D24232D21B_OFFSET UNITYSDK_OFFSET(0xB49EE70)
#define CLASS_3_7961FA4CE4156770_METHOD_3_89B9937E8BBEFFBD_OFFSET UNITYSDK_OFFSET(0xB4A4280)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_1_OFFSET UNITYSDK_OFFSET(0xB4A42A0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_OFFSET UNITYSDK_OFFSET(0xB4A4260)
#define CLASS_3_7961FA4CE4156770_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xB4A4220)
#define CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_1_OFFSET UNITYSDK_OFFSET(0xB4A4290)
#define CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_OFFSET UNITYSDK_OFFSET(0xB4A4270)
#define CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB4A3980)
#define CLASS_3_7961FA4CE4156770__CTOR_OFFSET UNITYSDK_OFFSET(0xB49D460)

inline static constexpr unsigned int Class_3_7961FA4CE4156770_TypeDefinitionIndex = 54427;

class Class_3_7961FA4CE4156770 : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::LensDistortion*, ::MoleMole::Config::ConfigLensDistortion*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_10; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xD0
	::UnityEngine::Vector2 Field_3_11; // 0xD8
	::System::Single Field_3_9; // 0xE0
	::System::Single Field_3_7; // 0xE4
	::System::Single Field_3_3; // 0xE8
	::System::Single Field_3_5; // 0xEC
	::System::Single Field_3_1; // 0xF0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigLensDistortion* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigLensDistortion*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_7A8730C99A2DAC3C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_7A8730C99A2DAC3C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8947E5D24232D21B(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8947E5D24232D21B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_82399EA7D10EF014(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_82399EA7D10EF014_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_650A205AEACE06D8(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_650A205AEACE06D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0D9CFAFCB302C06E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_0D9CFAFCB302C06E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3D68727CFA61ECD1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_3D68727CFA61ECD1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_8A3A3ADEE0170A46(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DAB75ABEB7C3D2A4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_89B9937E8BBEFFBD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_89B9937E8BBEFFBD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DAB75ABEB7C3D2A4_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8A3A3ADEE0170A46_1(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_1_OFFSET))(this, a1, a2);
	}
};
