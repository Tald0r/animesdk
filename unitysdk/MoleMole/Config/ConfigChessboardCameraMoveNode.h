#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class AnimationCurveUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }
namespace MoleMole::Config { class IntUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x141814D0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x141815B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_TypeDefinitionIndex = 62094;

	class ConfigChessboardCameraMoveNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* StretchKey; // 0x18
		::MoleMole::Config::FloatUISpecialNum* MoveToCenterDuration; // 0x20
		::MoleMole::Config::AnimationCurveUISpecialNum* MoveToCenterCurve; // 0x28
		::MoleMole::Config::IntUISpecialNum* MoveType; // 0x30
		::MoleMole::Config::StringUISpecialNum* PredefinedKey; // 0x38
		::System::Boolean UseCustomZ; // 0x40
		::System::Boolean UseFixedViewPriority; // 0x41
		::System::Boolean IgnoreIfTargetInFocusRange; // 0x42
		::System::Boolean EnableAudio; // 0x43
		::MoleMole::Config::ConfigSetSection_Order ChessboardOrder; // 0x44
		::UnityEngine::Vector3 RelativePosition; // 0x48
		::UnityEngine::Vector3 DesignatedPos; // 0x54
		::MoleMole::Vector2Int PieceIndexOffset; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERAMOVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
