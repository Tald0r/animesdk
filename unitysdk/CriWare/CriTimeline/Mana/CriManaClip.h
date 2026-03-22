#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Mana/CriManaClipBase.h"

namespace System { class String; }
namespace UnityEngine { class TextAsset; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_DATAID_OFFSET UNITYSDK_OFFSET(0x1B0DB770)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEDATA_OFFSET UNITYSDK_OFFSET(0x1B0DB620)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIENAME_OFFSET UNITYSDK_OFFSET(0x1B0DB6B0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0x1B0DB610)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0DB970)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaClip_TypeDefinitionIndex = 31344;

	class CriManaClip : public ::CriWare::CriTimeline::Mana::CriManaClipBase
	{
	public:
		::System::String* m_moviePath; // 0xA0
		::UnityEngine::TextAsset* m_movieData; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP__CTOR_OFFSET))(this);
		}

		::System::String* get_MoviePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_MovieData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIEDATA_OFFSET))(this);
		}

		::System::String* get_MovieName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_MOVIENAME_OFFSET))(this);
		}

		::System::Int32 get_DataId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_GET_DATAID_OFFSET))(this);
		}
	};
}
