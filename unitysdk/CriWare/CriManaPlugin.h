#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x1B0AE190)
#define CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_USELEGACYDECODER_PC_OFFSET UNITYSDK_OFFSET(0x1B0AD8B0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE611B78A5_OFFSET UNITYSDK_OFFSET(0x1B0ADFF0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE62B7B053_OFFSET UNITYSDK_OFFSET(0x1B0AD790)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE7BFC56AA_OFFSET UNITYSDK_OFFSET(0x1B0ADF70)
#define CRIWARE_CRIMANAPLUGIN_CRIWARECFA78B41_OFFSET UNITYSDK_OFFSET(0x1B0AD160)
#define CRIWARE_CRIMANAPLUGIN_CRIWARED672C36F_OFFSET UNITYSDK_OFFSET(0x1B0AE070)
#define CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1B0ADCB0)
#define CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x1B0AE0F0)
#define CRIWARE_CRIMANAPLUGIN_GETVP9EXPANSIONCLASS_OFFSET UNITYSDK_OFFSET(0x1B0AD460)
#define CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1B0AD930)
#define CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B0ADC10)
#define CRIWARE_CRIMANAPLUGIN_ISVP9CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B0AD4D0)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x1B0AD6F0)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B0AD020)
#define CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET UNITYSDK_OFFSET(0x1B0AD1F0)
#define CRIWARE_CRIMANAPLUGIN_USELEGACYDECODER_PC_OFFSET UNITYSDK_OFFSET(0x1B0AD810)
#define CRIWARE_CRIMANAPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0AE220)
#define CRIWARE_CRIMANAPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0AE210)

namespace CriWare
{
	inline static constexpr unsigned int CriManaPlugin_TypeDefinitionIndex = 31294;

	class CriManaPlugin : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_renderingEventOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x7B80);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x7B84);
		}
		static ::System::Boolean* StaticGet_enabledMultithreadedRendering()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x7B85);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x7B88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Boolean graphicsMultiThreaded, ::System::Int32 num_decoders, ::System::Int32 max_num_of_entries)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET))(graphicsMultiThreaded, num_decoders, max_num_of_entries);
		}

		static ::System::Void SetupVp9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET))();
		}

		static ::System::Void SetConfigAdditonalParameters_PC(::System::Boolean use_h264_playback)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET))(use_h264_playback);
		}

		static ::System::Void UseLegacyDecoder_PC(::System::Boolean useLegacyDecoder)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_USELEGACYDECODER_PC_OFFSET))(useLegacyDecoder);
		}

		static ::System::Void InitializeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsLibraryInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET))();
		}

		static ::System::Void FinalizeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET))();
		}

		static ::System::Type* GetVp9ExpansionClass()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETVP9EXPANSIONCLASS_OFFSET))();
		}

		static ::System::Boolean IsVp9CodecSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISVP9CODECSUPPORTED_OFFSET))();
		}

		static ::System::UInt32 GetPrimeBufferAlignmentSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET))();
		}

		static ::System::Void CRIWARECFA78B41(::System::Int32 graphics_api, ::System::Boolean graphics_multi_threaded, ::System::Int32 num_decoders, ::System::Int32 num_of_max_entries)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARECFA78B41_OFFSET))(graphics_api, graphics_multi_threaded, num_decoders, num_of_max_entries);
		}

		static ::System::Void CRIWARE7BFC56AA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE7BFC56AA_OFFSET))();
		}

		static ::System::Boolean CRIWARE611B78A5()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE611B78A5_OFFSET))();
		}

		static ::System::Void CRIWARED672C36F()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARED672C36F_OFFSET))();
		}

		static ::System::UInt32 criManaUnity_GetPrimeBufferAlignmentSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET))();
		}

		static ::System::Void criManaUnity_UseLegacyDecoder_PC(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_USELEGACYDECODER_PC_OFFSET))(enable);
		}

		static ::System::Void CRIWARE62B7B053(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE62B7B053_OFFSET))(enable);
		}
	};
}
