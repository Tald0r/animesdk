#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivitySpineAnimationReference; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITBGSPINESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x94D9D70)

namespace MoleMole
{
	inline static constexpr unsigned int ActivitBGSpineSequence_TypeDefinitionIndex = 73777;

	class ActivitBGSpineSequence : public ::System::Object
	{
	public:
		::Spine::Unity::SkeletonGraphic* spineGraphic; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ActivitySpineAnimationReference*>* animList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITBGSPINESEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
