#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET UNITYSDK_OFFSET(0x913FD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_BigTvUIHelper_TypeDefinitionIndex = 42987;

	class UIHollowChessboard3DModelController_BigTvUIHelper : public ::System::Object
	{
	public:
		static ::MoleMole::UIWindowController* OpenUI(::Enum_3_7609C87F8335DE37_1 type)
		{
			return ((::MoleMole::UIWindowController*(*)(::Enum_3_7609C87F8335DE37_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_BIGTVUIHELPER_OPENUI_OFFSET))(type);
		}
	};
}
