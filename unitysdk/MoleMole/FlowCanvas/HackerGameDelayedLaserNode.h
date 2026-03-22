#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole { class HackerGameBaseDamage; }
namespace MoleMole::FlowCanvas { class DelayedLaser; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x141CAD50)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x141CAF40)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_START_OFFSET UNITYSDK_OFFSET(0x141CB1F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x141CCF00)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x141CD0F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x141CD210)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x141CD240)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameDelayedLaserNode_TypeDefinitionIndex = 52257;

	class HackerGameDelayedLaserNode : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* laserParticleKey; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Single>* alertDuration; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* chessEntityCollection; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* triggerPoint; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* alertTextureKey; // 0xC8
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>* PerformCache; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Single>*>* laserPerformSequence; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::HackerGameBaseDamage*>* damage; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* screenIndex; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Single>* damageDelay; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Single>* damageDuration; // 0xF8
		::FlowCanvas::FlowOutput* output; // 0x100
		::FlowCanvas::FlowInput* start; // 0x108
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* playerEntityCollection; // 0x110
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* boundList; // 0x118
		::FlowCanvas::ValueInput_1<::System::Int32>* laserWidthExtend; // 0x120
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::DelayedLaser*>* Data; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_START_OFFSET))(this, f);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE_UPDATE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEDELAYEDLASERNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
