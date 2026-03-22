#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_SHADERCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E3B460)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex = 5827;

	class NapSecondaryBloomPass_ShaderConstants : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_NapBloomTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2750);
		}
		static ::System::Int32* StaticGet__NapBloomPacked1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2754);
		}
		static ::System::Int32* StaticGet_SecondaryBloomTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2758);
		}
		static ::System::Int32* StaticGet_NapBloomSecondaryThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x275C);
		}
		static ::System::Int32* StaticGet_NapBloomSecondaryContrast()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2760);
		}
		static ::System::Int32* StaticGet_NapGaussScaler()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2764);
		}
		static ::System::Int32* StaticGet_SecondaryBlurTemp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapSecondaryBloomPass_ShaderConstants_TypeDefinitionIndex)->GetStaticField(0x2768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_SHADERCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
