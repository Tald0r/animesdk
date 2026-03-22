#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x6BE08F0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET UNITYSDK_OFFSET(0x6BDFF10)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x6BE0AE0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x6BE0B60)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x6BE0AF0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction_TypeDefinitionIndex = 76860;

	class TextureSheetConfigAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x28
		::System::Boolean RandomPlay; // 0x2C
		::System::Boolean SpecialScreenBaseIndex; // 0x2D
		::System::Boolean DisableSync; // 0x2E
		::System::Boolean SendIconToServer; // 0x2F
		::System::Int32 BaseScreenIndex; // 0x30
		::System::Int32 ConfigID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET))(this);
		}
	};
}
