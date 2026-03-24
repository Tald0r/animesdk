#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FURHELPER_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1890EC20)

inline static constexpr unsigned int FurHelper_ShaderIDs_TypeDefinitionIndex = 29018;

class FurHelper_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_SHAb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6660);
	}
	static ::System::Int32* StaticGet_SHBb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6664);
	}
	static ::System::Int32* StaticGet_SHBr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6668);
	}
	static ::System::Int32* StaticGet_SHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x666C);
	}
	static ::System::Int32* StaticGet_SHAr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6670);
	}
	static ::System::Int32* StaticGet_FurStep()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6674);
	}
	static ::System::Int32* StaticGet_FurLayerCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6678);
	}
	static ::System::Int32* StaticGet_RenderingLayer()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x667C);
	}
	static ::System::Int32* StaticGet_SHAg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6680);
	}
	static ::System::Int32* StaticGet_LIGHTMAP_ON()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6684);
	}
	static ::System::Int32* StaticGet_NO_ADDITIONAL_LIGHTS()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6688);
	}
	static ::System::Int32* StaticGet_SHBg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x668C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FURHELPER_SHADERIDS__CCTOR_OFFSET))();
	}
};
