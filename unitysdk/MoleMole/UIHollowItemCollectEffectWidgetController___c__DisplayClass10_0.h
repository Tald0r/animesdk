#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_AC6D98911872E0CE;
namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIHollowItemCollectEffectWidgetController; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectLayerConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA36EFE0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__0_OFFSET UNITYSDK_OFFSET(0xA36EFF0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__1_OFFSET UNITYSDK_OFFSET(0xA36F000)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__2_OFFSET UNITYSDK_OFFSET(0xA36F010)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__3_OFFSET UNITYSDK_OFFSET(0xA36FA60)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__4_OFFSET UNITYSDK_OFFSET(0xA36FBE0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__7_OFFSET UNITYSDK_OFFSET(0xA36FF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectEffectWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 59053;

	class UIHollowItemCollectEffectWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* recycleCallback; // 0x10
		::System::Func_2<::Class_4_AC6D98911872E0CE*, ::UnityEngine::Vector3>* GetPieceIndexUIPos; // 0x18
		::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>* getFadeOutEffectParticle; // 0x20
		::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>* recycleFadeOutEffectParticle; // 0x28
		::DG::Tweening::TweenCallback* __9__7; // 0x30
		::Class_4_AC6D98911872E0CE* localPiece; // 0x38
		::MoleMole::UIHollowItemCollectEffectWidgetController* __4__this; // 0x40
		::UnityEngine::RectTransform* rectTrans; // 0x48
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig* layerConfig; // 0x50
		::System::Action* finishCallback; // 0x58
		::UnityEngine::Vector3 offset; // 0x60
		::System::Single totalTime; // 0x6C
		::System::Single currentZ; // 0x70
		::UnityEngine::Vector3 initPos; // 0x74
		::UnityEngine::Vector3 currentOffset; // 0x80
		::UnityEngine::Vector3 midPosition; // 0x8C
		::System::Single lastFrameIndex; // 0x98
		::System::Single collectDuration; // 0x9C
		::System::Single timer; // 0xA0
		::UnityEngine::Color overrideFadeInColor; // 0xA4
		::System::Single localBurstDuration; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Single _SetPath_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__0_OFFSET))(this);
		}

		::System::Void _SetPath_b__1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__1_OFFSET))(this, value);
		}

		::System::Void _SetPath_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__2_OFFSET))(this);
		}

		::System::Void _SetPath_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__3_OFFSET))(this);
		}

		::System::Void _SetPath_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__4_OFFSET))(this);
		}

		::System::Void _SetPath_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__7_OFFSET))(this);
		}
	};
}
