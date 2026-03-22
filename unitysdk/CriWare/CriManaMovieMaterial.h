#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterialBase.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1B0B5E60)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x1B0B5680)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_AMBISONICS_OFFSET UNITYSDK_OFFSET(0x1B0B5E50)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1B0B5F30)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_FILEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B0B60D0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x1B0B6150)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHAMBISONICS_OFFSET UNITYSDK_OFFSET(0x1B0B6160)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1B0B55E0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x1B0B5510)
#define CRIWARE_CRIMANAMOVIEMATERIAL_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B0B6000)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SETDATATOPLAYER_OFFSET UNITYSDK_OFFSET(0x1B0B6170)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1B0B5E70)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADVANCEDAUDIO_OFFSET UNITYSDK_OFFSET(0x1B0B5690)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_AMBISONICS_OFFSET UNITYSDK_OFFSET(0x1B0B5760)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1B0B5F40)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1B0B55F0)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x1B0B5520)
#define CRIWARE_CRIMANAMOVIEMATERIAL_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B0B6010)
#define CRIWARE_CRIMANAMOVIEMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B62F0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterial_TypeDefinitionIndex = 31298;

	class CriManaMovieMaterial : public ::CriWare::CriManaMovieMaterialBase
	{
	public:
		::System::String* _moviePath; // 0x78
		::System::Boolean _loop; // 0x80
		::System::Boolean _additiveMode; // 0x81
		::System::Boolean _advancedAudio; // 0x82
		::System::Boolean _ambisonics; // 0x83
		::System::Boolean _applyTargetAlpha; // 0x84
		::System::Boolean _uiRenderMode; // 0x85
		::UnityEngine::GameObject* ambisonicSource; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL__CTOR_OFFSET))(this);
		}

		::System::String* get_moviePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_MOVIEPATH_OFFSET))(this);
		}

		::System::Void set_moviePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_MOVIEPATH_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_LOOP_OFFSET))(this, value);
		}

		::System::Boolean get_advancedAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADVANCEDAUDIO_OFFSET))(this);
		}

		::System::Void set_advancedAudio(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADVANCEDAUDIO_OFFSET))(this, value);
		}

		::System::Boolean get_ambisonics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_AMBISONICS_OFFSET))(this);
		}

		::System::Void set_ambisonics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_AMBISONICS_OFFSET))(this, value);
		}

		::System::Boolean get_additiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_ADDITIVEMODE_OFFSET))(this);
		}

		::System::Void set_additiveMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_ADDITIVEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_applyTargetAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_APPLYTARGETALPHA_OFFSET))(this);
		}

		::System::Void set_applyTargetAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_APPLYTARGETALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_uiRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_UIRENDERMODE_OFFSET))(this);
		}

		::System::Void set_uiRenderMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SET_UIRENDERMODE_OFFSET))(this, value);
		}

		::System::UInt32 get_FilePathLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_FILEPATHLENGTH_OFFSET))(this);
		}

		::System::Boolean get_initializeWithAdvancedAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHADVANCEDAUDIO_OFFSET))(this);
		}

		::System::Boolean get_initializeWithAmbisonics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_GET_INITIALIZEWITHAMBISONICS_OFFSET))(this);
		}

		::System::Void SetDataToPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIAL_SETDATATOPLAYER_OFFSET))(this);
		}
	};
}
