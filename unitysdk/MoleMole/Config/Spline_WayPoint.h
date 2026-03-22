#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x75ADE0)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x75AD50)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x75AE50)
#define MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_F777B3BEDBE68D53_OFFSET UNITYSDK_OFFSET(0x75AE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Spline_WayPoint_TypeDefinitionIndex = 42533;

	struct alignas(8) Spline_WayPoint
	{
		::System::String* Name; // 0x10
		::System::Int32 Index; // 0x18

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_F777B3BEDBE68D53(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_F777B3BEDBE68D53_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPLINE_WAYPOINT_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}
