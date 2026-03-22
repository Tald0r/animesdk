#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlBaseNode.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlLocalPosNode_PosType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x14182DD0)
#define MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14182E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlLocalPosNode_TypeDefinitionIndex = 55072;

	class ConfigCurveCtrlLocalPosNode : public ::MoleMole::Config::ConfigCurveCtrlBaseNode
	{
	public:
		::System::String* TargetTrans; // 0x48
		::MoleMole::Config::ConfigCurveCtrlLocalPosNode_PosType PosT; // 0x50
		::System::Boolean UseParentCoordinate; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
