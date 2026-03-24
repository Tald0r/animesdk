#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcValueType.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x7A4F5C0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x7A4F720)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcGetValue_TypeDefinitionIndex = 46599;

	class HackerGameNpcGetValue : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Int32, ::MoleMole::ChessEntity*, ::MoleMole::FlowCanvas::HackerGameNpcValueType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETVALUE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::ChessEntity* a, ::MoleMole::FlowCanvas::HackerGameNpcValueType b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::FlowCanvas::HackerGameNpcValueType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETVALUE_INVOKE_OFFSET))(this, a, b);
		}
	};
}
