#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCEANSDFGENERATOR_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D0E1E0)

inline static constexpr unsigned int OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex = 29078;

class OceanSdfGenerator_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__SdfTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7470);
	}
	static ::System::Int32* StaticGet__SeaLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7474);
	}
	static ::System::Int32* StaticGet__CoastlineTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7478);
	}
	static ::System::Int32* StaticGet__Resolution()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x747C);
	}
	static ::System::Int32* StaticGet__CaptureTexRead()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7480);
	}
	static ::System::Int32* StaticGet__StepSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7484);
	}
	static ::System::Int32* StaticGet__FloodTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7488);
	}
	static ::System::Int32* StaticGet__FloodTexRead()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x748C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANSDFGENERATOR_SHADERIDS__CCTOR_OFFSET))();
	}
};
