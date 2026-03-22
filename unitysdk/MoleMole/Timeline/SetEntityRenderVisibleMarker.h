#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD38AB40)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xD38ABA0)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0xD38ABB0)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_50E01D349D4C99B2_OFFSET UNITYSDK_OFFSET(0xD38AA10)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xD38A7E0)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_FEE8CC822D58D83B_OFFSET UNITYSDK_OFFSET(0xD38A9A0)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xD38AAD0)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD38AC20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SetEntityRenderVisibleMarker_TypeDefinitionIndex = 76288;

	class SetEntityRenderVisibleMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean IsVisible; // 0x28
		::System::Boolean IncludeAllEntities; // 0x29
		::System::Boolean IncludeAllLocalAvatar; // 0x2A
		::System::Boolean IncludeAllServerEntities; // 0x2B
		::System::Collections::Generic::List_1<::System::Int32>* ServerEntityTags; // 0x30
		::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* _candidateEntityList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_8CA05BCD86E125DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_8CA05BCD86E125DF_OFFSET))(this);
		}

		::System::Void Method_4_50E01D349D4C99B2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_50E01D349D4C99B2_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_FEE8CC822D58D83B(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_METHOD_4_FEE8CC822D58D83B_OFFSET))(this, a1);
		}
	};
}
