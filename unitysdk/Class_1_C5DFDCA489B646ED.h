#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"
#include "unitysdk/System/Object.h"

class Class_1_C98C01B00CFF7D8A;
class Class_5_8A5B236F53009830;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::HollowChessboard::ChessboardView { class ChessPieceLocalMoveEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C5DFDCA489B646ED_METHOD_1_30AA1DD3FBC623AD_OFFSET UNITYSDK_OFFSET(0x94CFFC0)
#define CLASS_1_C5DFDCA489B646ED_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x94D04A0)
#define CLASS_1_C5DFDCA489B646ED_METHOD_1_C337ACE00A548B46_OFFSET UNITYSDK_OFFSET(0x94CFED0)
#define CLASS_1_C5DFDCA489B646ED_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x94CFF90)
#define CLASS_1_C5DFDCA489B646ED__CTOR_OFFSET UNITYSDK_OFFSET(0x94CFEC0)

inline static constexpr unsigned int Class_1_C5DFDCA489B646ED_TypeDefinitionIndex = 67680;

class Class_1_C5DFDCA489B646ED : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5DFDCA489B646ED__CTOR_OFFSET))(this);
	}

	static ::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect* Method_1_C337ACE00A548B46(::MoleMole::PieceModelAnimType a1, ::System::Boolean a2, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a3, ::System::Action* a4)
	{
		return ((::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect*(*)(::MoleMole::PieceModelAnimType, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C5DFDCA489B646ED_METHOD_1_C337ACE00A548B46_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5DFDCA489B646ED_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_30AA1DD3FBC623AD(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_C98C01B00CFF7D8A* a2, ::Class_5_8A5B236F53009830* a3, ::System::Boolean a4, ::MoleMole::PieceModelAnimType a5, ::Enum_3_ABCAEFDF06E3479A a6, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>* a7)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_C98C01B00CFF7D8A*, ::Class_5_8A5B236F53009830*, ::System::Boolean, ::MoleMole::PieceModelAnimType, ::Enum_3_ABCAEFDF06E3479A, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_C5DFDCA489B646ED_METHOD_1_30AA1DD3FBC623AD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5DFDCA489B646ED_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
