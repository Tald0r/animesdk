#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_20;
class Class_1_9876AE41D0DC17C7;
class Class_2_88153825858EC9D2;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x13F7FEF0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_GET_GETSCREENINDEX_OFFSET UNITYSDK_OFFSET(0x13F7FD40)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x13F7FCD0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_RUN_OFFSET UNITYSDK_OFFSET(0x13F7FC20)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_TEXTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x13F7FDB0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13F80200)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x13F80210)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x13F80270)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyAnimAction_TypeDefinitionIndex = 50143;

	class ShowNpcBodyAnimAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Class_2_88153825858EC9D2* _actionContext; // 0x28
		::System::String* TextureSheet; // 0x30
		::System::String* RefTextureSheet; // 0x38
		::System::Boolean ClearSwitchEffectIfAnim; // 0x40
		::System::Boolean UseAsset; // 0x41
		::System::Boolean NeedUseOffset; // 0x42
		::System::Int32 npcid; // 0x44
		::System::Int32 ScreenIndex; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_RUN_OFFSET))(this, context);
		}

		::System::Void HandleNormalView(::Class_1_9876AE41D0DC17C7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_HANDLENORMALVIEW_OFFSET))(this, info);
		}

		::System::Int32 get_GetScreenIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_GET_GETSCREENINDEX_OFFSET))(this);
		}

		::System::Void TextureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_TEXTURECALLBACK_OFFSET))(this);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
