#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C9269CF301C32EEF.h"
#include "unitysdk/MoleMole/ChessStateMachine/ShowNpcBodyNewAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction_1.h"

class Class_1_43BD383C98B4C0C5_20;
class Class_1_9876AE41D0DC17C7;
class Class_3_7C37C76226C8F3C4;
namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x96F3180)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x96F30B0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_GETTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x96F1E70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x96F24A0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0x96F1ED0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x96F3360)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x96F36E0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x96F36F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x96F3750)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x96F3760)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyNewAction_TypeDefinitionIndex = 55741;

	class ShowNpcBodyNewAction : public ::MoleMole::ChessStateMachine::StateMachineEntityAction_1<::MoleMole::ChessStateMachine::ShowNpcBodyNewAction_RuntimeData>
	{
	public:
		::System::String* RefTextureSheet; // 0x48
		::System::String* TextureSheet; // 0x50
		::Class_3_7C37C76226C8F3C4* _actionContext; // 0x58
		::Enum_3_C9269CF301C32EEF entityType; // 0x60
		::System::Int32 ScreenIndex; // 0x64
		::System::Boolean UseAsset; // 0x68
		::System::Boolean NeedUseOffset; // 0x69
		::System::Boolean useBehavior; // 0x6A
		::System::Boolean ClearSwitchEffectIfAnim; // 0x6B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION__CTOR_OFFSET))(this);
		}

		::System::String* GetTextureSheet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_GETTEXTURESHEET_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Void HandleNormalView(::Class_1_9876AE41D0DC17C7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_HANDLENORMALVIEW_OFFSET))(this, info);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_UPDATE_OFFSET))(this);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_UPDATE_OFFSET))(this);
		}
	};
}
