#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x1AB35F40)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x1AB35EB0)
#define CRIWARE_CRIFSPLUGIN_CRIWARE1012AF20_OFFSET UNITYSDK_OFFSET(0x1AB35DB0)
#define CRIWARE_CRIFSPLUGIN_CRIWARE601ABE43_OFFSET UNITYSDK_OFFSET(0x1AB35D30)
#define CRIWARE_CRIFSPLUGIN_CRIWARE74A6103A_OFFSET UNITYSDK_OFFSET(0x1AB35E30)
#define CRIWARE_CRIFSPLUGIN_CRIWARE8451156E_OFFSET UNITYSDK_OFFSET(0x1AB35740)
#define CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1AB35B10)
#define CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1AB35810)
#define CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1AB35A70)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x1AB35800)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AB35650)
#define CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB35FD0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsPlugin_TypeDefinitionIndex = 31288;

	class CriFsPlugin : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7AF0);
		}
		static ::System::Int32* StaticGet_defaultInstallBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7AF4);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7AF8);
		}
		static ::System::Int32* StaticGet_installBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7AFC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Int32 num_loaders, ::System::Int32 num_binders, ::System::Int32 num_installers, ::System::Int32 argInstallBufferSize, ::System::Int32 max_path, ::System::Boolean minimize_file_descriptor_usage, ::System::Boolean enable_crc_check)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET))(num_loaders, num_binders, num_installers, argInstallBufferSize, max_path, minimize_file_descriptor_usage, enable_crc_check);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Int32 device_read_bps)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(device_read_bps);
		}

		static ::System::Void InitializeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsLibraryInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET))();
		}

		static ::System::Void FinalizeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET))();
		}

		static ::System::Void CRIWARE8451156E(::System::Int32 num_loaders, ::System::Int32 num_binders, ::System::Int32 num_installers, ::System::Int32 max_path, ::System::Boolean minimize_file_descriptor_usage, ::System::Boolean enable_crc_check)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE8451156E_OFFSET))(num_loaders, num_binders, num_installers, max_path, minimize_file_descriptor_usage, enable_crc_check);
		}

		static ::System::Void CRIWARE601ABE43()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE601ABE43_OFFSET))();
		}

		static ::System::Boolean CRIWARE1012AF20()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE1012AF20_OFFSET))();
		}

		static ::System::Void CRIWARE74A6103A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE74A6103A_OFFSET))();
		}

		static ::System::Int32 criFs_GetNumUsedLoaders(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET))(cur, max, limit);
		}

		static ::System::Int32 criFs_GetNumUsedInstallers(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(cur, max, limit);
		}
	};
}
