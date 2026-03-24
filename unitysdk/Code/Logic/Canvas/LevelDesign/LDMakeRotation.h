#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x76A52C0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x76A5410)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDMakeRotation_TypeDefinitionIndex = 47916;

	class LDMakeRotation : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMAKEROTATION_REGISTERPORTS_OFFSET))(this);
		}
	};
}
