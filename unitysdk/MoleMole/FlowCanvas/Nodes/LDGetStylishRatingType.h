#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0xF1A11F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0xF1A1410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishRatingType_TypeDefinitionIndex = 77069;

	class LDGetStylishRatingType : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::Level::RatingType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE__CTOR_OFFSET))(this);
		}

		::MoleMole::Level::RatingType Invoke()
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGTYPE_INVOKE_OFFSET))(this);
		}
	};
}
