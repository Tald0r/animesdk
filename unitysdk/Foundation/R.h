#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_R_GETBYTE_OFFSET UNITYSDK_OFFSET(0x1A481B10)
#define FOUNDATION_R_GETJSON_OFFSET UNITYSDK_OFFSET(0x1A481A00)
#define FOUNDATION_R_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A4817E0)
#define FOUNDATION_R_GETPNGIMAGE_OFFSET UNITYSDK_OFFSET(0x1A4818F0)
#define FOUNDATION_R_GETPREFAB_OFFSET UNITYSDK_OFFSET(0x1A4814B0)
#define FOUNDATION_R_GETSCENE_OFFSET UNITYSDK_OFFSET(0x1A4816D0)
#define FOUNDATION_R_GETSCRIPTASSET_OFFSET UNITYSDK_OFFSET(0x1A4815C0)
#define FOUNDATION_R__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A481C30)
#define FOUNDATION_R__CTOR_OFFSET UNITYSDK_OFFSET(0x1A481C20)

namespace Foundation
{
	inline static constexpr unsigned int R_TypeDefinitionIndex = 7840;

	class R : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PREFAB_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A40);
		}
		static ::System::String** StaticGet_PREFAB_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A48);
		}
		static ::System::String** StaticGet_JSON_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A50);
		}
		static ::System::String** StaticGet_MAT_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A58);
		}
		static ::System::String** StaticGet_ASSET_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A60);
		}
		static ::System::String** StaticGet_SCENE_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A68);
		}
		static ::System::String** StaticGet_JSON_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A70);
		}
		static ::System::String** StaticGet_MAT_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A78);
		}
		static ::System::String** StaticGet_BYTE_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A80);
		}
		static ::System::String** StaticGet_PNG_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A88);
		}
		static ::System::String** StaticGet_PNG_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A90);
		}
		static ::System::String** StaticGet_BYTE_PREFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6A98);
		}
		static ::System::String** StaticGet_SCENE_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6AA0);
		}
		static ::System::String** StaticGet_ASSET_FORMAT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(R_TypeDefinitionIndex)->GetStaticField(0x6AA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_R__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_R__CCTOR_OFFSET))();
		}

		static ::System::String* GetPrefab(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETPREFAB_OFFSET))(name);
		}

		static ::System::String* GetScriptAsset(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETSCRIPTASSET_OFFSET))(name);
		}

		static ::System::String* GetScene(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETSCENE_OFFSET))(name);
		}

		static ::System::String* GetMaterial(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETMATERIAL_OFFSET))(name);
		}

		static ::System::String* GetPngImage(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETPNGIMAGE_OFFSET))(name);
		}

		static ::System::String* GetJson(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETJSON_OFFSET))(name);
		}

		static ::System::String* GetByte(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_R_GETBYTE_OFFSET))(name);
		}
	};
}
