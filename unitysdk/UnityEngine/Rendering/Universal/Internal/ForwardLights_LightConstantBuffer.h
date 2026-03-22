#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ForwardLights_LightConstantBuffer_TypeDefinitionIndex = 28956;

	class ForwardLights_LightConstantBuffer : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__AvatarMainLightPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}
		static ::System::Int32* StaticGet__MainLightShadowTintColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C54);
		}
		static ::System::Int32* StaticGet__MainLightSpecularPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C58);
		}
		static ::System::Int32* StaticGet__MainLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C5C);
		}
		static ::System::Int32* StaticGet__MainLightShadowTintParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C60);
		}
		static ::System::Int32* StaticGet__CascadeBlendIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C64);
		}
		static ::System::Int32* StaticGet__MainLightSpecularColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C68);
		}
		static ::System::Int32* StaticGet__AvatarMainLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C6C);
		}
		static ::System::Int32* StaticGet__MainLightPosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C70);
		}
		static ::System::Int32* StaticGet__MainLightShadowParamsNew()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_LightConstantBuffer_TypeDefinitionIndex)->GetStaticField(0x6C74);
		}
	};
}
