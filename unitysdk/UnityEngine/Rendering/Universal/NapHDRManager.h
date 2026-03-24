#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1742AC40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapHDRManager_TypeDefinitionIndex = 29476;

	class NapHDRManager : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_HueShiftLerpRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CA0);
		}
		static ::System::Single* StaticGet_HueShiftLerpThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CA4);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CA8);
		}
		static ::System::Single* StaticGet_HDRSplitRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CAC);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CB0);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CB4);
		}
		static ::System::Boolean* StaticGet_HDRPipelineOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CB8);
		}
		static ::System::Boolean* StaticGet_HDRSplitLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CB9);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6CBC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET))();
		}
	};
}
