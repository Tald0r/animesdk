#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_01A5DB6B787A4987_OFFSET UNITYSDK_OFFSET(0x7391CA0)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_16D5EB497A556EFC_OFFSET UNITYSDK_OFFSET(0x7394F20)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_24DDC46948FE2C5A_OFFSET UNITYSDK_OFFSET(0x7393410)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_2E195CBDCDC4BFA3_1_OFFSET UNITYSDK_OFFSET(0x7395F50)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_2E195CBDCDC4BFA3_OFFSET UNITYSDK_OFFSET(0x7395F20)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_3941FEF88AB03FBB_1_OFFSET UNITYSDK_OFFSET(0x7395F40)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_3941FEF88AB03FBB_OFFSET UNITYSDK_OFFSET(0x7395F10)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_A38C5DF5ED9A34A9_OFFSET UNITYSDK_OFFSET(0x73941D0)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_AA78833CFA73075D_OFFSET UNITYSDK_OFFSET(0x7390D10)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x7395F60)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_D00DAD64D7594F68_OFFSET UNITYSDK_OFFSET(0x7392760)
#define CLASS_3_3E13D2D9ED5986F5_METHOD_3_FC33D767AFDE0B94_OFFSET UNITYSDK_OFFSET(0x7395F30)
#define CLASS_3_3E13D2D9ED5986F5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7395740)
#define CLASS_3_3E13D2D9ED5986F5__CTOR_OFFSET UNITYSDK_OFFSET(0x7390BA0)

inline static constexpr unsigned int Class_3_3E13D2D9ED5986F5_TypeDefinitionIndex = 71844;

class Class_3_3E13D2D9ED5986F5 : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::Distortion*, ::MoleMole::Config::ConfigEntityDistortionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_0; // 0xC8
	::System::Boolean Field_3_9; // 0xD0
	::System::Int32 Field_3_1; // 0xD4
	::UnityEngine::Vector3 Field_3_5; // 0xD8
	::System::Single Field_3_3; // 0xE4
	::System::Single Field_3_7; // 0xE8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDistortionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_AA78833CFA73075D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_AA78833CFA73075D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_01A5DB6B787A4987(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_01A5DB6B787A4987_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D00DAD64D7594F68(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_D00DAD64D7594F68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_24DDC46948FE2C5A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_24DDC46948FE2C5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A38C5DF5ED9A34A9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_A38C5DF5ED9A34A9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_16D5EB497A556EFC(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_16D5EB497A556EFC_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_3941FEF88AB03FBB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_3941FEF88AB03FBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2E195CBDCDC4BFA3(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_2E195CBDCDC4BFA3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FC33D767AFDE0B94(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_FC33D767AFDE0B94_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3941FEF88AB03FBB_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Distortion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_3941FEF88AB03FBB_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2E195CBDCDC4BFA3_1(::UnityEngine::Rendering::Universal::Distortion* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Distortion*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_2E195CBDCDC4BFA3_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E13D2D9ED5986F5_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}
};
