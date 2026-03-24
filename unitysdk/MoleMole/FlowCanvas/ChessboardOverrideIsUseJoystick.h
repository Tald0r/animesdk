#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB894440)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB894700)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0xB894870)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xB894890)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardOverrideIsUseJoystick_TypeDefinitionIndex = 75490;

	class ChessboardOverrideIsUseJoystick : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean setOverride, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_INVOKE_OFFSET))(this, setOverride, value);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
