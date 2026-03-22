#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD37D420)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xD37D480)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_170E77FE9E506478_OFFSET UNITYSDK_OFFSET(0xD37D0D0)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_9B198E780F97C1DD_OFFSET UNITYSDK_OFFSET(0xD37D330)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET UNITYSDK_OFFSET(0xD37D490)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xD37D200)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xD37D3B0)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD37D520)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PerformNotifyMarker_TypeDefinitionIndex = 46810;

	class PerformNotifyMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* Params; // 0x28
		::System::Boolean forceTriggerOnExit; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_170E77FE9E506478()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_170E77FE9E506478_OFFSET))(this);
		}

		::System::Void Method_4_9B198E780F97C1DD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_9B198E780F97C1DD_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_A3BFBAFC3028D6CA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET))(this, a1);
		}

		::System::Void Method_4_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
