#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ReferenceVolumeParameter_1.h"

namespace UnityEngine { class Gradient; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19329AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x19329A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19329AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193298E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x19329840)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_GradientParameter_TypeDefinitionIndex = 28406;

	class FXColorCorrection_GradientParameter : public ::UnityEngine::NAPRenderPipeline0::ReferenceVolumeParameter_1<::UnityEngine::Gradient*>
	{
	public:
		::System::Boolean hdr; // 0x20
		::System::Boolean showAlpha; // 0x21
		::System::Boolean showEyeDropper; // 0x22

		::System::Void _ctor(::UnityEngine::Gradient* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void _ctor_1(::UnityEngine::Gradient* value, ::System::Boolean hdr, ::System::Boolean showAlpha, ::System::Boolean showEyeDropper, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER__CTOR_1_OFFSET))(this, value, hdr, showAlpha, showEyeDropper, overrideState);
		}

		::System::Void Interp(::UnityEngine::Gradient* from, ::UnityEngine::Gradient* to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::UnityEngine::Gradient* get_value()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FXCOLORCORRECTION_GRADIENTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
