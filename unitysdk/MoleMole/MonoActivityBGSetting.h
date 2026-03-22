#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_857393ED9A5330F8.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class Class_1_64C0AC1767DE73DA;
class Class_1_FD527C2E5BE8E099;
namespace MoleMole { class ActivitBGAnimationSequence; }
namespace MoleMole { class ActivitBGSpineSequence; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOACTIVITYBGSETTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x8B1E3A0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_CLEAR_OFFSET UNITYSDK_OFFSET(0x8B1E9F0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x8B1E8F0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8B1E7B0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8B1E750)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8B1E540)
#define MOLEMOLE_MONOACTIVITYBGSETTING_SETUP_OFFSET UNITYSDK_OFFSET(0x8B1E460)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x8B1E670)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTSPINEANIMATION_OFFSET UNITYSDK_OFFSET(0x8B1EAB0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTUNITYANIMATION_OFFSET UNITYSDK_OFFSET(0x8B1ECA0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_START_OFFSET UNITYSDK_OFFSET(0x8B1E4E0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STOPPLAY_OFFSET UNITYSDK_OFFSET(0x8B1EEE0)
#define MOLEMOLE_MONOACTIVITYBGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x8B1EF60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityBGSetting_TypeDefinitionIndex = 51956;

	class MonoActivityBGSetting : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::Enum_3_857393ED9A5330F8 site; // 0x58
		::System::Boolean useSpineSequence; // 0x5C
		::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>* spineSequence; // 0x60
		::System::Boolean useAnimationSequence; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>* animationSequence; // 0x70
		::Class_1_64C0AC1767DE73DA* spineSequencePlayer; // 0x78
		::Class_1_FD527C2E5BE8E099* animSequencePlayer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLEAR_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_SETUP_OFFSET))(this);
		}

		::System::Void StartSpineAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTSPINEANIMATION_OFFSET))(this);
		}

		::System::Void StartUnityAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTUNITYANIMATION_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTPLAY_OFFSET))(this);
		}

		::System::Void StopPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STOPPLAY_OFFSET))(this);
		}
	};
}
