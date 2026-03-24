#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_909FADC0CC5C7D1F.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetGroupTrack; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define CLASS_1_F481004E4EB9A135_METHOD_1_40153F92DF7EC6B8_OFFSET UNITYSDK_OFFSET(0xD60F950)

inline static constexpr unsigned int Class_1_F481004E4EB9A135_TypeDefinitionIndex = 46953;

class Class_1_F481004E4EB9A135 : public ::System::Object
{
public:
	static ::MoleMole::Timeline::ZNet::ZNetGroupTrack* Method_1_40153F92DF7EC6B8(::UnityEngine::Timeline::TimelineAsset* a1, ::Enum_3_909FADC0CC5C7D1F a2)
	{
		return ((::MoleMole::Timeline::ZNet::ZNetGroupTrack*(*)(::UnityEngine::Timeline::TimelineAsset*, ::Enum_3_909FADC0CC5C7D1F))((::PBYTE)hIl2Cpp + CLASS_1_F481004E4EB9A135_METHOD_1_40153F92DF7EC6B8_OFFSET))(a1, a2);
	}
};
