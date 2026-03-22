#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCEANSDFGENERATOR_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x187AF320)

inline static constexpr unsigned int OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex = 28138;

class OceanSdfGenerator_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__Resolution()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D20);
	}
	static ::System::Int32* StaticGet__SdfTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D24);
	}
	static ::System::Int32* StaticGet__CoastlineTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D28);
	}
	static ::System::Int32* StaticGet__CaptureTexRead()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D2C);
	}
	static ::System::Int32* StaticGet__FloodTexRead()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D30);
	}
	static ::System::Int32* StaticGet__StepSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D34);
	}
	static ::System::Int32* StaticGet__FloodTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D38);
	}
	static ::System::Int32* StaticGet__SeaLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D3C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANSDFGENERATOR_SHADERIDS__CCTOR_OFFSET))();
	}
};
