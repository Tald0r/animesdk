#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0913CDAD1E2CC7E0.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLensDistortion; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define CLASS_3_7961FA4CE4156770_METHOD_3_05E279703C03B9FE_OFFSET UNITYSDK_OFFSET(0xAB144D0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_4751A0B75625CB32_OFFSET UNITYSDK_OFFSET(0xAB11F60)
#define CLASS_3_7961FA4CE4156770_METHOD_3_6F4065F24BCF8371_OFFSET UNITYSDK_OFFSET(0xAB13450)
#define CLASS_3_7961FA4CE4156770_METHOD_3_7A8730C99A2DAC3C_OFFSET UNITYSDK_OFFSET(0xAB0EC10)
#define CLASS_3_7961FA4CE4156770_METHOD_3_82399EA7D10EF014_OFFSET UNITYSDK_OFFSET(0xAB11020)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8947E5D24232D21B_OFFSET UNITYSDK_OFFSET(0xAB10490)
#define CLASS_3_7961FA4CE4156770_METHOD_3_89B9937E8BBEFFBD_OFFSET UNITYSDK_OFFSET(0xAB15820)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_1_OFFSET UNITYSDK_OFFSET(0xAB15860)
#define CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_OFFSET UNITYSDK_OFFSET(0xAB15850)
#define CLASS_3_7961FA4CE4156770_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xAB157E0)
#define CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_1_OFFSET UNITYSDK_OFFSET(0xAB15840)
#define CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_OFFSET UNITYSDK_OFFSET(0xAB15830)
#define CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAB14F40)
#define CLASS_3_7961FA4CE4156770__CTOR_OFFSET UNITYSDK_OFFSET(0xAB0EA90)

inline static constexpr unsigned int Class_3_7961FA4CE4156770_TypeDefinitionIndex = 50252;

class Class_3_7961FA4CE4156770 : public ::Class_2_0913CDAD1E2CC7E0<::UnityEngine::Rendering::Universal::LensDistortion*, ::MoleMole::Config::ConfigLensDistortion*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xD0
	::System::Single Field_3_9; // 0xD8
	::System::Single Field_3_3; // 0xDC
	::System::Single Field_3_1; // 0xE0
	::System::Single Field_3_5; // 0xE4
	::UnityEngine::Vector2 Field_3_11; // 0xE8
	::System::Single Field_3_7; // 0xF0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigLensDistortion* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigLensDistortion*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_3_4751A0B75625CB32(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_4751A0B75625CB32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6F4065F24BCF8371(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_6F4065F24BCF8371_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_05E279703C03B9FE(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_05E279703C03B9FE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_89B9937E8BBEFFBD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_89B9937E8BBEFFBD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DAB75ABEB7C3D2A4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DAB75ABEB7C3D2A4_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDistortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_DAB75ABEB7C3D2A4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8A3A3ADEE0170A46(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8A3A3ADEE0170A46_1(::UnityEngine::Rendering::Universal::LensDistortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDistortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7961FA4CE4156770_METHOD_3_8A3A3ADEE0170A46_1_OFFSET))(this, a1, a2);
	}
};
