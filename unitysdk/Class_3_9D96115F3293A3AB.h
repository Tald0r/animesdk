#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define CLASS_3_9D96115F3293A3AB_METHOD_3_2BEED956F7418400_1_OFFSET UNITYSDK_OFFSET(0xAF4FE90)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_2BEED956F7418400_OFFSET UNITYSDK_OFFSET(0xAF4FE60)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_342C7F0930CAC0EC_OFFSET UNITYSDK_OFFSET(0xAF4CE40)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_6117EF2B4109980D_OFFSET UNITYSDK_OFFSET(0xAF4F160)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_6BF2BB10E29796B5_OFFSET UNITYSDK_OFFSET(0xAF4FE70)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_A1A1723EC832AB5C_1_OFFSET UNITYSDK_OFFSET(0xAF4FEA0)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_A1A1723EC832AB5C_OFFSET UNITYSDK_OFFSET(0xAF4FE80)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_A265A2F16C1DBECE_OFFSET UNITYSDK_OFFSET(0xAF4E590)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_A3FE6FEBD7902988_OFFSET UNITYSDK_OFFSET(0xAF4C4F0)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_C30CA2EE753C0403_OFFSET UNITYSDK_OFFSET(0xAF4D9E0)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xAF4FEB0)
#define CLASS_3_9D96115F3293A3AB_METHOD_3_FC78DAF3A12535A4_OFFSET UNITYSDK_OFFSET(0xAF4B6E0)
#define CLASS_3_9D96115F3293A3AB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAF4F6A0)
#define CLASS_3_9D96115F3293A3AB__CTOR_OFFSET UNITYSDK_OFFSET(0xAF4B580)

inline static constexpr unsigned int Class_3_9D96115F3293A3AB_TypeDefinitionIndex = 59546;

class Class_3_9D96115F3293A3AB : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::GaussianBlur*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xA8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC0
	::UnityEngine::Texture* Field_3_5; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_4; // 0xD0
	::System::Single Field_3_3; // 0xD8
	::System::Single Field_3_7; // 0xDC
	::System::Single Field_3_9; // 0xE0
	::System::Int32 Field_3_1; // 0xE4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityGaussianBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_FC78DAF3A12535A4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_FC78DAF3A12535A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3FE6FEBD7902988(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_A3FE6FEBD7902988_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_342C7F0930CAC0EC(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_342C7F0930CAC0EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C30CA2EE753C0403(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_C30CA2EE753C0403_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A265A2F16C1DBECE(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_A265A2F16C1DBECE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6117EF2B4109980D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_6117EF2B4109980D_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2BEED956F7418400(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_2BEED956F7418400_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6BF2BB10E29796B5(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_6BF2BB10E29796B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A1A1723EC832AB5C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_A1A1723EC832AB5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2BEED956F7418400_1(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_2BEED956F7418400_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A1A1723EC832AB5C_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_A1A1723EC832AB5C_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D96115F3293A3AB_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}
};
