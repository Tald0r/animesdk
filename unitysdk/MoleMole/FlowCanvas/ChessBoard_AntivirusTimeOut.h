#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"

namespace MoleMole::DefenseScene { class DefenseSceneAntivirusChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xB9FDB60)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9FDBF0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FDBC0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_AntivirusTimeOut_TypeDefinitionIndex = 45018;

	class ChessBoard_AntivirusTimeOut : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::DefenseScene::DefenseSceneAntivirusChessEntity*>
	{
	public:
		static ::System::String** StaticGet_StaticEventName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChessBoard_AntivirusTimeOut_TypeDefinitionIndex)->GetStaticField(0x2DD50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_ANTIVIRUSTIMEOUT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
