#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

class Class_2_5AD8A37AA06A2983_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB5BA560)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_METHOD_5_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0xB5BAA50)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_METHOD_5_6CBA94B39B120DE0_OFFSET UNITYSDK_OFFSET(0xB5BA9B0)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK_METHOD_5_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xB5BA790)
#define MOLEMOLE_TIMELINE_WWISEMUSICTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BA6E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseMusicTrack_TypeDefinitionIndex = 77269;

	class WwiseMusicTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_5AD8A37AA06A2983_1*>* paramList; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_E69AA2E64A20143D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_METHOD_5_E69AA2E64A20143D_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_6CBA94B39B120DE0(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_METHOD_5_6CBA94B39B120DE0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_39FD7185C859CEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICTRACK_METHOD_5_39FD7185C859CEAD_OFFSET))(this);
		}
	};
}
