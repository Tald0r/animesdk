#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD34760)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS16_0__DRAWELLIPSOID_B__0_OFFSET UNITYSDK_OFFSET(0x1AD34770)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass16_0_TypeDefinitionIndex = 8153;

	class MyLogger___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Foundation::MyLogger_GeometryType type; // 0x10
		::UnityEngine::Quaternion rotation; // 0x14
		::UnityEngine::Color color; // 0x24
		::UnityEngine::Vector3 position; // 0x34
		::System::Single height; // 0x40
		::UnityEngine::Color wiredColor; // 0x44
		::System::Single width; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawEllipsoid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS16_0__DRAWELLIPSOID_B__0_OFFSET))(this);
		}
	};
}
