#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ChessBoardChessAnimItemForList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0xCAE3870)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xCAE3790)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE3900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardGroupChessAnim_TypeDefinitionIndex = 43041;

	class ConfigChessboardGroupChessAnim : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ChessBoardChessAnimItemForList*>* ChessBoardChessRandomAnimList; // 0x18
		::System::String* PivotCellKey; // 0x20
		::UnityEngine::Vector2 InWaveTimeRange; // 0x28
		::UnityEngine::Vector2 RadiateWaveTimeRange; // 0x30
		::System::Boolean UseSpecific; // 0x38
		::System::Boolean UseCustomPivot; // 0x39
		::System::Single OverrideWaitTime; // 0x3C
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x40
		::MoleMole::Vector2Int RelativePos; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChessBoardChessAnimItemForList* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChessBoardChessAnimItemForList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPCHESSANIM_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}
