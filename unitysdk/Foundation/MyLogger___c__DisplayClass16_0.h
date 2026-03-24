#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4378C0)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS16_0__DRAWELLIPSOID_B__0_OFFSET UNITYSDK_OFFSET(0x1B4378D0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass16_0_TypeDefinitionIndex = 8053;

	class MyLogger___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion rotation; // 0x10
		::UnityEngine::Color color; // 0x20
		::UnityEngine::Vector3 position; // 0x30
		::Foundation::MyLogger_GeometryType type; // 0x3C
		::UnityEngine::Color wiredColor; // 0x40
		::System::Single width; // 0x50
		::System::Single height; // 0x54

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
