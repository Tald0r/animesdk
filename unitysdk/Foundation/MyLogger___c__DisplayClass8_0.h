#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEBD570)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__DRAWBONE_B__0_OFFSET UNITYSDK_OFFSET(0x1AEBD580)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass8_0_TypeDefinitionIndex = 8050;

	class MyLogger___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Foundation::MyLogger_GeometryType type; // 0x10
		::UnityEngine::Quaternion rotation; // 0x14
		::UnityEngine::Color color; // 0x24
		::UnityEngine::Color wiredColor; // 0x34
		::System::Single width; // 0x44
		::UnityEngine::Vector3 position; // 0x48
		::System::Single length; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawBone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS8_0__DRAWBONE_B__0_OFFSET))(this);
		}
	};
}
