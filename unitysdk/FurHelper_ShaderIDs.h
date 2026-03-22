#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FURHELPER_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x183B39A0)

inline static constexpr unsigned int FurHelper_ShaderIDs_TypeDefinitionIndex = 28078;

class FurHelper_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_SHAr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6210);
	}
	static ::System::Int32* StaticGet_SHAb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6214);
	}
	static ::System::Int32* StaticGet_NO_ADDITIONAL_LIGHTS()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6218);
	}
	static ::System::Int32* StaticGet_FurLayerCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x621C);
	}
	static ::System::Int32* StaticGet_SHBb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6220);
	}
	static ::System::Int32* StaticGet_FurStep()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6224);
	}
	static ::System::Int32* StaticGet_SHAg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6228);
	}
	static ::System::Int32* StaticGet_RenderingLayer()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x622C);
	}
	static ::System::Int32* StaticGet_LIGHTMAP_ON()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6230);
	}
	static ::System::Int32* StaticGet_SHBr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6234);
	}
	static ::System::Int32* StaticGet_SHBg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6238);
	}
	static ::System::Int32* StaticGet_SHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x623C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FURHELPER_SHADERIDS__CCTOR_OFFSET))();
	}
};
