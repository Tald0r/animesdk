#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Media { class SystemSound; }

#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_ASTERISK_OFFSET UNITYSDK_OFFSET(0x191BA4E0)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_BEEP_OFFSET UNITYSDK_OFFSET(0x191BA520)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_EXCLAMATION_OFFSET UNITYSDK_OFFSET(0x191BA560)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_HAND_OFFSET UNITYSDK_OFFSET(0x191BA5A0)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_QUESTION_OFFSET UNITYSDK_OFFSET(0x191BA5E0)
#define SYSTEM_MEDIA_SYSTEMSOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x191BA4A0)

namespace System::Media
{
	inline static constexpr unsigned int SystemSounds_TypeDefinitionIndex = 4152;

	class SystemSounds : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS__CTOR_OFFSET))(this);
		}

		static ::System::Media::SystemSound* get_Asterisk()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_ASTERISK_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Beep()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_BEEP_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Exclamation()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_EXCLAMATION_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Hand()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_HAND_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Question()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_QUESTION_OFFSET))();
		}
	};
}
