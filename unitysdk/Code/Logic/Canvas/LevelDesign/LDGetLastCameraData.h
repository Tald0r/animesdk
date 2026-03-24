#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x76A5140)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x76A52A0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDGetLastCameraData_TypeDefinitionIndex = 56028;

	class LDGetLastCameraData : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDGETLASTCAMERADATA_REGISTERPORTS_OFFSET))(this);
		}
	};
}
