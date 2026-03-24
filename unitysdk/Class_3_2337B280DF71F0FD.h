#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityLensDirtEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define CLASS_3_2337B280DF71F0FD_METHOD_3_2257CC6ECD1476ED_1_OFFSET UNITYSDK_OFFSET(0x7251C30)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_2257CC6ECD1476ED_OFFSET UNITYSDK_OFFSET(0x7251C10)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_47E2F6F7684D32D0_OFFSET UNITYSDK_OFFSET(0x7250100)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_49022E10AFF03FCD_OFFSET UNITYSDK_OFFSET(0x7250940)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_760B1AF131D91595_1_OFFSET UNITYSDK_OFFSET(0x7251C80)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_760B1AF131D91595_OFFSET UNITYSDK_OFFSET(0x7251C20)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_7F7A82C451CAE959_OFFSET UNITYSDK_OFFSET(0x724E8B0)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_A67577311A46C2BA_OFFSET UNITYSDK_OFFSET(0x7251C90)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_ADBACBDE3F816584_OFFSET UNITYSDK_OFFSET(0x7251190)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x7251C40)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_D5EFB2AA97C57CA3_OFFSET UNITYSDK_OFFSET(0x724F210)
#define CLASS_3_2337B280DF71F0FD_METHOD_3_F57BFFD6614F5FF1_OFFSET UNITYSDK_OFFSET(0x724F800)
#define CLASS_3_2337B280DF71F0FD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x72515B0)
#define CLASS_3_2337B280DF71F0FD__CTOR_OFFSET UNITYSDK_OFFSET(0x724E7A0)

inline static constexpr unsigned int Class_3_2337B280DF71F0FD_TypeDefinitionIndex = 41490;

class Class_3_2337B280DF71F0FD : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::LensDirt*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_2; // 0xB8
	::UnityEngine::Texture* Field_3_1; // 0xC0
	::System::Single Field_3_5; // 0xC8
	::System::Boolean Field_3_3; // 0xCC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityLensDirtEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_7F7A82C451CAE959(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_7F7A82C451CAE959_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D5EFB2AA97C57CA3(::UnityEngine::Rendering::Universal::LensDirt* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_D5EFB2AA97C57CA3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F57BFFD6614F5FF1(::UnityEngine::Rendering::Universal::LensDirt* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_F57BFFD6614F5FF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_47E2F6F7684D32D0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_47E2F6F7684D32D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_49022E10AFF03FCD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_49022E10AFF03FCD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_ADBACBDE3F816584(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_ADBACBDE3F816584_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_2257CC6ECD1476ED(::UnityEngine::Rendering::Universal::LensDirt* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_2257CC6ECD1476ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_760B1AF131D91595(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_760B1AF131D91595_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2257CC6ECD1476ED_1(::UnityEngine::Rendering::Universal::LensDirt* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_2257CC6ECD1476ED_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_760B1AF131D91595_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_760B1AF131D91595_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A67577311A46C2BA(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LensDirt* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LensDirt*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2337B280DF71F0FD_METHOD_3_A67577311A46C2BA_OFFSET))(this, a1, a2, a3);
	}
};
