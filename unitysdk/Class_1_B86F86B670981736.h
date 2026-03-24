#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"

namespace MoleMole { class PerformanceSettingProfile; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define CLASS_1_B86F86B670981736_METHOD_1_4785D87D8077F2CD_OFFSET UNITYSDK_OFFSET(0x67B3F20)
#define CLASS_1_B86F86B670981736_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x67AFFA0)
#define CLASS_1_B86F86B670981736_METHOD_1_4B3C42E9045189F4_OFFSET UNITYSDK_OFFSET(0x67B4140)
#define CLASS_1_B86F86B670981736_METHOD_1_5E605BB6E8FBB4E0_OFFSET UNITYSDK_OFFSET(0x67B4060)
#define CLASS_1_B86F86B670981736_METHOD_1_93DA6293BFCF7821_OFFSET UNITYSDK_OFFSET(0x67B3FE0)
#define CLASS_1_B86F86B670981736_METHOD_1_B2D21548D00F38E7_OFFSET UNITYSDK_OFFSET(0x67B0040)
#define CLASS_1_B86F86B670981736_METHOD_1_B7381BD00B112965_OFFSET UNITYSDK_OFFSET(0x67B00E0)
#define CLASS_1_B86F86B670981736_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x67B40E0)
#define CLASS_1_B86F86B670981736__CTOR_OFFSET UNITYSDK_OFFSET(0x67AFF90)

inline static constexpr unsigned int Class_1_B86F86B670981736_TypeDefinitionIndex = 76491;

class Class_1_B86F86B670981736 : public ::System::Object
{
public:
	::MoleMole::PerformanceSettingProfile* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::PerformanceSettingProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingProfile*))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution Method_1_B2D21548D00F38E7(::System::Int32 a1)
	{
		return ((::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_B2D21548D00F38E7_OFFSET))(a1);
	}

	::System::Void Method_1_B7381BD00B112965(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_B7381BD00B112965_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* Method_1_5E605BB6E8FBB4E0()
	{
		return ((::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_5E605BB6E8FBB4E0_OFFSET))();
	}

	static ::System::Int32 Method_1_4B3C42E9045189F4(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution a1)
	{
		return ((::System::Int32(*)(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_4B3C42E9045189F4_OFFSET))(a1);
	}

	static ::System::Void Method_1_93DA6293BFCF7821(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_93DA6293BFCF7821_OFFSET))(a1);
	}

	static ::System::Void Method_1_4785D87D8077F2CD(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B86F86B670981736_METHOD_1_4785D87D8077F2CD_OFFSET))(a1, a2);
	}
};
