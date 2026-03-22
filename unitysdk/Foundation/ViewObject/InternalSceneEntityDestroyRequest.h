#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3EC97B498E0B85D2_1;

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int InternalSceneEntityDestroyRequest_TypeDefinitionIndex = 66961;

	struct alignas(8) InternalSceneEntityDestroyRequest
	{
		::System::UInt32 NetID; // 0x10
		::System::UInt32 EntityID; // 0x14
		::Class_3_3EC97B498E0B85D2_1* reason; // 0x18
		::Foundation::ViewObject::GroupMemberIdentifier member; // 0x20
	};
}
