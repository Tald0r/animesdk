#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x6777700)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x6777710)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x67777C0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x6777870)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDBreakVector3___c__DisplayClass0_0_TypeDefinitionIndex = 69270;

	class LDBreakVector3___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* input; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDBREAKVECTOR3___C__DISPLAYCLASS0_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
