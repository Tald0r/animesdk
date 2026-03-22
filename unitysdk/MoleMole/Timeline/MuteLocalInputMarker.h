#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xB30F480)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xB30F4E0)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0xB30F4F0)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xB30ED10)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0xB30F0F0)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xB30EE40)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xB30F220)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xB30F410)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xB30F560)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MuteLocalInputMarker_TypeDefinitionIndex = 73909;

	class MuteLocalInputMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		// static const ::System::Int32 TL_MUTE_INPUT_PRIORITY = 0x65; // 0x0
		// static const ::System::String* TL_MUTE_INPUT_GROUP_TAG; // 0x0
		::System::Boolean isMute; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_17BD30EFE8176014()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_17BD30EFE8176014_OFFSET))(this);
		}

		::System::Void Method_4_60BAB51FAB46DBD1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_60BAB51FAB46DBD1_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_4_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_METHOD_4_82E992240300FB30_OFFSET))(this);
		}
	};
}
